### Flame Thrower

Poe the Penguin wants to hasten Global Warming (so that he can stay in the water all day long). Therefore. He is going to burn down the trees in Barr the Bear's orchards.

Barr the Bear's orchard contains a row of *N* trees, labelled from 1 to *N* from left to right. Poe the Penguin has a flamethrower. This flamethrower can destory a consecutive sequence of at most *K* trees.

Poe the Penguin wants to cause as much damage as possible. He knows the cost of planting each tree. Poe the Penguin wants to aim his flamethrower in such a way that the sum of costs of trees he destroys is as high as possible. He wonders what this cost is.

Input
-----

The first line contains two integers, *N* and *K*.

The following line contains N positive integers. The *ith* integer denotes the cost of the tree with label *i*.

You can assume that 1 ≤ *K* ≤ *N* ≤ 1000.

Output
------

Output the maximum cost of the trees Poe the Penguin can damage..

Sample Input
------------

6 3
5 8 9 2 4 1

Sample Output
-------------

22

Sample Explanation
------------------

Destroying Trees 1 to 3 cost 5+8+9 = 22. (Maximum Cost)

Destroying Trees 2 to 4 cost 8+9+2 = 19.

Destroying Trees 3 to 5 cost 9+2+4 = 15.

Destroying Trees 4 to 6 cost 2+4+1 = 7.