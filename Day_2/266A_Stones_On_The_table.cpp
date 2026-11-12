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

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}


/*
=========================================================
CODEFORCES 266A - STONES ON THE TABLE
=========================================================

PROBLEM UNDERSTANDING:
----------------------
We are given:
1. An integer n representing the number of stones.
2. A string s representing the colors of the stones.

Each character represents one stone:
R = Red
G = Green
B = Blue

Our task is to find the MINIMUM number of stones to remove
so that no two adjacent stones have the same color.

INPUT EXAMPLE:
--------------
5
RRGGB

OUTPUT:
-------
2

WHY OUTPUT IS 2?
----------------
R R G G B

The first two stones have the same color.
The third and fourth stones also have the same color.

We need to remove one stone from each equal adjacent pair.

After removal:
R G B

No adjacent stones have the same color.

---------------------------------------------------------
IMPORTANT OBSERVATION:
---------------------------------------------------------

We only need to compare adjacent characters.

If:
s[i] == s[i + 1]

Then two adjacent stones have the same color.
Therefore, we must remove one stone.

So:
count++;

Otherwise, do nothing.

---------------------------------------------------------
ALGORITHM:
---------------------------------------------------------

1. Read n.
2. Read the string s.
3. Initialize count = 0.
4. Run a loop from i = 0 to i < n - 1.
5. Compare s[i] with s[i + 1].
6. If both characters are equal, increment count.
7. Print count.

---------------------------------------------------------
C++ CODE:
---------------------------------------------------------

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

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}

---------------------------------------------------------
DRY RUN:
---------------------------------------------------------

Input:
5
RRGGB

n = 5
s = "RRGGB"
count = 0

Iteration 1:
i = 0
s[0] = R
s[1] = R
Same characters -> count = 1

Iteration 2:
i = 1
s[1] = R
s[2] = G
Different characters -> count = 1

Iteration 3:
i = 2
s[2] = G
s[3] = G
Same characters -> count = 2

Iteration 4:
i = 3
s[3] = G
s[4] = B
Different characters -> count = 2

Final output:
2

---------------------------------------------------------
WHY DOES THE LOOP USE n - 1?
---------------------------------------------------------

Suppose:
n = 5

String:
R R G G B

Valid indices:
0 1 2 3 4

We compare:
s[0] with s[1]
s[1] with s[2]
s[2] with s[3]
s[3] with s[4]

There are only n - 1 adjacent pairs.

Therefore:
for (int i = 0; i < n - 1; i++)

We must NOT use i < n because s[i + 1]
would eventually access an invalid index.

---------------------------------------------------------
n VS s.length():
---------------------------------------------------------

n:
The number of stones given in the input.

s.length():
The actual number of characters in the string.

For this problem, Codeforces guarantees:
n == s.length()

Therefore, both loop conditions are correct:

i < n - 1
i < s.length() - 1

RECOMMENDATION:
Use n because the problem explicitly provides
the number of stones.

---------------------------------------------------------
TIME AND SPACE COMPLEXITY:
---------------------------------------------------------

Time Complexity: O(n)

We visit each adjacent pair once.

Auxiliary Space Complexity: O(1)

We only use one integer variable, count,
apart from the input string.

Total storage including the input string: O(n).

---------------------------------------------------------
COMMON MISTAKES:
---------------------------------------------------------

1. Using i < n instead of i < n - 1.
   This can access s[n], which is out of bounds.

2. Comparing s[i] with s[i] instead of s[i + 1].
   We must compare adjacent characters.

3. Forgetting to initialize count = 0.

4. Trying to count different characters instead of
   equal adjacent characters.

5. Thinking we must physically remove characters.
   We only need to count the minimum removals.

---------------------------------------------------------
IMPORTANT CONCEPTS LEARNED:
---------------------------------------------------------

1. String indexing.
2. Accessing characters using s[i].
3. Comparing adjacent characters.
4. Loop boundaries.
5. Counting with a variable.
6. Using input constraints to determine loop limits.

=========================================================
*/
