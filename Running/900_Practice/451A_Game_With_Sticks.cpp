#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    int moves = 0;

    while (m > 0 && n > 0)
    {
        moves = moves + 1;
        m = m - 1;
        n = n - 1;
    }

    if (moves % 2 == 1)
    {
        cout << "Akshat" << endl;
    }
    else
    {
        cout << "Malvika" << endl;
    }

    return 0;
}



/*
=========================================================
          CODEFORCES 451A - GAME WITH STICKS
=========================================================

Problem:
--------
There is an n x m grid.

Alice and Bob play a game:
1. Alice starts first.
2. A player chooses an intersection of the grid.
3. The horizontal and vertical sticks passing through
   that intersection are removed.
4. Players take turns.
5. A player who cannot make a move loses.

Both players play optimally.

Task:
Determine who wins: Akshat (Alice) or Malvika (Bob).

---------------------------------------------------------
EXAMPLE
---------------------------------------------------------

Input:
3 5

Output:
Akshat

Explanation:
The maximum number of moves is 3.

Alice  -> Move 1
Bob    -> Move 2
Alice  -> Move 3

After 3 moves, one dimension becomes zero.
Bob cannot make another move.

Therefore, Akshat wins.

---------------------------------------------------------
MAIN LOGIC
---------------------------------------------------------

Every move removes:
- One horizontal stick.
- One vertical stick.

Therefore, after every move:
- n decreases by 1.
- m decreases by 1.

The game ends when either n or m becomes zero.

The maximum number of moves is:

min(n, m)

Why?

The smaller dimension determines how many times
we can remove one from both dimensions.

---------------------------------------------------------
APPROACH 1: USING A WHILE LOOP
---------------------------------------------------------

1. Take input n and m.

2. Initialize moves = 0.

3. Continue the game while both dimensions are
   greater than zero.

   while (n > 0 && m > 0)
   {
       moves++;
       n--;
       m--;
   }

4. Check whether the number of moves is odd or even.

   If moves is odd:
       Akshat wins.

   If moves is even:
       Malvika wins.

Why?

Alice makes the odd-numbered moves:
1, 3, 5, 7, ...

Bob makes the even-numbered moves:
2, 4, 6, 8, ...

Therefore, the player who makes the last move wins.

---------------------------------------------------------
IMPORTANT C++ CONCEPTS
---------------------------------------------------------

1. Logical AND (&&)

   while (n > 0 && m > 0)

   The loop continues only when BOTH conditions
   are true.

2. Decrement operator (--)

   n--;
   m--;

   Decreases a variable by one.

   Equivalent to:
   n = n - 1;
   m = m - 1;

3. Increment operator (++)

   moves++;

   Increases moves by one.

   Equivalent to:
   moves = moves + 1;

4. Modulo operator (%)

   moves % 2

   Checks the remainder after division by 2.

   Odd number:
   moves % 2 == 1

   Even number:
   moves % 2 == 0

---------------------------------------------------------
DRY RUN
---------------------------------------------------------

Input:
3 5

Initial values:
n = 3
m = 5
moves = 0

Iteration 1:
moves = 1
n = 2
m = 4

Iteration 2:
moves = 2
n = 1
m = 3

Iteration 3:
moves = 3
n = 0
m = 2

Loop condition:
n > 0 && m > 0

0 > 0 && 2 > 0
FALSE

The loop stops.

Final moves = 3

3 % 2 = 1

Output:
Akshat

---------------------------------------------------------
APPROACH 2: MATHEMATICAL OPTIMIZATION
---------------------------------------------------------

We do not actually need a while loop.

The maximum number of moves is simply:

min(n, m)

The min() function returns the smaller value.

Example:

n = 3
m = 5

moves = min(3, 5)
moves = 3

Then:

if (moves % 2 == 1)
    Akshat wins.
else
    Malvika wins.

Required header:

#include <algorithm>

---------------------------------------------------------
TIME AND SPACE COMPLEXITY
---------------------------------------------------------

APPROACH 1: WHILE LOOP

Time Complexity:
O(min(n, m))

Because the loop executes once per move.

Space Complexity:
O(1)

Only a constant number of variables are used.

APPROACH 2: min() FUNCTION

Time Complexity:
O(1)

Space Complexity:
O(1)

The smaller dimension is calculated directly.

---------------------------------------------------------
IMPORTANT LESSONS
---------------------------------------------------------

1. Understand what happens during one game move.
2. Find the condition that ends the game.
3. Count the total number of possible moves.
4. Use odd/even logic to determine the winner.
5. Use && when both conditions must be true.
6. Learn to convert repeated operations into
   mathematical formulas.
7. Always print the exact expected output string.

---------------------------------------------------------
FINAL TAKEAWAY
---------------------------------------------------------

The smaller dimension determines the maximum
number of moves.

moves = min(n, m)

Odd moves  -> Akshat
Even moves -> Malvika

=========================================================
*/
