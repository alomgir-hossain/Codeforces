#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    for (int i = 0; i < k; i++)
    {
        int remainder = n % 10;

        if (remainder == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }

    cout << n << endl;

    return 0;
}


/*
============================================================
          CODEFORCES 977A - WRONG SUBTRACTION
============================================================

Rating: 800
Topics: Implementation, Simulation, Modulo Operator,
        Integer Division

PROBLEM:
You are given two integers:
- n = initial number
- k = number of operations

Perform exactly k operations:

1. If the last digit of n is not zero, subtract 1 from n.
2. If the last digit of n is zero, divide n by 10.

Print the final value of n.


------------------------------------------------------------
1. MAIN IDEA
------------------------------------------------------------

Use a loop to simulate the operations one by one.

Steps:
1. Read n and k.
2. Repeat the operation k times.
3. Find the last digit of n using n % 10.
4. If the last digit is zero, divide n by 10.
5. Otherwise, subtract 1 from n.
6. Print the final value.


------------------------------------------------------------
2. MODULO OPERATOR (%)
------------------------------------------------------------

The modulo operator gives the remainder after division.

Examples:

123 % 10 = 3
120 % 10 = 0
512 % 10 = 2
7 % 10 = 7

Important:
n % 10 gives the last digit of a positive integer.

Code:

int remainder = n % 10;


------------------------------------------------------------
3. INTEGER DIVISION (/)
------------------------------------------------------------

When two integers are divided, the fractional part
is discarded.

Examples:

123 / 10 = 12
120 / 10 = 12
512 / 10 = 51

Important:
n / 10 removes the last digit of a positive integer.


------------------------------------------------------------
4. CONDITIONAL LOGIC
------------------------------------------------------------

if (remainder == 0)
{
    n = n / 10;
}
else
{
    n = n - 1;
}

Explanation:

- Last digit is 0:
  Divide n by 10.

- Last digit is not 0:
  Subtract 1 from n.


------------------------------------------------------------
5. FOR LOOP
------------------------------------------------------------

for (int i = 0; i < k; i++)

The loop runs exactly k times.

Each iteration performs one operation.

Remember:
- i = 0 is the starting value.
- i < k is the stopping condition.
- i++ increases i by one.


------------------------------------------------------------
6. DRY RUN
------------------------------------------------------------

Input:

512 4

Initial:
n = 512
k = 4

Operation 1:
512 % 10 = 2
Last digit is not zero.
n = 512 - 1 = 511

Operation 2:
511 % 10 = 1
Last digit is not zero.
n = 511 - 1 = 510

Operation 3:
510 % 10 = 0
Last digit is zero.
n = 510 / 10 = 51

Operation 4:
51 % 10 = 1
Last digit is not zero.
n = 51 - 1 = 50

Output:

50


------------------------------------------------------------
7. COMPLEXITY ANALYSIS
------------------------------------------------------------

Time Complexity: O(k)

Reason:
The loop executes exactly k times.
Each operation takes constant time.

Space Complexity: O(1)

Reason:
Only a fixed number of variables are used.


------------------------------------------------------------
8. IMPORTANT LESSONS
------------------------------------------------------------

1. Use % 10 to extract the last digit.
2. Use / 10 to remove the last digit.
3. Integer division discards the fractional part.
4. Use a loop to simulate repeated operations.
5. Follow the problem statement's operation order.
6. Simulation problems can often be solved by directly
   implementing the given instructions.

============================================================
*/