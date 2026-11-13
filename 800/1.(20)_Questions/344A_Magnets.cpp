#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int group = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            group++;
        }
    }

    cout << group << endl;

    return 0;
}

/*
========================================================
Codeforces: 344A - Magnets
Rating: 800
Day: 9
Topic: Strings, Vectors, Loops, Consecutive Elements,
       Counting Groups
========================================================

1. PROBLEM UNDERSTANDING

We are given n magnets arranged in a row.

Each magnet has one of two orientations:

"01"
"10"

Magnets with the same orientation connect together
and form one group.

When the orientation changes, a new group starts.

Our task is to count the total number of groups.

IMPORTANT:
A single magnet also counts as one group.

--------------------------------------------------------

2. INPUT AND OUTPUT

Input:
- First line: n (number of magnets).
- Next n lines: each contains either "01" or "10".

Output:
- Total number of groups.

Example:

Input:
6
10
10
10
01
10
10

Output:
3

The groups are:

Group 1: 10 10 10
Group 2: 01
Group 3: 10 10

Total groups = 3.

--------------------------------------------------------

3. MAIN OBSERVATION

We only need to compare consecutive magnets.

There are two possibilities:

CASE 1: Same orientation

Example:
10 10

Both magnets belong to the same group.

We do not increase the group count.

CASE 2: Different orientation

Example:
10 01

A new group starts.

We increase the group count by 1.

IMPORTANT:

Every time the current magnet differs from the
previous magnet, a new group starts.

--------------------------------------------------------

4. COUNTING LOGIC

Initially:

int group = 1;

Why?

Because the first magnet always starts the first group.

Then compare every magnet with the next magnet:

if (a[i] != a[i + 1])
{
    group++;
}

If they are different, increment the group count.

The answer is:

1 + number of changes between consecutive magnets.

--------------------------------------------------------

5. VECTOR APPROACH

We can store all magnets in a vector:

vector<string> a(n);

This creates a vector containing n strings.

Input:

for (int i = 0; i < n; i++)
{
    cin >> a[i];
}

Now compare consecutive elements:

for (int i = 0; i < n - 1; i++)
{
    if (a[i] != a[i + 1])
    {
        group++;
    }
}

IMPORTANT:

Why i < n - 1 instead of i < n?

Because we access:

a[i] and a[i + 1]

If n = 6, valid indices are:

0, 1, 2, 3, 4, 5

When i = 5:

a[i + 1] = a[6]

But a[6] does not exist.

Therefore, the loop must stop at i = n - 2.

--------------------------------------------------------

6. COMPLETE VECTOR SOLUTION

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int group = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            group++;
        }
    }

    cout << group << endl;

    return 0;
}

--------------------------------------------------------

7. DRY RUN

Input:

6
10
10
10
01
10
10

Initially:

group = 1

The first magnet starts Group 1.

Now compare consecutive magnets:

COMPARISON 1:

a[0] = "10"
a[1] = "10"

Same orientation.

group = 1

COMPARISON 2:

a[1] = "10"
a[2] = "10"

Same orientation.

group = 1

COMPARISON 3:

a[2] = "10"
a[3] = "01"

Different orientation.

group = 1 + 1 = 2

COMPARISON 4:

a[3] = "01"
a[4] = "10"

Different orientation.

group = 2 + 1 = 3

COMPARISON 5:

a[4] = "10"
a[5] = "10"

Same orientation.

group = 3

Final answer:

3

--------------------------------------------------------

8. BETTER APPROACH: WITHOUT A VECTOR

We do not need to store all magnets.

We only need to remember the previous magnet.

Read the first magnet and initialize:

string previous;
cin >> previous;

int group = 1;

Then read the remaining magnets one by one.

For each new magnet:

- Compare it with previous.
- If different, increase group.
- Update previous.

Code:

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string previous;
    cin >> previous;

    int group = 1;

    for (int i = 1; i < n; i++)
    {
        string current;
        cin >> current;

        if (current != previous)
        {
            group++;
        }

        previous = current;
    }

    cout << group << endl;

    return 0;
}

This approach is more memory-efficient.

--------------------------------------------------------

9. TIME AND SPACE COMPLEXITY

VECTOR APPROACH:

Time Complexity: O(n)

First loop reads n magnets.
Second loop compares n - 1 pairs.

Total: O(n).

Auxiliary Space Complexity: O(n)

The vector stores all n magnets.

WITHOUT VECTOR:

Time Complexity: O(n)

We read and process every magnet once.

Auxiliary Space Complexity: O(1)

We only store:
- previous
- current
- group
- n

No vector is required.

--------------------------------------------------------

10. COMMON MISTAKES

1. Forgetting #include <vector>

   If using vector<string>, include:

   #include <vector>

2. Accessing an invalid index:

   WRONG:
   for (int i = 0; i < n; i++)
   {
       if (a[i] != a[i + 1])
   }

   CORRECT:
   for (int i = 0; i < n - 1; i++)

3. Initializing group = 0.

   The first magnet already forms one group.

   Therefore:

   int group = 1;

4. Increasing group for every magnet.

   We only increase the group count when
   the orientation changes.

5. Forgetting to update previous in the
   no-vector approach.

   previous = current;

--------------------------------------------------------

11. IMPORTANT PROGRAMMING CONCEPTS

A. Consecutive Element Comparison

Compare an element with the element immediately
after it:

a[i] != a[i + 1]

B. Counting Changes

Every change starts a new group.

Answer = 1 + number of changes.

C. Vector Indexing

A vector of size n has indices:

0 to n - 1.

D. Out-of-Bounds Access

Accessing an index outside the valid range is
called an out-of-bounds access.

E. Previous and Current Pattern

Remember the previous value and compare it with
the current value.

This pattern is useful in many programming problems.

========================================================
*/