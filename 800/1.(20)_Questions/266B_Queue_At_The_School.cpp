#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    int t;
    cin >> n;
    cin >> t;

    string s;
    cin >> s;

    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                char temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
                j++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }

    cout << endl;

    return 0;
}


/*
====================================================
Codeforces 266B - Queue at the School
Rating: 800
Topic: String, Simulation, Nested Loops, Swapping
====================================================

PROBLEM:
There are n students in a queue.
B = Boy
G = Girl

Whenever a boy is immediately followed by a girl (BG),
they swap positions and become GB.

This process happens for t seconds.

Each boy can move at most one position per second.

APPROACH:
1. Read n, t and the string s.
2. Run an outer loop t times.
3. Inside it, check every adjacent pair.
4. If s[j] == 'B' and s[j+1] == 'G':
   - Swap the two characters.
   - Increment j once more to skip the next position.
5. Print the final string.

IMPORTANT CONDITION:
if (s[j] == 'B' && s[j + 1] == 'G')

WHY j++ AFTER SWAPPING?
After swapping BG -> GB, the same boy is now
at position j+1.

If we check the next position immediately,
that same boy could move again in the same second.

The extra j++ prevents this.

Remember:
The for loop also increments j automatically.
Therefore, the extra j++ skips one additional position.

LOOPS:
Outer loop: i < t
Controls the number of seconds.

Inner loop: j < n - 1
Checks adjacent students.

DRY RUN:
Input:
5 2
BGGBG

Initial:     BGGBG
After 1 sec: GBGGB
After 2 sec: GGBGB

Output:
GGBGB

COMPLEXITY:
Time: O(n * t)
Auxiliary Space: O(1)

KEY LESSON:
In simulation problems, carefully follow the rules
for each round. An element must not perform an
operation more times than the problem allows.

====================================================
*/