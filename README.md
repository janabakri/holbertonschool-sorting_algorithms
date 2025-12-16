
\033[1mSORTING ALGORITHMS\033[0m
==================================================

\033[1mABOUT THE PROJECT\033[0m
--------------------------------------------------
This project contains implementations of several
sorting algorithms written in C as part of the
Holberton School curriculum.

The goal is to understand how different sorting
algorithms work, how efficient they are, and how
their time complexity changes depending on input.

Each algorithm:
- Sorts data in ascending order
- Prints the array or list after every swap

Data structures used:
- Arrays of integers
- Doubly linked lists


\033[1mREPOSITORY STRUCTURE (TREE)\033[0m
--------------------------------------------------
holbertonschool-sorting_algorithms
|
|-- sort.h
|
|-- 0-bubble_sort.c
|-- 0-O
|
|-- 1-insertion_sort_list.c
|-- 1-O
|
|-- 2-selection_sort.c
|-- 2-O
|
|-- 3-quick_sort.c
|-- 3-O
|
|-- 100-shell_sort.c
|
|-- 101-cocktail_sort_list.c
|-- 101-O
|
|-- print_array.c
`-- print_list.c


\033[1mHEADER FILE\033[0m
--------------------------------------------------
File: sort.h

Contains all function prototypes and the definition
of the listint_t structure for doubly linked lists.

Prototypes:
- bubble_sort
- insertion_sort_list
- selection_sort
- quick_sort
- shell_sort
- cocktail_sort_list


\033[1mALGORITHMS SCHEDULE\033[0m
--------------------------------------------------
| Algorithm        | Data Type        | Stable | In-place |
|------------------|------------------|--------|----------|
| Bubble Sort      | Array            | Yes    | Yes      |
| Insertion Sort   | Doubly List      | Yes    | Yes      |
| Selection Sort   | Array            | No     | Yes      |
| Quick Sort       | Array            | No     | Yes      |
| Shell Sort       | Array            | No     | Yes      |
| Cocktail Sort    | Doubly List      | Yes    | Yes      |


\033[1mTIME COMPLEXITY SUMMARY\033[0m
--------------------------------------------------
Bubble Sort:
  Best    O(n)
  Average O(n^2)
  Worst   O(n^2)

Insertion Sort:
  Best    O(n)
  Average O(n^2)
  Worst   O(n^2)

Selection Sort:
  Best    O(n^2)
  Average O(n^2)
  Worst   O(n^2)

Quick Sort:
  Best    O(n log n)
  Average O(n log n)
  Worst   O(n^2)

Shell Sort:
  Depends on gap sequence (Knuth)

Cocktail Sort:
  Best    O(n)
  Average O(n^2)
  Worst   O(n^2)


\033[1mCOMPILATION\033[0m
--------------------------------------------------
gcc -Wall -Wextra -Werror -pedantic *.c -o sort


\033[1mPROJECT COVERS\033[0m
--------------------------------------------------
- Multiple sorting algorithms
- Arrays and doubly linked lists
- In-place sorting
- Output after every swap
- Big O time complexity analysis


\033[1mAUTHORS\033[0m
--------------------------------------------------
Rama Dafer Alshehri
Jana Bakri
