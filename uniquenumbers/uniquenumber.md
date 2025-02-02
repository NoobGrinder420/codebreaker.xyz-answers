### uniquenumbers

Problem Description
-------------------

Rar the Cat likes collating numbers. Given a list of *N* integers, tell Rar the Cat how many unique integers there are in that list.

Input
-----

The first line of input will contain one integer, *N*. The second line of input will contain *N* integers, containing the list of integers that Rar the Cat wants to collate.

Output
------

Your output should contain one integer, the number of unique integers there are in Rar the Cat's list.

Limits
------

Subtask 1 (33%): 1 ≤ N ≤ 1000000. The list of integers will fit into a 32-bit signed int.\
Subtask 2 (67%): 1 ≤ N ≤ 1000000. The list of integers will NOT fit into a 64-bit unsigned int, but will be not more than 50 digits long.

Sample Input 1
--------------

10
1 2 3 4 5 6 6 8 9 10

Sample Output 1
---------------

9

Sample Input 2
--------------

10
-1 -2 -3 -4 0 0 -5 -6 -7 -1

Sample Output 2
---------------

8