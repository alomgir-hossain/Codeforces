#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 1;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if (count >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}

/*
========================================================
Codeforces: 96A - Football
Rating: 800
Day: 10
Topic: Strings, Consecutive Characters, Counting,
       Loops, Conditional Statements
========================================================

1. PROBLEM UNDERSTANDING

Two football teams are represented by:

'0' = One team
'1' = The other team

We are given a string representing players standing
in a line.

A situation is DANGEROUS if at least 7 consecutive
players belong to the same team.

We must print:

YES = If 7 or more consecutive identical characters exist.
NO  = Otherwise.

IMPORTANT:
The characters must be consecutive.

--------------------------------------------------------

2. EXAMPLES

Example 1:

Input:
001001

There are no 7 consecutive identical characters.

Output:
NO

Example 2:

Input:
1000000001

There are 8 consecutive zeros.

Output:
YES

Example 3:

Input:
1111110

There are only 6 consecutive ones.

Output:
NO

Example 4:

Input:
11111110

There are 7 consecutive ones.

Output:
YES

--------------------------------------------------------

3. MAIN CONCEPT: CONSECUTIVE COUNTING

We need to count how many identical characters appear
consecutively.

Example:

1110000000111

We can divide it into groups:

111
0000000
111

Their consecutive counts are:

3, 7, 3

Since one group contains 7 consecutive zeros,
the situation is dangerous.

--------------------------------------------------------

4. WHY DO WE USE ONLY ONE COUNTER?

We do not need separate counters for zero and one.

We only need to count consecutive identical characters.

int count = 1;

The counter represents the length of the current
consecutive group.

If the current character equals the previous character:

    count++;

If the characters are different:

    count = 1;

Why reset to 1?

Because the current character starts a new group.

--------------------------------------------------------

5. WHY DOES THE LOOP START AT i = 1?

Our loop:

for (int i = 1; i < s.length(); i++)

We compare:

s[i] with s[i - 1]

At i = 1:

s[1] is compared with s[0].

We cannot start at i = 0 because there is no character
before s[0].

We initialize count = 1 because the first character
already belongs to the first group.

--------------------------------------------------------

6. COMPLETE SOLUTION

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 1;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }

        if (count >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    return 0;
}

--------------------------------------------------------

7. LINE-BY-LINE EXPLANATION

string s;

Stores the input string.

int count = 1;

Starts the consecutive count at 1 because the first
character is already counted.

for (int i = 1; i < s.length(); i++)

Checks every character starting from index 1.

if (s[i] == s[i - 1])

Checks whether the current character is the same
as the previous character.

count++;

Increases the consecutive count.

count = 1;

Resets the counter when a different character appears.

if (count >= 7)

Checks whether seven or more consecutive identical
characters have been found.

cout << "YES";

Prints YES because the situation is dangerous.

return 0;

Immediately terminates the program so that NO is
not printed afterward.

cout << "NO";

If the loop finishes without finding seven consecutive
characters, print NO.

--------------------------------------------------------

8. DRY RUN

Input:

1110000000111

Initially:

count = 1

Index 1:
Current = 1
Previous = 1
Same character.
count = 2

Index 2:
Current = 1
Previous = 1
Same character.
count = 3

Index 3:
Current = 0
Previous = 1
Different characters.
count = 1

Index 4:
Current = 0
Previous = 0
Same character.
count = 2

Index 5:
Current = 0
Previous = 0
Same character.
count = 3

Index 6:
Current = 0
Previous = 0
Same character.
count = 4

Index 7:
Current = 0
Previous = 0
Same character.
count = 5

Index 8:
Current = 0
Previous = 0
Same character.
count = 6

Index 9:
Current = 0
Previous = 0
Same character.
count = 7

Now:

count >= 7

Therefore, print:

YES

The program terminates immediately.

--------------------------------------------------------

9. UNDERSTANDING return 0

Inside main():

return 0;

Immediately stops program execution.

In this problem:

if (count >= 7)
{
    cout << "YES" << endl;
    return 0;
}

Without return 0, the program would continue and
eventually print NO as well.

Example of the wrong output:

YES
NO

--------------------------------------------------------

10. TIME AND SPACE COMPLEXITY

Time Complexity: O(n)

We visit each character at most once.

In the worst case, the entire string is checked.

Auxiliary Space Complexity: O(1)

We only use one counter and the loop index.

The input string itself requires O(n) storage.

--------------------------------------------------------

11. COMMON MISTAKES

1. Comparing a character with an integer:

   WRONG:
   if (s[i] == 0)

   CORRECT:
   if (s[i] == '0')

   '0' is a character.
   0 is an integer.

2. Counting matching pairs instead of characters.

   Seven consecutive characters contain six adjacent
   matching pairs.

3. Forgetting to reset the counter.

   When characters change, use:

   count = 1;

4. Starting the loop at index 0.

   We compare s[i] with s[i - 1], so start at 1.

5. Initializing count = 0.

   The first character is already part of the group.

6. Printing YES but not stopping the program.

   Use return 0 after printing YES.

7. Checking count > 7 instead of count >= 7.

   Exactly seven consecutive characters are already
   dangerous.

--------------------------------------------------------

12. IMPORTANT PROGRAMMING PATTERNS

A. Consecutive Character Counting

Compare the current character with the previous one.

B. Counter Resetting

When a group changes, reset its counter.

C. Early Termination

Use return 0 when the answer is already known.

D. String Indexing

s[i] accesses the character at index i.

E. Previous Character Comparison

s[i] == s[i - 1]

This is useful for identifying consecutive groups.

--------------------------------------------------------

13. WHAT I LEARNED

- How to count consecutive identical characters.
- How to compare neighboring string elements.
- Why loops sometimes start at index 1.
- Why a counter must reset when a group changes.
- How to use return 0 for early termination.
- How to detect a condition as soon as it occurs.
- How to solve a string problem using O(n) time
  and O(1) auxiliary space.

========================================================
*/