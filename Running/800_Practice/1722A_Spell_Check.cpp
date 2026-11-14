#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;

    string name = "Timur";
    sort(name.begin(), name.end());

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        if (n != 5)
        {
            cout << "NO" << endl;
            continue;
        }

        sort(s.begin(), s.end());

        if (name == s)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}



/*
====================================================
PROBLEM: 1722A - Spell Check
RATING: 800
TOPIC: Strings, Sorting, Implementation
====================================================

1. PROBLEM SUMMARY:

We are given a string of length n.

We need to determine whether its characters can
be rearranged to form the word "Timur".

The comparison is case-sensitive.

2. IMPORTANT CONDITIONS:

The target word is:

"Timur"

It contains exactly 5 characters:

'T', 'i', 'm', 'u', 'r'

For a valid answer:
- String length must be exactly 5.
- All characters must match the target.
- Character order does not matter.
- Uppercase and lowercase matter.

3. APPROACH: SORTING

Step 1:
Create the target string:

string name = "Timur";

Step 2:
Sort the target string once:

sort(name.begin(), name.end());

Step 3:
Read each input string.

Step 4:
Check whether n == 5.

If n != 5:
    Print NO
    Continue to the next test case.

Step 5:
Sort the input string:

sort(s.begin(), s.end());

Step 6:
Compare both sorted strings:

if (name == s)
    Print YES
else
    Print NO

4. EXAMPLE:

Target = "Timur"
Input  = "miurT"

After sorting:

Target = "Timru"
Input  = "Timru"

Both strings are equal.

Answer = YES

5. IMPORTANT C++ CONCEPTS:

A. sort()

sort(s.begin(), s.end());

Sorts the characters in ascending order.

B. begin()

Returns an iterator pointing to the first element.

C. end()

Returns an iterator past the last element.

D. String comparison:

if (s == name)

Checks whether two strings are identical.

E. continue:

Skips the remaining statements in the current
loop iteration and moves to the next iteration.

F. return 0:

Terminates the entire program.

IMPORTANT:
Do not use return 0 when you only want to skip
one test case.

6. INPUT HANDLING:

Always read the complete input of a test case
before using continue.

For example:

int n;
cin >> n;

string s;
cin >> s;

if (n != 5)
{
    cout << "NO" << endl;
    continue;
}

7. COMPLEXITY:

Sorting the target: O(5 log 5), once.

Sorting each input: O(n log n).

String comparison: O(n).

Overall Time Complexity:
O(n log n) per test case.

Auxiliary Space:
Typically O(log n) for sorting.

====================================================
KEY LESSONS:

1. Sorting helps compare two strings regardless
   of character order.

2. String comparison checks character frequencies
   when both strings are sorted.

3. Always handle multiple test cases correctly.

4. Understand the difference between continue
   and return.

5. Read the complete input before skipping
   a test case.
====================================================
*/
