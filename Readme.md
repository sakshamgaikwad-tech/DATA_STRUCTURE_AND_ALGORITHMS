<p align="center">
  <img src="https://img.shields.io/badge/LeetCode-250%2B%20Problems-skyblue?style=for-the-badge&logo=leetcode&logoColor=white" /> 
  <img src="https://img.shields.io/badge/DSA-Mastery-blueviolet?style=for-the-badge&logo=hackerrank&logoColor=white" />
</p>
 LeetCode Solutions

Welcome to my LeetCode Solutions repository.

This repository contains my solutions to LeetCode problems as part of my journey to strengthen my understanding of Data Structures and Algorithms, improve problem-solving skills, and prepare for software engineering interviews.

## About

The purpose of this repository is to:

* Practice Data Structures and Algorithms consistently
* Improve analytical and problem-solving abilities
* Prepare for coding interviews
* Track learning progress
* Study optimized approaches and coding patterns

Each solution focuses on:

* Clean and readable code
* Optimized time and space complexity
* Standard coding practices
* Maintainability and clarity

---

## Languages Used

* C++
* SQL

---

## Repository Structure

```text
LeetCode-Solutions/
│
├── Arrays/
├── Strings/
├── LinkedLists/
├── Stacks/
├── Queues/
├── Trees/
├── BinarySearchTrees/
├── Graphs/
├── DynamicProgramming/
├── Greedy/
├── Backtracking/
├── BitManipulation/
├── SlidingWindow/
├── TwoPointers/
└── SQL/
```

---

## Topics Covered

* Arrays
* Strings
* Linked Lists
* Stacks and Queues
* Trees and Binary Search Trees
* Graphs
* Dynamic Programming
* Greedy Algorithms
* Recursion and Backtracking
* Binary Search
* Sliding Window
* Two Pointers
* Hashing
* Bit Manipulation
* Heap and Priority Queue
* Trie
* Disjoint Set Union (DSU)

---

## Objectives

* Build strong DSA fundamentals
* Master common interview patterns
* Improve coding efficiency
* Maintain a consistent problem-solving routine
* Prepare for technical interviews at top technology companies

---

## Solution Format

Each solution may include:

* Problem Name
* Approach
* Code Implementation
* Time Complexity
* Space Complexity

Example:

```cpp
// Problem: Two Sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];

            if (mp.count(diff))
                return {mp[diff], i};

            mp[nums[i]] = i;
        }

        return {};
    }
};
```

Time Complexity: O(n)

Space Complexity: O(n)

---

## Repository Purpose

This repository serves as:

* A personal learning record
* A revision resource for Data Structures and Algorithms
* An interview preparation reference
* A demonstration of continuous learning and coding practice

---

## Contributions

This repository is maintained for educational and learning purposes. Suggestions and improvements are welcome.

---

## License

This project is intended for educational use and personal learning.
