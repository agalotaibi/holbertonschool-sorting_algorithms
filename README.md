# 🔄 Sorting Algorithms in C — Learning Low-Level Programming
This repository is part of the low-level programming curriculum focusing on sorting algorithms and algorithm analysis.  
Each sorting algorithm included here is implemented in C, along with corresponding pseudocode and Big-O complexity evaluation.



## 📚 What We Learned

* How different sorting algorithms work
* How to manipulate arrays and linked lists in C
* Time complexity: best, average and worst case
* Space complexity and in-place vs non in-place sorting
* How data structure choice affects performance
* Writing clean and modular C code



## 📂 File Structure

| File | Description |
|------|-------------|
| `0-bubble_sort.c` | Implements Bubble Sort |
| `1-insertion_sort_list.c` | Implements Insertion Sort on a doubly linked list |
| `2-selection_sort.c` | Implements Selection Sort |
| `3-quick_sort.c` | Implements Quick Sort |




## Pseudocode

```c
🫧 Bubble Sort

repeat until no swap happens:
for i from 0 to n - 2:
if array[i] > array[i+1]:
swap(array[i], array[i+1])


📇 Insertion Sort

for each element from second node to end:
temp = current
while previous exists and previous.value > temp.value:
swap previous and temp


🎯 Selection Sort

for i from 0 to n-2:
min_index = i
for j from i+1 to n-1:
if array[j] < array[min_index]:
min_index = j
swap array[i] with array[min_index]


🪄 Quick Sort

if low < high:
pivot = partition(array, low, high)
quick_sort(array, low, pivot - 1)
quick_sort(array, pivot + 1, high)

`````

## 🅾️ Big-O Complexity

| Algorithm | Best | Average | Worst 
|----------|------|---------|-------|
| Bubble Sort | O(n) | O(n²) | O(n²) | 
| Insertion Sort | O(n) | O(n²) | O(n²) |
| Selection Sort | O(n²) | O(n²) | O(n²) |
| Quick Sort | O(n log n) | O(n log n) | O(n²) |


# 👩🏻‍💻 Authors

Amaal AlOtaibi
Alanoud Alsmail
