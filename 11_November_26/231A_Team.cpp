
/*
========================================
Problem: 231A - Team
Rating: 800
Topic: Implementation, Counting, Conditions

Approach:
Read the number of problems.
For each problem, read the opinions
of the three friends.
Calculate the sum of their opinions.
If the sum is greater than or equal to 2,
increase the count by 1.
Finally, print the total count.

Time Complexity: O(n)
Space Complexity: O(1)

Key Learning:
1. Using a for loop to process multiple problems.
2. Using conditions to make decisions.
3. Counting using a counter variable.
4. Using the sum of three integers to
   check whether at least two friends agree.
========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b + c >= 2)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
