#include <iostream>
using namespace std;

int sumOfNumbers(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;

    int height = 0;

    for (int i = 1; n >= sumOfNumbers(i); i++)
    {
        height++;
        n = n - sumOfNumbers(i);
    }

    cout << height << endl;

    return 0;
}


/*
========================================================
        CODEFORCES 492A - VANYA AND CUBES
========================================================

RATING: 900

PROBLEM:
--------
Vanya has n cubes and wants to build a pyramid.

Each layer requires a triangular number of cubes:

Layer 1 = 1 cube
Layer 2 = 1 + 2 = 3 cubes
Layer 3 = 1 + 2 + 3 = 6 cubes
Layer 4 = 1 + 2 + 3 + 4 = 10 cubes
Layer 5 = 1 + 2 + 3 + 4 + 5 = 15 cubes

We need to find the maximum number of complete
layers that can be built using n cubes.

--------------------------------------------------------
1. IMPORTANT CONCEPT: TRIANGULAR NUMBERS
--------------------------------------------------------

The number of cubes required for layer i is:

T(i) = 1 + 2 + 3 + ... + i

Formula:

T(i) = i * (i + 1) / 2

Examples:

T(1) = 1 * 2 / 2 = 1
T(2) = 2 * 3 / 2 = 3
T(3) = 3 * 4 / 2 = 6
T(4) = 4 * 5 / 2 = 10
T(5) = 5 * 6 / 2 = 15

--------------------------------------------------------
2. FUNCTION
--------------------------------------------------------

int sumOfNumbers(int n)
{
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    return sum;
}

PURPOSE:
Calculates the number of cubes required for one layer.

IMPORTANT:
Declare sum inside the function.

Why?

Every function call should start with sum = 0.

If sum is global, its previous value will remain
between function calls, causing incorrect results.

--------------------------------------------------------
3. MAIN LOGIC
--------------------------------------------------------

int height = 0;

for (int i = 1; n >= sumOfNumbers(i); i++)
{
    height++;
    n = n - sumOfNumbers(i);
}

cout << height << endl;

EXPLANATION:

i:
Represents the current layer number.

n >= sumOfNumbers(i):
Checks whether enough cubes remain to build
the current layer.

height++:
Increases the number of completed layers.

n = n - sumOfNumbers(i):
Subtracts the cubes used to build the current layer.

The loop stops when there are not enough cubes
to complete the next layer.

--------------------------------------------------------
4. DRY RUN
--------------------------------------------------------

INPUT:
25

Initially:
n = 25
height = 0

Iteration 1:
i = 1
Cubes needed = 1
25 >= 1  (TRUE)
Remaining cubes = 25 - 1 = 24
height = 1

Iteration 2:
i = 2
Cubes needed = 3
24 >= 3  (TRUE)
Remaining cubes = 24 - 3 = 21
height = 2

Iteration 3:
i = 3
Cubes needed = 6
21 >= 6  (TRUE)
Remaining cubes = 21 - 6 = 15
height = 3

Iteration 4:
i = 4
Cubes needed = 10
15 >= 10  (TRUE)
Remaining cubes = 15 - 10 = 5
height = 4

Iteration 5:
i = 5
Cubes needed = 15
5 >= 15  (FALSE)

Loop stops.

OUTPUT:
4

--------------------------------------------------------
5. OPTIMIZATION
--------------------------------------------------------

Instead of calculating the triangular number using
a loop, we can use its mathematical formula:

T(n) = n * (n + 1) / 2

Optimized function:

int sumOfNumbers(int n)
{
    return n * (n + 1) / 2;
}

This reduces the function's time complexity
from O(n) to O(1).

--------------------------------------------------------
6. COMPLEXITY ANALYSIS
--------------------------------------------------------

For the original function:

Time Complexity: O(h^2)
Space Complexity: O(1)

Here, h represents the number of completed layers.

For the optimized formula:

Time Complexity: O(h)
Space Complexity: O(1)

--------------------------------------------------------
7. IMPORTANT LESSONS
--------------------------------------------------------

1. A function can be used to separate a calculation
   from the main program.

2. Local variables are initialized separately
   every time a function is called.

3. A for loop can continue until a condition becomes
   false.

4. We can modify a variable inside a loop to track
   the remaining resources.

5. Triangular numbers are calculated using:

   n * (n + 1) / 2

6. Greedy approach:
   Always build the next layer if enough cubes remain.

========================================================
*/