### restaurant

Problem Description
-------------------

It's Rar the Cat's birthday! To celebrate this occasion, his group of *N* cats are going to a restaurant to have their lunch today! Yay! This restaurant has *M* different main meals and *S* different side dishes. Today, the cats have decided to ask Mewy, one of the cats, to order their meals for them. Each of the *N* cats must get one set (1 main meal + 1 side dish), although they don't care which one they get.

Mewy, being a very nice cat, wants to be fair to his cat friends and let them pay as little as possible. Help Mewy by optimally pairing the main meals and side dishes such that the cost of the most expensive set is minimised.

Input
-----

The first line of input will contain three integers, *N*, *M* and *S*.\
The second line of input contains *M* integers, with the *i*th integer representing the cost of the *i*th main meal.\
The third line of input contains *S* integers, with the *i*th integer representing the cost of the *i*th side dish.

Output
------

Your output should contain one integer, the minimum possible cost of the most expensive set.\
Your output should be terminated with a newline.

Limits
------

1 <= *N* <= 10 000\
*N* <= *M* <= 100 000\
*N* <= *S* <= 100 000

Sample Input 1
--------------

3 4 4
1 3 4 7
4 1 2 5

Sample Output 1
---------------

5

Explanation for Sample Output 1
-------------------------------

The best way Mewy can pair the sets is by buying:

1.  a meal with cost 1 and a side with cost 4 for Cat 1,
2.  a meal with cost 4 and a side with cost 1 for Cat 2 and
3.  a meal with cost 3 and a side with cost 2 for Cat 3

In this case, all three of the sets have an equal cost, 5. Thus, the most expensive set will have a cost of 5.
