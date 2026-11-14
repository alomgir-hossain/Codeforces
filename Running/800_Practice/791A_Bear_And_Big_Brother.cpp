#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int year = 0;

    while (a <= b)
    {
        year++;

        a = a * 3;
        b = b * 2;
    }

    cout << year << endl;

    return 0;
}

/*
============================================================
       CODEFORCES 791A - BEAR AND BIG BROTHER
============================================================

Rating: 800
Topics: Implementation, Math, While Loop, Simulation

PROBLEM:
Two bears have different weights.

- Limak's weight is a.
- Bob's weight is b.

Every year:
- Limak's weight becomes 3 times larger.
- Bob's weight becomes 2 times larger.

Find how many years it takes for Limak to become
strictly heavier than Bob.


------------------------------------------------------------
1. MAIN IDEA - SIMULATION
------------------------------------------------------------

Simulate the growth of both bears year by year.

Steps:
1. Read a and b.
2. Initialize year = 0.
3. Repeat while a <= b.
4. Increase the year counter.
5. Multiply a by 3.
6. Multiply b by 2.
7. When a > b, stop the loop.
8. Print the number of years.


------------------------------------------------------------
2. WHILE LOOP
------------------------------------------------------------

while (a <= b)
{
    year++;

    a = a * 3;
    b = b * 2;
}

Why use <= instead of < ?

Because Limak must become STRICTLY heavier than Bob.

Example:

a = 20
b = 20

Limak is not heavier yet, so the loop must continue.

The loop stops only when:

a > b


------------------------------------------------------------
3. UPDATING VALUES
------------------------------------------------------------

a = a * 3;
b = b * 2;

Every year:

Limak:
4 -> 12 -> 36 -> 108

Bob:
7 -> 14 -> 28 -> 56

Limak's weight triples.
Bob's weight doubles.


------------------------------------------------------------
4. YEAR COUNTER
------------------------------------------------------------

int year = 0;

year++;

The year variable counts how many iterations have
been completed.

Remember:
year++ is equivalent to year = year + 1.


------------------------------------------------------------
5. DRY RUN
------------------------------------------------------------

Input:

4 7

Initial values:

a = 4
b = 7
year = 0

Year 1:
a = 4 * 3 = 12
b = 7 * 2 = 14
year = 1

Check:
12 <= 14 (true)

Year 2:
a = 12 * 3 = 36
b = 14 * 2 = 28
year = 2

Check:
36 <= 28 (false)

The loop stops.

Output:

2


------------------------------------------------------------
6. COMPLEXITY ANALYSIS
------------------------------------------------------------

Time Complexity: O(log b)

Reason:
Limak grows three times per year, while Bob grows
two times per year.

Their weight ratio changes by a factor of 3/2
each year, so the number of iterations grows
logarithmically with the initial weights.

Space Complexity: O(1)

Reason:
Only three variables are used:
a, b, and year.


------------------------------------------------------------
7. IMPORTANT LESSONS
------------------------------------------------------------

1. Use while loops when the number of iterations
   is not known beforehand.

2. Use <= when a value must become strictly greater.

3. Update both variables during every iteration.

4. Use a counter to count repeated operations.

5. Simulation means following the problem's instructions
   step by step in code.

6. Always understand the stopping condition of a loop.


============================================================
*/