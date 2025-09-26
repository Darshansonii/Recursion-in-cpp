# Recursion-in-cpp


## Aim
To study and understand the concept of recursion in C++, and explore how problems can be solved by functions calling themselves until a base condition is reached.

## Theory
Recursion is a programming technique in which a function calls itself directly or indirectly to solve a problem.
The problem is broken into smaller subproblems of the same type, and the process continues until a base case is satisfied.

Key concepts of recursion:
- **Recursive Function**: A function that calls itself.
- **Base Case**: The terminating condition that stops recursion.
- **Recursive Case**: The part of the function where it calls itself with a smaller/simpler input.
- **Call Stack**: Each recursive call is stored in memory; when the base case is reached, the stack unwinds and results are returned.

## Algorithms

### 1. Factorial using Recursion
```
Start
Input an integer n.
Define recursive function fact(n):
    If n == 0, return 1 (base case).
    Else, return n * fact(n-1) (recursive case).
Call fact(n) from main().
Display the result.
End
```

### 2. Sum of Natural Numbers using Recursion
```
Start
Input an integer n.
Define recursive function sum(n):
    If n <= 1, return n (base case).
    Else, return n + sum(n-1) (recursive case).
Call sum(n) from main().
Display the result.
End
```

### 3. String Reversal using Recursion
```
Start
Input a string str.
Find the length of the string n.
Define recursive function reverse(str, i, n):
    If i == n, stop (base case).
    Else, call reverse(str, i+1, n) (recursive case).
    After returning, print str[i].
Call reverse(str, 0, n) from main().
Display the reversed string.
End
```

## Conclusion
- Recursion allows functions to call themselves to solve problems.
- The base case is essential to prevent infinite recursion and stack overflow.
- It simplifies complex problems like factorial, string reversal, and sum of numbers.
- Recursion is elegant and powerful, but must be used carefully due to memory and performance considerations.
