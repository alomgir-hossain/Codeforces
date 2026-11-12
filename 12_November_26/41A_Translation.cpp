
// todo: Approach - 1


#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;

    string t;
    cin >> t;

    int left = 0;
    int right = t.length() - 1;

    while (left < right)
    {
        char temp = t[left];
        t[left] = t[right];
        t[right] = temp;

        left++;
        right--;
    }

    if (s == t)
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
========================================================
Codeforces 41A - Translation
Rating: 800
Topic: String, Two Pointers, Swapping, Reverse
========================================================

PROBLEM:
Given two strings s and t, check whether t is the
reverse of s.

Output:
YES if the reverse matches.
NO otherwise.


APPROACH 1: TWO POINTERS
------------------------
1. Initialize left = 0.
2. Initialize right = t.length() - 1.
3. While left < right:
   - Store t[left] in a temporary variable.
   - Assign t[right] to t[left].
   - Assign temp to t[right].
   - Increment left.
   - Decrement right.
4. Compare s and t.
5. Print YES or NO.

IMPORTANT:
left = 0                  First character
right = length - 1        Last character
left++                    Move forward
right--                   Move backward


APPROACH 2: BUILT-IN REVERSE
----------------------------
Include:
#include <algorithm>

Use:
reverse(t.begin(), t.end());

This reverses the string in place.

Then compare:
if (s == t)


KEY CONCEPTS
------------
1. String indexing starts from 0.
2. Last index = length - 1.
3. Two pointers move toward each other.
4. A temporary variable helps swap values.
5. reverse() reverses a string in place.
6. == compares two strings.


TIME COMPLEXITY
---------------
Reversing: O(n)
Comparing: O(n)
Total: O(n)


AUXILIARY SPACE COMPLEXITY
--------------------------
O(1) for both approaches.


KEY LESSON:
The two-pointer technique can reverse a string
without creating another string.

========================================================
END OF NOTES
========================================================
*/

// todo: Approach - 2

// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     string t;
//     cin >> t;

//     reverse(t.begin(), t.end());

//     if (s == t)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }