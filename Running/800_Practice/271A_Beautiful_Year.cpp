#include <iostream>
#include <vector>
using namespace std;

bool unique(int n)
{
    vector<int> num;

    int digitCount = n;

    int numOfDigit = 0;

    while (digitCount > 0)
    {
        numOfDigit = numOfDigit + 1;
        digitCount = digitCount / 10;
    }

    int vectorInput = n;

    for (int i = 0; i < numOfDigit; i++)
    {
        int remainder = vectorInput % 10;

        num.push_back(remainder);

        vectorInput = vectorInput / 10;
    }

    for (int i = 0; i < numOfDigit - 1; i++)
    {
        for (int j = i + 1; j < numOfDigit; j++)
        {
            if (num[i] == num[j])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int year;
    cin >> year;

    year++;

    while (!unique(year))
    {
        year = year + 1;
    }

    cout << year << endl;

    return 0;
}

/*
=========================================================
        CODEFORCES 271A - BEAUTIFUL YEAR
=========================================================

Problem:
--------
Given a year y, find the smallest year strictly greater
than y in which all digits are distinct.

Example:
--------
Input:
1987

Output:
2013

Explanation:
1988 -> Repeated 8
1989 -> Repeated 9
1990 -> Repeated 9
...
2013 -> All digits are distinct.

---------------------------------------------------------
APPROACH: DIGIT EXTRACTION + VECTOR + NESTED LOOPS
---------------------------------------------------------

1. Create a function unique(int n).

   This function checks whether all digits of a number
   are different.

2. Count the number of digits.

   Use a temporary variable so the original number
   remains unchanged.

   while (digitCount > 0)
   {
       numOfDigit++;
       digitCount = digitCount / 10;
   }

3. Extract each digit.

   Use the modulo operator (%) to get the last digit.

   int remainder = n % 10;

   Use push_back() to insert the digit into the vector.

   num.push_back(remainder);

   Use integer division to remove the last digit.

   n = n / 10;

4. Compare the digits.

   Use two nested loops to compare every digit with
   the digits that come after it.

   for (int i = 0; i < numOfDigit - 1; i++)
   {
       for (int j = i + 1; j < numOfDigit; j++)
       {
           if (num[i] == num[j])
           {
               return false;
           }
       }
   }

   If two digits are equal, the number is not unique.

   Return true if no duplicate is found.

5. Find the next beautiful year.

   First increase the given year because the answer
   must be strictly greater than the input.

   year++;

   Keep increasing the year until unique(year)
   returns true.

   while (!unique(year))
   {
       year++;
   }

6. Print the answer.

   cout << year << endl;

---------------------------------------------------------
IMPORTANT C++ CONCEPTS
---------------------------------------------------------

1. Modulo operator (%):
   n % 10 extracts the last digit.

   Example:
   1987 % 10 = 7

2. Integer division (/):
   n / 10 removes the last digit.

   Example:
   1987 / 10 = 198

3. Vector:
   vector<int> num;

   Creates an empty integer vector.

   num.push_back(x);

   Inserts a new element at the end.

   num[i];

   Accesses an existing element.

4. Nested loops:
   Used to compare every pair of digits.

5. j = i + 1:
   Starts comparison from the next element.
   Prevents comparing an element with itself and
   avoids checking the same pair twice.

6. Boolean function:
   return false; means duplicate digits were found.
   return true; means all digits are distinct.

---------------------------------------------------------
DRY RUN
---------------------------------------------------------

Input year = 1987

Check the following years:

1988 -> Not unique (8 repeats)
1989 -> Not unique (9 repeats)
1990 -> Not unique (9 repeats)
...
2013 -> Unique (2, 0, 1, 3)

Output:
2013

---------------------------------------------------------
TIME AND SPACE COMPLEXITY
---------------------------------------------------------

Let d = number of digits in the year.

Digit counting:       O(d)
Digit extraction:     O(d)
Nested comparisons:   O(d^2)

Total time per check:  O(d^2)
Extra space:           O(d)

Since the year contains only four digits under the
problem constraints, this approach is efficient enough.

---------------------------------------------------------
LESSONS LEARNED
---------------------------------------------------------

1. Preserve the original number when counting digits.
2. Use push_back() to insert into an empty vector.
3. Use % 10 and / 10 to extract digits.
4. Compare every pair, not just adjacent elements.
5. Start the inner loop at i + 1.
6. Increment the year before checking because the
   answer must be strictly greater than the input.
7. Always print the final answer.

=========================================================
*/
