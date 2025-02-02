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

The function will return 1.### minstack

Problem Description
-------------------

Rar the Cat has developed a new data structure, the *MinStack*!

Rar's data structure supports the following operations:

1.  *push*: pushing an integer *X* to the top of the stack.
2.  *pop*: removes the top integer from the stack.
3.  *top*: retrieves the value of the top integer on the stack.
4.  *getMin*: retrieves the value of the minimum integer in the stack.

There will be a total of *Q* queries to the data structure. Help Rar implement it.

Implementation Details
----------------------

This is a function-call question. You are to implement the following functions:

1.  *void push(int X)*: push *X* into the stack.
2.  *void pop()*: remove the top element from the stack.
3.  *int top()*: returns (but not remove) the top element on the stack.
4.  *int getMin()*: returns (but not remove) the minimum element on the stack.

It is guaranteed that *pop*, *top* and *getMin* will not be called when the stack is empty.

You may access the sample grader and solution template from the *Attachments* tab to test your solutions.

Limits
------

Subtask 1 (15%): 1 ≤ Q ≤ 103, 1 ≤ X ≤ 109.

Subtask 2 (23%): 1 ≤ Q ≤ 105, 1 ≤ X ≤ 109.

Subtask 3 (17%): 1 ≤ Q ≤ 3 * 106, 1 ≤ X ≤ 2.

Subtask 4 (10%): 1 ≤ Q ≤ 3 * 106, 1 ≤ X ≤ 109. *pop* will never be called.

Subtask 5 (35%): 1 ≤ Q ≤ 3 * 106, 1 ≤ X ≤ 109.

Subtask 6 (0%): Sample Testcases

Sample Testcase 1
-----------------

### Input

6
0 5
0 9
2
3
0 1
3

### Output

9
5
1

Sample Testcase 2
-----------------

### Input

7
0 3
0 1
3
2
1
0 5
3

### Output

1
1
3