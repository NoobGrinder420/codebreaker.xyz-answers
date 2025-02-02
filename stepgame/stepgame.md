### stepgame

Problem Description
-------------------

Bradley is playing a very simple game with Peanut. In this game, there is a board containing *N* integers numbered 1 to *N* from left to right. Each integer can range between -1000 and 1000.

At one point in the game, Bradley has to step on one of the integers on the board, optionally travel right over a few integers, before getting off the board at a certain integer. All the integers he steps over are added together, and the person that has the minimum sum wins.

Bradley wants to minimise the sum of the integers he steps over. Given the integers that are on the board, help Bradley calculate the minimum sum of the integers he will step over provided he chooses his entry and exit point optimally.

Input
-----

The first line of input will contain one integer, *N*.\
The second line of input will contain *N* space-separated integers, indicating the integers on the board from left to right.

Output
------

Your output should contain one integer, the minimum sum that Bradley can obtain.

Limits
------

Subtask 1 (13%): 1 ≤ N ≤ 1 000, all integers on the board will be positive.\
Subtask 2 (24%): 1 ≤ N ≤ 1 000\
Subtask 3 (63%): 1 ≤ N ≤ 1 000 000\
Subtask 4 (0%): As per sample testcases

Sample Input 1
--------------

8
2 -3 4 -5 6 -7 3 -5

Sample Output 1
---------------

-9

Explanation for Sample 1
------------------------

The best way for Bradley is to enter the board at -7, walk two steps to the right, and leave the board at -5. This will give him ((-7)+3+(-5)=-9) points.