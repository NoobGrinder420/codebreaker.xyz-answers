### minimum

Problem Description
-------------------

Given an array of length *N*, find the minimum value within the array *A*.

This is a function call problem. There will be no input and output. You are supposed to implement the following functions:

1.  `int findMin(int N, int A[])`, which returns the minimum value within array *A* of length *N*.

Input
-----

Your function will be called with two parameters, *N*, the number of elements in the array, and *A[]*, the array itself.

Output
------

Your function should return an integer, the minimum number found in array *A[]*

Limits
------

0 <= A[i] <= 2 000 000 000

Subtask 1 (15%): 1 <= N <= 1 000\
Subtask 2 (35%): 1 <= N <= 1 000 000\
Subtask 3 (50%): 1 <= N <= 10 000 000

Sample Input 1
--------------

`findMin(2, [3, 5]);`

Sample Output 1
---------------

The function will return 3.

Sample Input 2
--------------

`findMin(5, [1, 5, 2, 3, 10]);`

Sample Output 2
---------------

The function will return 1.