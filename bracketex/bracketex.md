### bracketex

Problem Description
-------------------

Given a bracket sequence of length *L*, you are to determine if it is valid!

A valid bracket sequence is defined *recursively* as:

-   "" *or*
-   (*x*) where *x* is a valid bracket sequence, *or*
-   *xy*, where *x* and *y* are valid bracket sequences.

However, two other pairs of brackets can be found in the bracket sequence, '[' which is to be matched with ']' and '{' which is to be matched with '}'.

Limits
------

For all tests: each character will be one of the following: '(', ')', '[', ']', '{', '}'.

Subtask 1 (10%): 1 ≤ L ≤ 4.

Subtask 2 (30%): 1 ≤ L ≤ 1000.

Subtask 3 (20%): 1 ≤ L ≤ 100000. However, each character will be either '(' or ')'.

Subtask 4 (40%): 1 ≤ L ≤ 100000.

Subtask 5 (0%): Sample Testcases.

Input
-----

The first line of input will contain one integer, *L*.

The second line of input will contain one string, the bracket sequence.

Output
------

The output should contain one string, either "Valid" or "Invalid".

Sample Testcase 1
-----------------

### Input

6
([]{})

### Output

Valid

Sample Testcase 2
-----------------

### Input

8
(())((()

### Output

Invalid

Sample Testcase 3
-----------------

### Input

6
([}{])

### Output

Invalid