// todo: exceeded time limit

// #include <iostream>
// #include <cmath>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     int f = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         f = f + pow(-1, i) * i;
//     }

//     cout << f << endl;

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        cout << -(n + 1) / 2 << endl;
    }

    return 0;
}


/*
PROBLEM: 486A - Calculating Function
RATING: 800
TOPIC: Mathematics, Implementation

PROBLEM:
Calculate:
f(n) = -1 + 2 - 3 + 4 - ... + (-1)^n * n

PATTERN:
Odd numbers have negative signs.
Even numbers have positive signs.

FORMULA:
If n is even:
    answer = n / 2

If n is odd:
    answer = -(n + 1) / 2

MY MISTAKE:
Initially used a loop to calculate the sum.
The logic was eventually corrected, but Codeforces
gave Time Limit Exceeded (TLE) on test 3.

WHY TLE?
Maximum n = 10^15.
The loop runs n times.
Time complexity = O(n).

LESSON:
A correct algorithm is not necessarily an efficient algorithm.
Always check the input constraints before choosing an approach.

FINAL APPROACH:
Use the mathematical formula instead of a loop.

TIME COMPLEXITY: O(1)
SPACE COMPLEXITY: O(1)

IMPORTANT:
Use long long instead of int because n can reach 10^15.
*/