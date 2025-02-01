### Fibonacci

Problem Statement
-----------------

In order to pass H3 Mathematics, you must prove to the examiner that you know every single Fibonacci number. However, you spent too long preparing for IOI and too little time mugging your H3 mathematics. Oh no!

In case you didn't know, the Fibonacci sequence is generated as follows:

*f*0 = 0\
*f*1 = 1\
*fi* = *f**i*-1 + *f**i*-2 for *i* ≥ 2

You will be asked to output *fi* for every *i* from 0 to *N*. As Fibonacci numbers can be very big, you must output them modulo 998244353.

Input
-----

The first and only line of input contains a single integer, *N* as defined in the statement.

Output
------

There should be *N*+1 lines in the output. The *ith* line should contain *fi*-1.

Limits
------

For all subtasks, *1 ≤ N ≤ 200000*.

Subtasks
--------

Subtask 1 (20 points): 1 ≤ N ≤ 15

Subtask 2 (80 points): No further constraints.

Sample Input
------------

6

Sample Output
-------------

0
1
1
2
3
5
8

Explanation
-----------

The Fibonacci sequence goes 0, 1, 1, 2, 3, 5, 8, ...