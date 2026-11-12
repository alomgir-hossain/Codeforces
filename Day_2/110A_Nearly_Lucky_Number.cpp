#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

/*
=========================================================
CODEFORCES 110A - NEARLY LUCKY NUMBER
=========================================================

PROBLEM UNDERSTANDING:
----------------------

A lucky number is a number that contains ONLY:
    4 and 7

Examples of lucky numbers:
    4, 7, 47, 74, 444, 777

Examples of NOT lucky numbers:
    1, 3, 14, 17, 123

A number is called NEARLY LUCKY if the TOTAL NUMBER
OF LUCKY DIGITS (4 and 7) inside that number is itself
a lucky number.

Therefore, the count must be:
    4 OR 7

IMPORTANT:
We do NOT need every digit of the input number to be
4 or 7. Other digits are simply ignored.

---------------------------------------------------------
EXAMPLE:
---------------------------------------------------------

Input:
123447789

Digits:
1 2 3 4 4 7 7 8 9

Lucky digits:
    4, 4, 7, 7

Total lucky digits = 4

Since 4 is a lucky number:

Output:
YES

---------------------------------------------------------
ALGORITHM:
---------------------------------------------------------

1. Read the input number as a string.
2. Initialize count = 0.
3. Traverse every character using a for loop.
4. Check whether the current character is '4' or '7'.
5. If it is '4' or '7', increment count.
6. Ignore all other digits.
7. After the loop:
      If count == 4 OR count == 7:
          Print YES
      Otherwise:
          Print NO

---------------------------------------------------------
C++ SOLUTION:
---------------------------------------------------------

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            count++;
        }
    }

    if (count == 4 || count == 7)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}

---------------------------------------------------------
LINE-BY-LINE EXPLANATION:
---------------------------------------------------------

#include <iostream>
    Provides cin and cout.

#include <string>
    Allows us to use the string data type.

string n;
    Stores the input number as a string.

Why string?
    We want to examine each digit individually.
    A string allows us to access each digit using n[i].

int count = 0;
    Stores the total number of lucky digits.

for (int i = 0; i < n.length(); i++)
    Visits every character in the input string.

n[i]
    Accesses the character at index i.

n[i] == '4'
    Checks whether the current character is 4.

n[i] == '7'
    Checks whether the current character is 7.

||
    Logical OR operator.
    The condition is true if either comparison is true.

count++;
    Increases the lucky-digit counter by one.

if (count == 4 || count == 7)
    Checks whether the total lucky-digit count
    is itself a lucky number.

---------------------------------------------------------
DRY RUN:
---------------------------------------------------------

Input:
123447789

Initially:
count = 0

Iteration 1:
i = 0
n[i] = '1'
Not lucky.
count = 0

Iteration 2:
i = 1
n[i] = '2'
Not lucky.
count = 0

Iteration 3:
i = 2
n[i] = '3'
Not lucky.
count = 0

Iteration 4:
i = 3
n[i] = '4'
Lucky digit.
count = 1

Iteration 5:
i = 4
n[i] = '4'
Lucky digit.
count = 2

Iteration 6:
i = 5
n[i] = '7'
Lucky digit.
count = 3

Iteration 7:
i = 6
n[i] = '7'
Lucky digit.
count = 4

Iteration 8:
i = 7
n[i] = '8'
Not lucky.
count = 4

Iteration 9:
i = 8
n[i] = '9'
Not lucky.
count = 4

Final count = 4

count == 4 is TRUE.

Output:
YES

---------------------------------------------------------
IMPORTANT C++ CONCEPTS:
---------------------------------------------------------

1. STRING:
   string n = "447123";

2. STRING INDEXING:
   n[0] = '4'
   n[1] = '4'
   n[2] = '7'

3. STRING LENGTH:
   n.length() returns the number of characters.

4. CHARACTER COMPARISON:
   n[i] == '4'

   IMPORTANT:
   4   = integer
   '4' = character
   "4" = string

5. LOGICAL OR:
   condition1 || condition2

   True if at least one condition is true.

6. INCREMENT:
   count++;

   Same as:
   count = count + 1;

---------------------------------------------------------
COMMON MISTAKES:
---------------------------------------------------------

MISTAKE 1:
Using double quotes for a character.

Wrong:
    n[i] == "4"

Correct:
    n[i] == '4'

MISTAKE 2:
Using OR incorrectly.

Wrong:
    if (digit != 4 || digit != 7)

Correct:
    if (digit == '4' || digit == '7')

MISTAKE 3:
Rejecting other digits.

Do NOT print NO immediately when a digit is not 4 or 7.
Simply ignore that digit.

MISTAKE 4:
Checking whether every digit is lucky.

Wrong idea:
    Every digit must be 4 or 7.

Correct idea:
    Only the TOTAL COUNT of 4 and 7 must be
    either 4 or 7.

MISTAKE 5:
Checking the final condition inside the loop.

Correct approach:
    First count all lucky digits.
    Then check the final count after the loop.

---------------------------------------------------------
TIME AND SPACE COMPLEXITY:
---------------------------------------------------------

Let n = number of digits in the input.

TIME COMPLEXITY:
    O(n)

We visit each character exactly once.

AUXILIARY SPACE COMPLEXITY:
    O(1)

We only use a counter and a loop variable.

TOTAL SPACE INCLUDING INPUT STRING:
    O(n)

---------------------------------------------------------
IMPORTANT LESSON:
---------------------------------------------------------

There are TWO different checks:

CHECK 1:
    n[i] == '4' || n[i] == '7'

    Checks individual digits.

CHECK 2:
    count == 4 || count == 7

    Checks the total number of lucky digits.

Remember:
Count first, decide afterward.

=========================================================
*/
