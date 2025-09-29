AIM:-
To study and implement Recursion in C++.

THEORY:-
Recursion is a powerful programming technique in which a function calls itself either directly or indirectly to solve a problem. In recursion, a problem is divided into smaller subproblems of the same type until a base case is reached, after which the solution is built back up.

Key Features of Recursion
Base Case → The condition that stops the recursion (prevents infinite calls).
Recursive Case → The part of the function where it calls itself with modified parameters to reduce the problem size.

Types of Recursion
Direct Recursion → A function calls itself directly.
Indirect Recursion → A function calls another function, which then calls the first function again.
Tail Recursion → The recursive call is the last operation performed in the function.
Non-tail Recursion → The recursive call is followed by some operations before returning.

Advantages of Recursion
Provides a natural, clean, and simple way to represent problems like factorial, Fibonacci, tree traversal, etc.
Reduces the need for complex loops.
Suitable for problems that can be broken into subproblems of the same type.

Disadvantages of Recursion
May be less efficient than iteration due to repeated function calls and stack usage.
If the base case is missing or incorrect, it can lead to infinite recursion and stack overflow.

Example:
The factorial of a number n can be defined recursively as:
Base Case: factorial(0) = 1
Recursive Case: factorial(n) = n * factorial(n-1)
Thus, recursion simplifies the problem into smaller instances until it reaches the base case.

Code-wise Algorithm
Program 1: Factorial using Recursion
Define a recursive function factorial(int n).
If n == 0 or n == 1, return 1 (base case).
Otherwise, return n * factorial(n-1) (recursive case).
Take input n from the user.
Call the function and display the result.

Program 2: Sum of First n Natural Numbers
Define a recursive function sum(int n).
If n == 0, return 0 (base case).
Otherwise, return n + sum(n-1) (recursive case).
Take input n from the user.
Display the result.

Program 3: Reverse a String using Recursion
Define a recursive function reverseString(string &s, int i, int j).
If i >= j, stop recursion (base case).
Swap characters at i and j.
Recursively call the function with (i+1, j-1).
Input a string from the user, call the function, and print the reversed string.

CONCLUSION:-
Recursion allows solving problems by breaking them into smaller subproblems of the same type.
Through the programs, we implemented:
Factorial calculation using recursion.
Sum of natural numbers using recursion.
String reversal using recursion.
We observed that recursion simplifies code but must be used carefully with a proper base case to avoid infinite recursion.
Thus, the concept of recursion in C++ has been successfully studied and implemented.
