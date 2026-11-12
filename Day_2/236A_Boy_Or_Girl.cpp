
/*
==================================================
Problem: 236A - Boy or Girl
Rating: 800
Topic: Strings, Arrays, Frequency Counting,
       Distinct Characters, Modulo Operator

PROBLEM UNDERSTANDING:
--------------------------------------------------
We are given a username containing lowercase
English letters.

We need to count the number of DISTINCT
characters in the username.

IMPORTANT:
Distinct means UNIQUE or DIFFERENT characters.

If a character appears multiple times,
we count it ONLY ONCE.

Example:
Input: aabbc

Characters: a, a, b, b, c

Distinct characters: a, b, c

Distinct count = 3

OUTPUT RULE:
--------------------------------------------------
If the distinct count is EVEN:
    Print "CHAT WITH HER!"

If the distinct count is ODD:
    Print "IGNORE HIM!"


APPROACH: FREQUENCY ARRAY
--------------------------------------------------
Step 1:
Read the username into a string.

Step 2:
Create a frequency array:

    int freq[26] = {0};

WHY 26?
Because there are 26 lowercase English letters:
a, b, c, ..., z.

Every array position represents one letter:

    freq[0]  -> a
    freq[1]  -> b
    freq[2]  -> c
    ...
    freq[25] -> z

All positions initially contain zero.

Step 3:
Create a counter:

    int count = 0;

This stores the number of distinct characters.

Step 4:
Loop through every character:

    for (int i = 0; i < username.length(); i++)

Step 5:
Convert the current character into an array index:

    int index = username[i] - 'a';

IMPORTANT TRICK:
Characters have numeric character codes.

    'a' - 'a' = 0
    'b' - 'a' = 1
    'c' - 'a' = 2
    'z' - 'a' = 25

Therefore, we can use a character to access
its corresponding frequency-array position.

Step 6:
Check whether we have seen this character before:

    if (freq[index] == 0)
    {
        count++;
    }

WHY CHECK ZERO?

If freq[index] == 0:
    We have NEVER seen this character before.
    Therefore, increase the distinct count.

If freq[index] != 0:
    We have ALREADY seen this character.
    Do NOT increase the distinct count again.

Step 7:
Mark the character as seen:

    freq[index]++;

This increases its frequency.

IMPORTANT:
For this problem, it is also valid to put
freq[index]++ inside the if block because
we only need to mark each character as seen.

However, the general frequency-array pattern is:

    if (freq[index] == 0)
    {
        count++;
    }

    freq[index]++;

This pattern tracks the actual frequency too.


DRY RUN:
--------------------------------------------------
Input:

    aabbc

Initially:

    count = 0
    freq[a] = 0
    freq[b] = 0
    freq[c] = 0

Iteration 1:
    Character = a
    freq[a] = 0
    New character!
    count = 1
    freq[a] = 1

Iteration 2:
    Character = a
    freq[a] = 1
    Already seen!
    count = 1
    freq[a] = 2

Iteration 3:
    Character = b
    freq[b] = 0
    New character!
    count = 2
    freq[b] = 1

Iteration 4:
    Character = b
    freq[b] = 1
    Already seen!
    count = 2
    freq[b] = 2

Iteration 5:
    Character = c
    freq[c] = 0
    New character!
    count = 3
    freq[c] = 1

FINAL DISTINCT COUNT = 3

Three is ODD.

Output:

    IGNORE HIM!


MODULO OPERATOR (%):
--------------------------------------------------
The modulo operator gives the remainder after
division.

Examples:

    4 % 2 = 0
    5 % 2 = 1
    6 % 2 = 0
    7 % 2 = 1

TRICK TO REMEMBER:

    Even number:
        number % 2 == 0

    Odd number:
        number % 2 != 0

For this problem:

    if (count % 2 == 0)
        CHAT WITH HER!

    else
        IGNORE HIM!


COMMON MISTAKES:
--------------------------------------------------
1. Counting total username length instead of
   distinct characters.

   WRONG:
       username.length()

   CORRECT:
       Count unique characters.

2. Counting duplicate characters multiple times.

   SOLUTION:
       Check freq[index] == 0 before increasing
       the distinct count.

3. Reversing the even/odd output conditions.

   EVEN -> CHAT WITH HER!
   ODD  -> IGNORE HIM!

4. Forgetting the exclamation mark.

   Exact output matters on Codeforces.

5. Printing extra information.

   Do NOT print the distinct count.
   Print ONLY the required message.


USEFUL TRICKS TO REMEMBER:
--------------------------------------------------
TRICK 1:
For lowercase English letters, use:

    int freq[26] = {0};

TRICK 2:
Convert a lowercase character into an index:

    character - 'a'

TRICK 3:
To count unique characters:

    if (freq[index] == 0)
        count++;

TRICK 4:
To mark or record a character:

    freq[index]++;

TRICK 5:
To check even or odd:

    count % 2 == 0


COMPLEXITY ANALYSIS:
--------------------------------------------------
Let n = length of the username.

Time Complexity:
    O(n)

Reason:
    We visit every character exactly once.

Auxiliary Space Complexity:
    O(1)

Reason:
    The frequency array always has 26 positions,
    regardless of the username length.


KEY LESSON:
--------------------------------------------------
A frequency array helps us remember which
characters we have already encountered.

We increase the distinct count ONLY when
we encounter a character for the first time.

Remember:

    ZERO FREQUENCY = NEW CHARACTER
    NONZERO FREQUENCY = ALREADY SEEN

==================================================
*/



#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    cin >> username;

    int freq[26] = {0};

    int count = 0;

    for (int i = 0; i < username.length(); i++)
    {
        int index = username[i] - 'a';

        if (freq[index] == 0)
        {
            count++;
            freq[index]++;
        }
    }

    if (count % 2 == 0)
    {

        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }

    return 0;
}
