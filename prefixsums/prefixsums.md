### prefixsums

We have an array A of N integers. We also have Q queries, with each query consisting of two numbers, l and r.

Your solution should output the sum of numbers from A[l] to A[r] (1-indexed).

#### Constraints:

1 ≤ N, Q, A[i] ≤ 1e6 for 1 ≤ i ≤ N

#### Input:

First line: N and Q, the size of the array A and the number of queries respectively.

Subsequent line, N integers, the array A.

Subsequent Q lines, 2 integers each, l and r.

#### Output:

For each testcase, output the answer.

#### Sample Input:

13 11
11 3 14 12 14 1 8 9 1 1 5 14 4
1 11
6 8
1 2
4 11
6 13
7 10
1 9
10 13
6 13
3 7
3 10

#### Sample Output:

79
18
14
51
43
19
73
24
43
49
60