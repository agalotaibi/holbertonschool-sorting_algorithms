#include "sort.h"

/**
* insertion_sort_list - Sorts a doubly linked list of integers in
* ascending order using the Insertion sort algorithm.
*
* @list: Double pointer to the head of the list
*/
void insertion_sort_list(listint_t **list)
{
listint_t *current, *next_node;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

current = (*list)->next;

while (current != NULL)
{
next_node = current->next;

while (current->prev != NULL && current->n < current->prev->n)
{
listint_t *left_node = current->prev;

left_node->next = current->next;

if (current->next != NULL)
current->next->prev = left_node;

current->prev = left_node->prev;

if (left_node->prev != NULL)
left_node->prev->next = current;
else
*list = current;

current->next = left_node;
left_node->prev = current;

print_list(*list);
}

current = next_node;
}
}
