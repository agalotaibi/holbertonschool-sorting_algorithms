#include "sort.h"

/**
* swap_ints - Helper function to swap two integers.
* @a: Pointer to the first integer.
* @b: Pointer to the second integer.
*/
static void swap_ints(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}

/**
* lomuto_partition - Implements the Lomuto partition scheme.
* @array: The array to partition.
* @low: The starting index of the partition.
* @high: The ending index of the partition (pivot index).
* @size: The total size of the array (for printing).
*
* Return: The final index of the pivot.
*/
static size_t lomuto_partition(int *array, ssize_t low, ssize_t high, size_t size)
{
int pivot = array[high];
ssize_t i = low - 1;
ssize_t j;

for (j = low; j < high; j++)
{
if (array[j] < pivot)
{
i++;

if (i != j && array[i] != array[j])
{
swap_ints(&array[i], &array[j]);
print_array(array, size);
}
}
}

if (array[i + 1] != array[high])
{
swap_ints(&array[i + 1], &array[high]);
print_array(array, size);
}

return (i + 1);
}

/**
* quick_sort_recursive - The recursive engine for quick_sort.
* @array: The array to sort.
* @low: The starting index of the sub-array.
* @high: The ending index of the sub-array.
* @size: The total size of the array (for printing).
*/
static void quick_sort_recursive(int *array, ssize_t low, ssize_t high, size_t size)
{
size_t pivot_idx;

if (low < high)
{
pivot_idx = lomuto_partition(array, low, high, size);

quick_sort_recursive(array, low, pivot_idx - 1, size);
quick_sort_recursive(array, pivot_idx + 1, high, size);
}
}

/**
* quick_sort - Sorts an array of integers in ascending order
* using the Quick sort algorithm (Lomuto partition scheme).
* @array: The array to be sorted.
* @size: Number of elements in @array.
*
* Description: Prints the array after each time two elements are swapped.
*/
void quick_sort(int *array, size_t size)
{
if (array == NULL || size < 2)
return;

quick_sort_recursive(array, 0, (ssize_t)size - 1, size);
}
