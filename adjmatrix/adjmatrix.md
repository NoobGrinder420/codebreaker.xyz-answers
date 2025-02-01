### Adjacency Matrix

Input a list of connected nodes, and output its adjacency matrix.

Input
-----

2 Integers, *n* and *e*. *n* represents the amount of nodes and *e* represents the amount of edges. You may assume *n* is less than 50.

The following *e* lines will have 2 integers each, *ea* and *eb*. It means *ea* is connected to *eb* (bi-directional)

Output
------

Output the adjacency matrix, with '1' meaning connected and '0' meaning its not connected.

Sample Input
------------

5 8
1 2
1 3
1 4
1 5
2 4
3 5
5 4
3 4

Sample Output
-------------

01111
10010
10011
11101
10110