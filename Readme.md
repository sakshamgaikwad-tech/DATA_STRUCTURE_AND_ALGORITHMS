<p align="center">
  <a href="https://leetcode.com/u/saksham_gaikwad/">
    <img src="https://img.shields.io/badge/LeetCode-250%2B%20Problems-skyblue?style=for-the-badge&logo=leetcode&logoColor=white" />
  </a>

  <img src="https://img.shields.io/badge/DSA-Mastery-blueviolet?style=for-the-badge&logo=hackerrank&logoColor=white" />

  <a href="https://leetcode.com/u/saksham_gaikwad/">
    <img src="https://img.shields.io/badge/View-LeetCode%20Profile-orange?style=for-the-badge&logo=leetcode&logoColor=white" />
  </a>
</p>

<h1 align="center">LeetCode Solutions</h1>

<p align="center">
A curated collection of LeetCode solutions focused on mastering Data Structures and Algorithms, strengthening problem-solving skills, and preparing for software engineering interviews.
</p>

---

## About

Welcome to my LeetCode Solutions repository.

This repository contains my personal solutions to LeetCode problems solved throughout my Data Structures and Algorithms journey. The goal is to continuously improve logical thinking, coding efficiency, and interview preparation through consistent practice.

Each solution is written with a focus on:

* Clean and readable code
* Optimized approaches
* Standard coding practices
* Time and space complexity analysis
* Long-term maintainability

---

## LeetCode Profile

You can view my LeetCode profile here:

🔗 **Profile:** https://leetcode.com/u/saksham_gaikwad/

### Current Focus

* Data Structures and Algorithms
* Competitive Programming
* Problem Solving
* Coding Interview Preparation
* Algorithm Optimization

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
├── Heap/
├── Trie/
├── DSU/
└── SQL/
```

---

## Topics Covered

### Data Structures

* Arrays
* Strings
* Linked Lists
* Stacks
* Queues
* Hash Maps
* Hash Sets
* Trees
* Binary Search Trees
* Heaps
* Tries
* Graphs
* Disjoint Set Union (DSU)

### Algorithms

* Binary Search
* Recursion
* Backtracking
* Dynamic Programming
* Greedy Algorithms
* Sliding Window
* Two Pointers
* Bit Manipulation
* Graph Algorithms
* Shortest Path Algorithms
* Topological Sorting
* Union Find
* Prefix Sum
* Monotonic Stack

### SQL

* Basic Queries
* Joins
* Aggregations
* Window Functions
* Subqueries
* Database Optimization Problems

---

## Objectives

This repository is built to:

* Strengthen DSA fundamentals
* Master common interview patterns
* Improve coding efficiency
* Maintain consistency in problem solving
* Prepare for technical interviews
* Track learning progress over time
* Build a strong problem-solving portfolio

---

## Solution Format

Each solution may include:

* Problem Name
* Problem Link
* Approach Explanation
* Optimized Code
* Time Complexity
* Space Complexity

### Example

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

### Complexity Analysis

```text
Time Complexity: O(n)

Space Complexity: O(n)
```

---

## Why This Repository?

This repository serves as:

* A personal learning journal
* A DSA revision resource
* An interview preparation guide
* A collection of optimized coding solutions
* Proof of continuous learning and consistency

---

## Learning Goals

* Solve problems consistently
* Improve algorithmic thinking
* Master advanced DSA concepts
* Learn multiple approaches to the same problem
* Build interview-ready coding skills
* Prepare for top software engineering roles

---

## Contributions

This repository is maintained primarily for educational purposes and personal learning.

Suggestions, improvements, and discussions are always welcome.

---

## Connect With Me

* LeetCode: https://leetcode.com/u/saksham_gaikwad/
* GitHub: https://github.com/YOUR_GITHUB_USERNAME
* LinkedIn: https://linkedin.com/in/YOUR_LINKEDIN_USERNAME

---

## License

This repository is intended for educational purposes, learning, and interview preparation.

Feel free to explore the solutions, learn from them, and use them as a reference for your own DSA journey.

