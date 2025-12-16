Sorting Algorithms
📌 About the Project

This repository contains implementations of several sorting algorithms in C, completed as part of the Holberton School curriculum.

The goal of this project is to understand how different sorting algorithms work, how they compare in terms of efficiency, and how their time complexity changes depending on the input.
Each algorithm sorts data in ascending order and prints the array or list after every swap, as required.

The project includes algorithms that work on:

Arrays of integers

Doubly linked lists

📁 Repository Contents
holbertonschool-sorting_algorithms/
│
├── sort.h
│
├── 0-bubble_sort.c
├── 0-O
│
├── 1-insertion_sort_list.c
├── 1-O
│
├── 2-selection_sort.c
├── 2-O
│
├── 3-quick_sort.c
├── 3-O
│
├── 100-shell_sort.c
│
├── 101-cocktail_sort_list.c
├── 101-O
│
├── print_array.c
└── print_list.c

📌 Header File
sort.h

This file contains all function prototypes and the definition of the listint_t structure used for doubly linked lists.

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);

🚀 Implemented Algorithms
Bubble Sort

Files: 0-bubble_sort.c, 0-O

Bubble Sort works by repeatedly comparing adjacent elements and swapping them if they are in the wrong order.
The array is printed every time a swap occurs.

Time Complexity

Best case:    O(n)
Average case: O(n²)
Worst case:   O(n²)

Insertion Sort (Doubly Linked List)

Files: 1-insertion_sort_list.c, 1-O

Insertion Sort builds a sorted list one element at a time.
This implementation works on a doubly linked list and swaps nodes themselves instead of modifying their values.

The list is printed after each swap.

Time Complexity

Best case:    O(n)
Average case: O(n²)
Worst case:   O(n²)

Selection Sort

Files: 2-selection_sort.c, 2-O

Selection Sort divides the array into a sorted and an unsorted section.
It repeatedly selects the smallest element from the unsorted part and moves it to the correct position.

The array is printed after each swap.

Time Complexity

Best case:    O(n²)
Average case: O(n²)
Worst case:   O(n²)

Quick Sort (Lomuto Partition)

Files: 3-quick_sort.c, 3-O

Quick Sort is a divide-and-conquer algorithm.
This implementation uses the Lomuto partition scheme, where the last element of the array is chosen as the pivot.

The array is printed every time two elements are swapped.

Time Complexity

Best case:    O(n log n)
Average case: O(n log n)
Worst case:   O(n²)

Shell Sort (Knuth Sequence)

File: 100-shell_sort.c

Shell Sort is an optimized version of Insertion Sort that allows the exchange of elements far apart.
This implementation uses the Knuth sequence:

1, 4, 13, 40, 121, ...


The array is printed each time the gap is reduced.

No Big O file is required for Shell Sort, as its complexity depends on the gap sequence.

Cocktail Shaker Sort (Doubly Linked List)

Files: 101-cocktail_sort_list.c, 101-O

Cocktail Shaker Sort is a bidirectional variation of Bubble Sort.
It traverses the list forward and backward, swapping nodes when needed.

The list is printed after each swap.

Time Complexity

Best case:    O(n)
Average case: O(n²)
Worst case:   O(n²)

🛠 Compilation

Example compilation command:

gcc -Wall -Wextra -Werror -pedantic *.c -o sort

✅ What This Project Covers

Multiple sorting algorithms

Arrays and doubly linked lists

In-place sorting

Printing after every swap

Big O time complexity analysis

👤 Author
  Rama dafer ALshehri
  Jana bakri
