### contestcalc

Problem Description
-------------------

After organising a long 3 hour contest, Peanut is now computing the final contest scores for all the *N* contestants who participated in the contest. The contest only consists of 10 programming problems, thus each contestant can only score a score from 0 to 1 000.

In order to make tabulating the scores easier, Peanut wants to only average the scores of a selected group of *C* contestants which will be randomly selected from the group of *N* contestants. Given the names and scores of all the contestants, and the names of the *C* selected contestants, help Peanut calculate the average of the scores of the selected contestants. It is guranteed that no two contestants have the same name.

Input
-----

The first line of input will contain one integer, *N*.\
The next *N* lines of input will contain one string and one integer each, with line *i* indicating the name and score of contestant *i*.\
The following line of input will contain one integer, *C*.\
The next *C* lines of input will contain one string each, where line *i* will contain the *i*th selected contestant.

Output
------

Your output should contain one integer, the average score of the *C* selected contestants, rounded down to the nearest integer.

Limits
------

For all subtasks: The name of the contestant is guranteed to be less than 20 characters.\
Subtask 1 (34%): 1 ≤ N ≤ 500\
Subtask 2 (66%): 1 ≤ N ≤ 100 000\
Subtask 3 (0%): As per sample testcases

Sample Input 1
--------------

3
Solomon 400
Samuel 500
Aaron 450
2
Samuel
Aaron

Sample Output 1
---------------

475

Sample Input 2
--------------

5
Sam 400
Jingchun 266
Samuel 266
Buck 100
Solomon 100
3
Buck
Solomon
Sam

Sample Output 2
---------------

200