// todo: Approach 1

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int anton = 0;
    int danik = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            anton++;
        }
        else
        {
            danik++;
        }
    }

    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (danik > anton)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
    return 0;
}


/*
========================================================
Codeforces 734A - Anton and Danik
Rating: 800
Topic: String, Loop, Counting, Conditional Statements
========================================================

1. PROBLEM UNDERSTANDING
------------------------
Anton and Danik play n games of chess.

The result of each game is represented by:
'A' = Anton wins
'D' = Danik wins

We are given:
- An integer n: total number of games.
- A string s: results of all games.

Our task:
- Print "Anton" if Anton wins more games.
- Print "Danik" if Danik wins more games.
- Print "Friendship" if both win the same number of games.


2. APPROACH: SINGLE COUNTER (BALANCE METHOD)
--------------------------------------------
Instead of maintaining two separate counters, we can
use one variable called count.

Initially:
count = 0

For every character in the string:

If s[i] == 'A':
    count++

If s[i] == 'D':
    count--

Why?

Every Anton win adds +1.
Every Danik win adds -1.

After processing all games:

If count > 0:
    Anton has more wins.

If count < 0:
    Danik has more wins.

If count == 0:
    Both have equal wins.


3. EXAMPLE / DRY RUN
--------------------
Input:
6
ADAAAA

Initial:
count = 0

Character     Operation     Count
----------------------------------
    A            +1           1
    D            -1           0
    A            +1           1
    A            +1           2
    A            +1           3
    A            +1           4

Final count = 4

Since count > 0:

Output:
Anton


4. C++ CODE
-----------
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'A')
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    if (count > 0)
    {
        cout << "Anton" << endl;
    }
    else if (count < 0)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }

    return 0;
}


5. IMPORTANT C++ CONCEPTS
-------------------------

A. Assignment vs Comparison

'='  means assignment.
'==' means equality comparison.

Wrong:
if (s[i] = 'A')

Correct:
if (s[i] == 'A')

Remember:
Use == when you want to compare two values.

B. Increment Operator

count++;
Same as:
count = count + 1;

C. Decrement Operator

count--;
Same as:
count = count - 1;

D. String Indexing

For a string "ADAAAA":

s[0] = 'A'
s[1] = 'D'
s[2] = 'A'
s[3] = 'A'
s[4] = 'A'
s[5] = 'A'

String indexing starts from 0.

E. Loop

for (int i = 0; i < s.length(); i++)

Visits every character in the string.


6. COMMON MISTAKES
------------------

1. Using '=' instead of '==' in an if condition.
2. Comparing characters with "A" instead of 'A'.
3. Printing the count instead of the required winner.
4. Forgetting the exact spelling of the output:
   "Anton", "Danik", "Friendship".
5. Forgetting that equal wins mean "Friendship".

Remember:
'A' is a character.
"A" is a string.


7. ALTERNATIVE APPROACH: TWO COUNTERS
-------------------------------------
We can also use two variables:

int anton = 0;
int danik = 0;

For every character:
If 'A', anton++;
If 'D', danik++;

Then compare anton and danik.

Both approaches are correct.

Single counter:
- Uses one counting variable.
- Tracks the difference between wins.

Two counters:
- Tracks each player's wins separately.
- Often easier for beginners to understand.


8. TIME AND SPACE COMPLEXITY
----------------------------

Let n = number of games.

Time Complexity:
O(n)

Reason:
We visit every character exactly once.

Auxiliary Space Complexity:
O(1)

Reason:
We only use one counter and a loop variable.

Total space including the input string:
O(n)


9. KEY LESSONS
--------------

- A string can be processed character by character.
- A single counter can track the difference between
  two quantities.
- Increment (+1) and decrement (-1) can simplify counting.
- Always use '==' for comparison.
- Understand the meaning of the counter before
  deciding the final result.

========================================================
END OF NOTES
========================================================
*/



// todo: Approach 2

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     string s;
//     cin >> s;

//     int count = 0;

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == 'A')
//         {
//             count++;
//         }
//         else
//         {
//             count--;
//         }
//     }

//     if (count > 0)
//     {
//         cout << "Anton" << endl;
//     }
//     else if (count < 0)
//     {
//         cout << "Danik" << endl;
//     }
//     else
//     {
//         cout << "Friendship" << endl;
//     }

//     return 0;
// }