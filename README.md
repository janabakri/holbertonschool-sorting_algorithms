Sorting Algorithms Project
This project implements multiple sorting algorithms in C with analysis of their time complexity using Big O notation.

🎯 Project Overview
A team implementation of fundamental and advanced sorting algorithms with proper complexity analysis and visualization.

📁 Project Structure
Core Files:
sort.h - Header file containing all function prototypes and data structures

0-bubble_sort.c - Bubble sort implementation for arrays

1-insertion_sort_list.c - Insertion sort implementation for doubly linked lists

2-selection_sort.c - Selection sort implementation for arrays

3-quick_sort.c - Quick sort implementation using Lomuto partition scheme

print_array.c - Helper function to print integer arrays

print_list.c - Helper function to print doubly linked lists

Test Files:
0-main.c - Test file for Bubble Sort

1-main.c - Test file for Insertion Sort

2-main.c - Test file for Selection Sort

3-main.c - Test file for Quick Sort

Complexity Analysis:
0-O - Big O notation for Bubble Sort

1-O - Big O notation for Insertion Sort

2-O - Big O notation for Selection Sort

3-O - Big O notation for Quick Sort

🚀 Algorithms Implemented
1. Bubble Sort (0-bubble_sort.c)
Function: void bubble_sort(int *array, size_t size);

Description:

Simple comparison-based algorithm that repeatedly steps through the list

Compares adjacent elements and swaps them if they're in the wrong order

Continues until no swaps are needed

Complexity Analysis:

Best Case: O(n) - Array is already sorted

Average Case: O(n²)

Worst Case: O(n²) - Array is reverse sorted

Space: O(1) - In-place sorting

Stability: Stable

2. Insertion Sort (1-insertion_sort_list.c)
Function: void insertion_sort_list(listint_t **list);

Description:

Builds the final sorted list one item at a time

Efficient for small data sets and nearly sorted data

Swaps entire nodes in doubly linked lists

Complexity Analysis:

Best Case: O(n) - List is already sorted

Average Case: O(n²)

Worst Case: O(n²) - List is reverse sorted

Space: O(1) - In-place sorting

Stability: Stable

3. Selection Sort (2-selection_sort.c)
Function: void selection_sort(int *array, size_t size);

Description:

Divides the input list into two parts: sorted and unsorted

Repeatedly selects the smallest (or largest) element from the unsorted part

Moves it to the end of the sorted part

Known for its simplicity but poor performance on large lists

Complexity Analysis:

Best Case: O(n²) - Even if sorted, must check all elements

Average Case: O(n²)

Worst Case: O(n²) - Always performs n(n-1)/2 comparisons

Space: O(1) - In-place sorting

Stability: Not stable (can change order of equal elements)

4. Quick Sort (3-quick_sort.c)
Function: void quick_sort(int *array, size_t size);

Description:

Divide and conquer algorithm

Uses Lomuto partition scheme with last element as pivot

Recursively sorts sub-arrays

Efficient for large datasets

Complexity Analysis:

Best Case: O(n log n) - Good pivot selection

Average Case: O(n log n)

Worst Case: O(n²) - Poor pivot selection (already sorted/reverse sorted)

Space: O(log n) - Recursive call stack

Stability: Not stable
