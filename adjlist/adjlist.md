### Adjacency List

Input a list of connected nodes, and output its adjacency list.

Input
-----

2 Integers, *n* and *e*. *n* represents the amount of nodes and *e* represents the amount of edges. You may assume *n*, *e* is less than 10000.

The following *e* lines will have 2 integers each, *ea* and *eb*. It means *ea* is connected to *eb* (bi-directional)

Output
------

Output the adjacency list

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

2 3 4 5
1 4
1 5 4
1 2 5 3
1 3 4

They have to outputed in the order in the input