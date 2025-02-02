### paint

Problem Description
-------------------

A junior college in Singapore just acquired a sailing boat, and the school's student sailing team undertakes to paint the boat. There are several painting jobs to be done on the boat, such as:

-   primer painting on the keel,
-   painting antifouling below the waterline,
-   painting the deck,
-   etc\
Each job can be started and finished on the same day, but in order for the paint to dry, at most one job can be done every day.

The students face the following problem. The supplier of paint charges a certain amount for the paint for each job, but is increasing the price every day by an amount that depends on the job.

For example, he may charge $100 for the primer on the first day, and increase the price by $2 each day, resulting in a price of $102 on the second day, $104 on the third day, etc. For the antifouling, he may charge $200 on the first day, but increase the price by $4 each day, resulting in a price of $204 on the second day, $208 on the third day, etc.

The students have no facilities for storing the paint, and therefore need to buy the paint on the day on which they use it. The students want to complete all jobs in the cheapest possible way.

Input
-----

The first line of the input contains one integer, n, ranging from 2 to 20000, which specifies the number of painting jobs. We identify the jobs by numbers, ranging from job 1 to job n, regardless of when they are executed.

The following line contains n numbers, each ranging from 1 to 1000. The ith number in this line specifies the price for the paint for job i.

The last line contains n numbers, each ranging from 0 to 10. The jth number in this line specifies the amount of money by which the price for the paint for job j increases every day.

Output
------

The required output, to be written to standard output, consists of a single number, specifying the smallest amount of money sufficient to complete all jobs.

Limits
------

2 <= N <= 20 000

Sample Input 1
--------------

7
100 200 500 300 400 200 100
5 2 0 5 7 1 3

Sample Output 1
---------------

1837