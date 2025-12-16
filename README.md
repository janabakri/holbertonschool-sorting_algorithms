**Sorting Algorithms**


*📌 About the Project*

This repository contains implementations of several sorting algorithms in C, completed as part of the Holberton School curriculum.

The goal of this project is to understand how different sorting algorithms work, how they compare in terms of efficiency, and how their time complexity changes depending on the input.

Each algorithm:

Sorts data in ascending order

Prints the array or list after every swap

Uses in-place sorting whenever possible

The project includes algorithms that work on:

Arrays of integers

Doubly linked lists

**📁 Repository Structure**

| File / Folder                   | Type           | Description                                  |
|---------------------------------|----------------|----------------------------------------------|
| holbertonschool-sorting_algorithms | Folder        | Root directory of the project                |
| sort.h                           | Header File    | Contains function prototypes & structures    |
| 0-bubble_sort.c                  | C File         | Bubble sort implementation                   |
| 0-O                              | Text File      | Bubble sort Big O notation                   |
| 1-insertion_sort_list.c          | C File         | Insertion sort for doubly linked lists      |
| 1-O                              | Text File      | Insertion sort Big O notation               |
| 2-selection_sort.c               | C File         | Selection sort implementation                |
| 2-O                              | Text File      | Selection sort Big O notation               |
| 3-quick_sort.c                   | C File         | Quick sort (Lomuto partition)               |
| 3-O                              | Text File      | Quick sort Big O notation                    |
| 100-shell_sort.c                 | C File         | Shell sort using Knuth sequence              |
| 101-cocktail_sort_list.c         | C File         | Cocktail Shaker sort for doubly linked lists|
| 101-O                            | Text File      | Cocktail shaker sort Big O notation         |





**📌 Header File**

sort.h

This file contains all function prototypes and the definition of the listint_t structure used for doubly linked lists.

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);

**🚀 Implemented Algorithms**

🟢 Bubble Sort


Files: 0-bubble_sort.c, 0-O

Bubble Sort works by repeatedly comparing adjacent elements and swapping them if they are in the wrong order.
The array is printed after every swap.

Time Complexity

Best case: O(n)

Average case: O(n²)

Worst case: O(n²)

🟢 Insertion Sort (Doubly Linked List)

Files: 1-insertion_sort_list.c, 1-O

Insertion Sort builds a sorted list one node at a time.
This implementation works on a doubly linked list and swaps nodes directly instead of modifying their values.

The list is printed after each swap.

Time Complexity

Best case: O(n)

Average case: O(n²)

Worst case: O(n²)

🟢 Selection Sort

Files: 2-selection_sort.c, 2-O

Selection Sort divides the array into a sorted and an unsorted section.
It repeatedly selects the smallest element from the unsorted portion and moves it into its correct position.

The array is printed after every swap.

Time Complexity

Best case: O(n²)

Average case: O(n²)

Worst case: O(n²)

🟢 Quick Sort (Lomuto Partition)

Files: 3-quick_sort.c, 3-O

Quick Sort is a divide-and-conquer algorithm.
This implementation uses the Lomuto partition scheme, choosing the last element as the pivot.

The array is printed after every swap.

Time Complexity

Best case: O(n log n)

Average case: O(n log n)

Worst case: O(n²)

🟢 Shell Sort (Knuth Sequence)

File: 100-shell_sort.c

Shell Sort is an optimized version of Insertion Sort that allows elements far apart to be swapped.
This implementation uses the Knuth sequence:

1, 4, 13, 40, 121, ...


The array is printed each time the gap is reduced.

No Big O file is required for Shell Sort since its complexity depends on the gap sequence.

🟢 Cocktail Shaker Sort (Doubly Linked List)

Files: 101-cocktail_sort_list.c, 101-O

Cocktail Shaker Sort is a bidirectional variation of Bubble Sort.
It traverses the list forward and backward, swapping nodes when needed.

The list is printed after each swap.

Time Complexity

Best case: O(n)

Average case: O(n²)

Worst case: O(n²)

**📊 Algorithms Schedule**

| Task | Algorithm               | Data Structure       | Stable | In-Place |
|------|------------------------|--------------------|--------|----------|
| 0    | Bubble Sort             | Array              | Yes    | Yes      |
| 1    | Insertion Sort          | Doubly Linked List | Yes    | Yes      |
| 2    | Selection Sort          | Array              | No     | Yes      |
| 3    | Quick Sort              | Array              | No     | Yes      |
| 100  | Shell Sort (Knuth)      | Array              | No     | Yes      |
| 101  | Cocktail Shaker Sort    | Doubly Linked List | Yes    | Yes      |

**🛠 Example compilation command:**  

```bash
gcc -Wall -Wextra -Werror -pedantic *.c -o sort


✅ What This Project Covers

Multiple sorting algorithms

Arrays and doubly linked lists

In-place sorting techniques

Printing output after every swap

Big O time complexity analysis

**👤 Authors**

Rama Dafer Alshehri

Jana Rasheed Bakri
