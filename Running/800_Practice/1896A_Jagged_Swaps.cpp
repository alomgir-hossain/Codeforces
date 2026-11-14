#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (v[0] == 1)
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
========================================================
CODEFORCES: 1896A - JAGGED SWAPS
RATING: 800
TOPICS: Implementation, Permutations, Greedy Observation
========================================================

1. PROBLEM UNDERSTANDING
------------------------

We are given an array of size n.

The array is a permutation of integers from 1 to n.

A permutation means:
- All numbers from 1 to n are present.
- No number is repeated.
- Numbers can appear in any order.

Our task is to determine whether we can sort
the array in ascending order using the allowed operation.


2. ALLOWED OPERATION
--------------------

We can choose an index i such that:

2 <= i <= n - 1

The following condition must be satisfied:

a[i-1] < a[i] && a[i] > a[i+1]

If the condition is satisfied, we can swap:

a[i] and a[i+1]

IMPORTANT:
The problem uses 1-based indexing.

In C++, array/vector indexing starts from 0.


3. UNDERSTANDING THE OPERATION
------------------------------

Example:

Array = [1, 3, 2, 5, 4]

Consider three consecutive elements:

1, 3, 2

Check:

1 < 3  -> TRUE
3 > 2  -> TRUE

Therefore, we can swap 3 and 2.

New array:

[1, 2, 3, 5, 4]

We can repeat valid operations to sort the array.


4. MOST IMPORTANT OBSERVATION
-----------------------------

The first element can NEVER change.

WHY?

The allowed operation only swaps:

a[i] and a[i+1]

where i >= 2 (1-based indexing).

Therefore, the first position is never involved
in any allowed swap.

The first element remains fixed throughout
all possible operations.


5. WHY MUST THE FIRST ELEMENT BE 1?
-----------------------------------

The array contains a permutation of 1 to n.

Therefore, the smallest element is always 1.

For an array to be sorted in ascending order,
the first position must contain the smallest element.

But the first element can never change.

Therefore:

If the first element is NOT 1:
It is impossible to sort the array.
Answer = NO.

If the first element IS 1:
The remaining elements can be rearranged using
the allowed operation.
Answer = YES.


6. FINAL CONDITION
------------------

Using C++ zero-based indexing:

if (v[0] == 1)
{
    cout << "YES" << endl;
}
else
{
    cout << "NO" << endl;
}

Only the first element needs to be checked.


7. WHAT WE SHOULD DO
-------------------

1. Read the number of test cases.
2. Read n for each test case.
3. Read all n array elements.
4. Check whether v[0] == 1.
5. Print YES if true.
6. Otherwise, print NO.


8. WHAT WE SHOULD NOT DO
------------------------

A. DO NOT SORT THE ARRAY.

Why?
We don't need to actually sort the array.
The first element already tells us whether sorting
is possible.

B. DO NOT SIMULATE ALL SWAPS.

Why?
The problem can be solved using one observation.
Simulation is unnecessary.

C. DO NOT CHECK FOR DUPLICATE ELEMENTS.

Why?
The problem guarantees that the input is a permutation.

D. DO NOT CHECK WHETHER ELEMENTS ARE GREATER THAN n.

Why?
The permutation guarantee already ensures that
all elements belong to the range 1 to n.

E. DO NOT CHECK EVERY ARRAY ELEMENT.

Why?
Only the first element is permanently fixed.
The other elements can be rearranged.

F. DO NOT PRINT MULTIPLE ANSWERS PER TEST CASE.

Why?
Each test case requires exactly one YES or NO.


9. COMPLETE C++ SOLUTION
------------------------

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (v[0] == 1)
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


10. COMPLEXITY ANALYSIS
----------------------

Reading the array:
O(n)

Checking the first element:
O(1)

Total time complexity:
O(n) per test case.

Auxiliary space complexity:
O(n) because we store the vector.

The decision itself takes O(1) time.


11. KEY COMPETITIVE PROGRAMMING LESSON
--------------------------------------

Before writing code or simulating operations:

1. Understand the allowed operation.
2. Identify which elements can change.
3. Identify which elements cannot change.
4. Look for necessary conditions.
5. Check whether those conditions are also sufficient.
6. Avoid unnecessary operations and loops.

IMPORTANT LESSON:

Sometimes an 800-rated problem does not require
sorting, simulation, or a complicated algorithm.

A single mathematical observation can solve it.

========================================================
END OF NOTES
========================================================
*/
