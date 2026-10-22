# C++ DSA & LeetCode

My C++ solutions to Data Structures and Algorithms problems, organized by topic and LeetCode problem.

[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Platform](https://img.shields.io/badge/Platform-LeetCode-orange.svg)](https://leetcode.com/)

## Repository layout

Solutions are grouped by topic where possible. Some older problems are stored in their own numbered folders; those are kept intact so existing solutions and links are not lost.

| Topic | Location |
|---|---|
| Arrays & Hashing | [`Arrays_Hashing/`](./Arrays_Hashing/) |
| Two Pointers | [`Two_pointer/`](./Two_pointer/) and [`Two_Pointers/`](./Two_Pointers/) |
| Stack | [`Stack/`](./Stack/) |
| Binary Search | [`Binary_Search/`](./Binary_Search/) |
| Linked List | [`Linked_List/`](./Linked_List/) |
| Trees | [`Trees/`](./Trees/) |
| Graphs | [`Graphs/`](./Graphs/) |
| Dynamic Programming | [`Dynamic_Programming/`](./Dynamic_Programming/) |
| Backtracking | [`Backtracking/`](./Backtracking/) |
| Greedy | [`Greedy/`](./Greedy/) |
| Strings | [`Strings/`](./Strings/) |
| Individual problem folders | Numbered folders such as [`128-longest-consecutive-sequence/`](./128-longest-consecutive-sequence/) and [`232-implement-queue-using-stacks/`](./232-implement-queue-using-stacks/) |

## Finding a solution

- Topic-based problems live inside their topic folder.
- Numbered problem folders use the format `<problem-number>-<problem-slug>/`.
- Where available, a problem folder contains the C++ solution and a README with the problem statement and difficulty.
- Filenames are not fully standardized yet. New solutions should follow the naming convention below; existing files will be normalized gradually without changing solution logic.

## Naming convention for new problems

Use one folder per LeetCode problem:

```text
<topic>/<problem-number>-<problem-slug>/
├── <problem-slug>.cpp
└── README.md
```

Examples:

```text
Arrays_Hashing/
└── 0001-two-sum/
    ├── two-sum.cpp
    └── README.md
```

Use lowercase kebab-case for slugs and filenames. Keep the original LeetCode problem number (zero-padded to four digits for new folders, e.g. `0001-two-sum`) so problems are easy to search and sort. Keep each solution self-contained in LeetCode submission style unless a local helper file is genuinely required.

## Topics practiced

- Arrays and hashing
- Two pointers and sliding window
- Stack and monotonic stack
- Binary search
- Linked lists
- Trees and binary search trees
- Graphs and BFS/DFS
- Dynamic programming
- Backtracking
- Greedy algorithms
- Strings

## Goals

- Build strong problem-solving fundamentals.
- Recognize common interview patterns.
- Practise explaining time and space complexity.
- Prepare for software engineering internship interviews.

## Language

C++17-compatible solutions unless a problem requires otherwise.

---

*This repository is a learning log. Solutions may reflect different stages of practice; readability and correctness will improve as problems are revisited.*
