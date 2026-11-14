// #include <iostream>
// using namespace std;

// int main()
// {
//     int k2, k3, k5, k6;
//     cin >> k2 >> k3 >> k5 >> k6;

//     int smallest;

//     if (k2 <= k5 && k2 <= k6)
//     {
//         smallest = k2;
//     }
//     else if (k5 <= k2 && k5 <= k6)
//     {
//         smallest = k5;
//     }
//     else
//     {
//         smallest = k6;
//     }

//     int sum = (smallest * 256);

//     if (k2 > smallest)
//     {
//         sum = (k2 - smallest) * 32;
//     }

//     cout << sum << endl;
// }

#include <iostream>
using namespace std;

int main()
{
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int sum = 0;

    while (k2 > 0)
    {
        if (k2 > 0 && k5 > 0 && k6 > 0)
        {
            sum = sum + 256;
            k2 = k2 - 1;
            k5 = k5 - 1;
            k6 = k6 - 1;
        }
        else if (k2 > 0 && k3 > 0)
        {
            sum = sum + 32;
            k2 = k2 - 1;
            k3 = k3 - 1;
        } else {
            k2 = k2 - 1;
        }
    }

    cout << sum << endl;

    return 0;
}


/*
============================================================
          CODEFORCES 734B - ANTON AND DIGITS
============================================================

Rating: 900
Topics: Greedy Algorithm, Implementation, Sorting,
        Minimum Function (min)

PROBLEM:
You are given four integers:
- k2 = number of digit 2
- k3 = number of digit 3
- k5 = number of digit 5
- k6 = number of digit 6

You can create two types of numbers:

1. 256 -> Requires one 2, one 5, and one 6.
2. 32  -> Requires one 3 and one 2.

Find the maximum possible sum of the numbers you create.


------------------------------------------------------------
1. MAIN GREEDY IDEA
------------------------------------------------------------

Always create 256 before creating 32.

Why?

Both numbers require digit 2.

But:
256 is worth 256.
32 is worth only 32.

Therefore, using digit 2 to create 256 gives a
larger contribution.

Steps:
1. Calculate how many 256 numbers can be created.
2. Calculate the remaining number of digit 2.
3. Use the remaining 2s and available 3s to create 32.
4. Add both contributions.


------------------------------------------------------------
2. USING min() FUNCTION
------------------------------------------------------------

The min() function returns the smallest value.

To create 256, we need:
- One 2
- One 5
- One 6

Therefore:

int count256 = min(k2, min(k5, k6));

Example:

k2 = 5
k5 = 3
k6 = 2

count256 = min(5, 3, 2)
count256 = 2

We can create only two 256 numbers because we have
only two 6s.

Contribution:

sum = count256 * 256;


------------------------------------------------------------
3. CALCULATING REMAINING DIGITS
------------------------------------------------------------

Each 256 uses one digit 2.

Therefore, remaining 2s:

int remaining2 = k2 - count256;

Example:

k2 = 5
count256 = 2

remaining2 = 5 - 2
remaining2 = 3


------------------------------------------------------------
4. CREATING NUMBER 32
------------------------------------------------------------

To create 32, we need:
- One remaining 2
- One 3

Therefore:

int count32 = min(remaining2, k3);

Example:

remaining2 = 3
k3 = 4

count32 = min(3, 4)
count32 = 3

Contribution:

sum += count32 * 32;


------------------------------------------------------------
5. FINAL MATHEMATICAL FORMULA
------------------------------------------------------------

Number of 256:

a = min(k2, k5, k6)

Remaining 2s:

remaining2 = k2 - a

Number of 32:

b = min(remaining2, k3)

Final answer:

sum = (a * 256) + (b * 32)


------------------------------------------------------------
6. WHY NOT USE A WHILE LOOP?
------------------------------------------------------------

A while loop can simulate creating numbers one by one.

However, it is unnecessary here.

We can calculate the maximum number of each type
directly using min().

This avoids:
- Unnecessary iterations.
- Infinite loop mistakes.
- Extra conditions.

The mathematical approach is simpler and more efficient.


------------------------------------------------------------
7. DRY RUN
------------------------------------------------------------

Input:

5 1 3 3

Initial values:

k2 = 5
k3 = 1
k5 = 3
k6 = 3

Step 1: Calculate number of 256.

a = min(5, 3, 3)
a = 3

Contribution:

3 * 256 = 768

Step 2: Calculate remaining 2s.

remaining2 = 5 - 3
remaining2 = 2

Step 3: Calculate number of 32.

b = min(2, 1)
b = 1

Contribution:

1 * 32 = 32

Step 4: Calculate final answer.

sum = 768 + 32
sum = 800

Output:

800


------------------------------------------------------------
8. COMPLEXITY ANALYSIS
------------------------------------------------------------

Time Complexity: O(1)

Reason:
Only a fixed number of mathematical operations are
performed. No loops are required.

Space Complexity: O(1)

Reason:
Only a fixed number of integer variables are used.


------------------------------------------------------------
9. IMPORTANT LESSONS
------------------------------------------------------------

1. Greedy algorithms make the best choice first.
2. Prioritize 256 because it gives a larger contribution
   than 32 and both require digit 2.
3. Use min() when the number of possible combinations
   depends on the smallest available quantity.
4. Always calculate the remaining resources after
   creating one type of number.
5. Use += when adding a new contribution to an existing sum.
6. Mathematical calculations can replace unnecessary loops.
7. Never forget that different combinations may share
   the same limited resource.

============================================================
*/