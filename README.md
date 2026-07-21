👩‍💻 About Me

Hi, I'm Sweta Jha, a Computer Science and Engineering student interested in:

Data Structures and Algorithms
Competitive Programming
Problem Solving
Full-Stack Development
Software Engineering

This repository represents my continuous learning journey in Competitive Programming.

I am using this repository to improve:

Logical thinking
Algorithmic problem-solving
Complexity analysis
Pattern recognition
Implementation skills
Debugging skills
🎯 Why This Repository Exists

Many programming repositories follow this pattern:

Problem → Code → Accepted

But solving a problem is more than writing the final code.

The real journey is:

Problem
   ↓
What is the simplest possible solution?
   ↓
Can it handle the constraints?
   ↓
If not, why?
   ↓
What is the bottleneck?
   ↓
What observation can remove the bottleneck?
   ↓
Can the solution be optimized?
   ↓
Why does the optimized approach work?

This repository focuses on that journey.

🧠 My Problem-Solving Framework

For every problem, I try to follow this process.

1️⃣ Understand the Problem

Before thinking about code, I try to answer:

What exactly is given?
What do I need to find?
What are the constraints?
What operations are allowed?
Are there hidden mathematical properties?

A problem should not be coded until its requirements are clear.

2️⃣ Analyze the Constraints

Constraints are often the biggest hint.

For example:

Constraint	Possible Complexity
n ≤ 10	O(n!), O(2ⁿ) may work
n ≤ 20	O(2ⁿ) may work
n ≤ 100	O(n³) may work
n ≤ 1,000	O(n²) may work
n ≤ 100,000	O(n log n) or O(n) preferred
n ≤ 1,000,000	Usually O(n) or better
n ≤ 10¹⁸	Mathematics / O(log n) usually required

The constraints help answer:

How much work is affordable?

🐢 Brute Force First

A brute-force solution is often the first solution that comes to mind.

That is not a bad thing.

Brute force helps us:

Understand the problem
Build a correct baseline
Verify sample cases
Discover the bottleneck
Compare optimized solutions

For every problem, I try to ask:

What is the most straightforward way to try every possibility?

⚠️ Why Brute Force Fails

Instead of simply saying:

O(n²) is slow

I try to calculate the actual number of operations.

For example:

n = 100,000

O(n²)
= 100,000 × 100,000
= 10,000,000,000 operations

This is approximately:

10¹⁰ operations

which is usually too slow.

But:

O(n log n)

requires approximately:

100,000 × log₂(100,000)
≈ 1.7 × 10⁶ operations

which is significantly more practical.

The important question is:

Where exactly is the time being wasted?

💡 Finding the Bottleneck

A solution becomes optimized when we identify its expensive part.

Example:

for every element
    scan the entire array

This usually gives:

O(n²)

The question becomes:

Can the repeated work be avoided?

Possible techniques:

HashMap
Set
Prefix Sum
Sorting
Binary Search
Two Pointers
Sliding Window
Dynamic Programming
Mathematical Observation
Sieve
Greedy Strategy
⚡ Optimization Mindset

The transition often looks like:

O(n²) → O(n log n)

or:

O(n²) → O(n)

or:

O(n) → O(log n)

The goal is not always to write complicated code.

Often, the best optimization is a simple observation.

A short solution may require a long thought process.

📚 Topics Covered
📦 Arrays
Traversal
Prefix Sum
Difference Array
Kadane's Algorithm
Frequency Counting
Two Pointers
Sliding Window
🔤 Strings
Character Frequency
String Manipulation
Palindromes
Substrings
Pattern Matching
🔍 Searching
Linear Search
Binary Search
Binary Search on Answer
🔃 Sorting
Basic Sorting
Sorting + Greedy
Custom Comparators
Sorting with Data Structures
🧮 Mathematics
Number Theory
Prime Numbers
Divisibility
GCD
LCM
Modular Arithmetic
Modular Inverse
Fast Exponentiation
🔢 Number Theory
Sieve of Eratosthenes
Prime Factorization
Divisors
Greatest Common Divisor
Least Common Multiple
Euler Totient Function
Fermat's Little Theorem
🎯 Greedy Algorithms
Local Optimization
Sorting-Based Greedy
Interval Problems
Exchange Arguments
🔁 Recursion and Backtracking
Subsets
Permutations
Combinations
Decision Problems
Search Space Pruning
🧠 Dynamic Programming
1D DP
2D DP
Knapsack
Grid DP
Subsequence DP
State Optimization
🌳 Trees
Binary Trees
Binary Search Trees
Tree Traversals
Lowest Common Ancestor
🌐 Graphs
BFS
DFS
Connected Components
Shortest Paths
Dijkstra
DSU
Topological Sorting
🗂️ Repository Structure

Each problem is organized separately.

Codeforces-Explained/
│
├── README.md
│
├── 776B-Sherlock-and-His-Girlfriend/
│   ├── README.md
│   └── solution.cpp
│
├── 1732A-Bestie/
│   ├── README.md
│   └── solution.cpp
│
└── ...

Each problem contains:

Problem Folder/
│
├── README.md
└── solution.cpp

The README.md explains the thought process.

The solution.cpp contains the implementation.

📝 Standard Problem Explanation Format

Every problem explanation follows this structure.

📌 Problem

A simplified explanation of the problem.

🔢 Constraints

Important input constraints.

The constraints help determine the required complexity.

🏷️ Topic

Example:

Topic: Number Theory + Sieve
Difficulty: Easy / Medium / Hard
🐢 Approach 1: Brute Force
Idea

What is the most direct solution?

Algorithm

Step-by-step explanation.

Complexity
Time Complexity: O(...)
Space Complexity: O(...)
❌ Why Brute Force Fails

This section explains:

Which operation is expensive?
How many times is it repeated?
What happens for maximum input?
Why does it exceed the time limit?
💡 Key Observation

The most important insight of the problem.

This is usually the part that changes the entire solution.

⚡ Approach 2: Optimized Solution
Idea

Explain how the observation removes unnecessary work.

Algorithm

Step-by-step solution.

Correctness Reasoning

Explain why the optimized approach gives the correct answer.

Complexity
Time Complexity: O(...)
Space Complexity: O(...)
🧪 Dry Run

A small example showing the algorithm step-by-step.

Example:

Input:
n = 10

Then show how the important variables change.

Dry runs help verify logic before implementation.

💻 Implementation

The final accepted implementation is stored in:

solution.cpp
⚠️ Common Mistakes

Some common mistakes include:

Integer overflow
Wrong loop boundaries
Off-by-one errors
Forgetting edge cases
Incorrect initialization
Using int instead of long long
Incorrect modulo handling
Incorrect indexing
🧪 Edge Case Checklist

Before submitting, I try to consider:

✓ Minimum input
✓ Maximum input
✓ n = 1
✓ Empty cases where applicable
✓ Duplicate values
✓ All values equal
✓ Already sorted input
✓ Reverse sorted input
✓ Negative values
✓ Large values
✓ Integer overflow
✓ Special mathematical cases
⏱️ Complexity Cheat Sheet
O(1)

Constant time.

Excellent.

O(log n)

Usually appears in:

Binary Search
Fast Exponentiation

Very efficient.

O(n)

Linear time.

Usually excellent for large input.

O(n log n)

Common in:

Sorting
Efficient Divide and Conquer

Usually acceptable for n ≤ 10⁵ or larger.

O(n²)

May work for small or medium constraints.

Usually problematic for very large n.

O(2ⁿ)

Usually only works for small n.

O(n!)

Only works for very small input sizes.

🔍 Pattern Recognition

One of the most important skills in Competitive Programming is recognizing patterns.

When I solve a new problem, I try to ask:

Can I sort the data?

Maybe the problem becomes greedy.

Can I store previous results?

Maybe Dynamic Programming or Memoization is useful.

Am I repeating the same calculation?

Maybe Prefix Sum or Precomputation can help.

Is the answer monotonic?

Maybe Binary Search on Answer works.

Is the problem about a range?

Maybe Prefix Sum or Sliding Window is useful.

Is the problem about connectivity?

Maybe DFS, BFS, or DSU is needed.

Is the problem about divisibility?

Maybe Number Theory is the key.

📈 Progress Tracking

This repository is also a record of my growth.

Problems Solved
Category	Progress
Total Problems	🔄 Updating
Easy	🔄 Updating
Medium	🔄 Updating
Hard	🔄 Updating
Topics Practiced
 Arrays
 Strings
 Sorting
 Binary Search
 Mathematics
 Number Theory
 Greedy
 Recursion
 Backtracking
 Dynamic Programming
 Trees
 Graphs
📊 My Learning Progression
Beginner
   ↓
Understand Basic Algorithms
   ↓
Solve Easy Problems
   ↓
Learn Common Patterns
   ↓
Solve Medium Problems
   ↓
Analyze Constraints Quickly
   ↓
Recognize Patterns
   ↓
Solve Harder Problems
   ↓
Build Independent Problem-Solving Ability
🧠 Learning from Wrong Answers

A Wrong Answer is not just a failure.

It can reveal:

A misunderstood condition
A missing edge case
An incorrect assumption
An overflow issue
A boundary error
A flaw in the algorithm

The goal is not to avoid all mistakes.

The goal is:

Never repeat the same mistake without understanding why it happened.

⏳ Learning from TLE

When a solution gets TLE, I ask:

1. What is the time complexity?
2. What is the maximum input size?
3. Which loop is expensive?
4. Am I repeating work?
5. Can I precompute something?
6. Can I use a better data structure?
7. Is there a mathematical observation?

TLE is often a sign that the algorithm needs improvement.

🏆 The Main Goal

This repository is not about:

❌ Solving the maximum number of problems

It is about:

✅ Understanding problems deeply
✅ Recognizing patterns
✅ Improving algorithmic thinking
✅ Writing efficient solutions
✅ Learning from mistakes
🔄 My Problem-Solving Loop
┌─────────────────────┐
│   Read the Problem  │
└──────────┬──────────┘
           ↓
┌─────────────────────┐
│ Analyze Constraints │
└──────────┬──────────┘
           ↓
┌─────────────────────┐
│ Think of Brute Force│
└──────────┬──────────┘
           ↓
┌─────────────────────┐
│ Find the Bottleneck │
└──────────┬──────────┘
           ↓
┌─────────────────────┐
│ Find the Observation│
└──────────┬──────────┘
           ↓
┌─────────────────────┐
│ Optimize the Idea   │
└──────────┬──────────┘
           ↓
┌─────────────────────┐
│ Prove the Logic     │
└──────────┬──────────┘
           ↓
┌─────────────────────┐
│ Implement & Test    │
└──────────┬──────────┘
           ↓
┌─────────────────────┐
│     Accepted ✅     │
└─────────────────────┘
🌱 Final Philosophy

A solution is not truly understood until you can explain:

What was the obvious approach?
Why was it too slow or incorrect?
What was the key observation?
How did the observation improve the solution?
Why does the final solution work?
What is the time and space complexity?
What can be learned for future problems?
⭐ Keep Solving
Think.
Try.
Fail.
Analyze.
Optimize.
Understand.
Repeat.

Every problem solved is one more pattern recognized.

🚀 Solve. Understand. Optimize. Repeat.

