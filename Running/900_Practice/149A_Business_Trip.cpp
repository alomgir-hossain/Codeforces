#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int k;
    cin >> k;

    if (k == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    vector<int> month(12);

    for (int i = 0; i < 12; i++)
    {
        cin >> month[i];
    }

    for (int i = 0; i < 12 - 1; i++)
    {
        for (int j = 0; j < 12 - 1 - i; j++)
        {
            if (month[j] < month[j + 1])
            {
                int temp = month[j];
                month[j] = month[j + 1];
                month[j + 1] = temp;
            }
        }
    }

    int height = 0;
    int count = 0;

    for (int i = 0; i < 12; i++)
    {
        height = height + month[i];
        count = count + 1;

        if (height >= k)
        {
            cout << count << endl;

            return 0;
        }
    }

    cout << "-1" << endl;

    return 0;
}


/*
============================================================
          CODEFORCES 149A - BUSINESS TRIP
============================================================

Rating: 900
Topics: Greedy Algorithm, Sorting, Bubble Sort

PROBLEM:
You need to grow a plant by at least k centimeters.
You are given 12 integers representing the growth possible
in each month.

Find the minimum number of months needed to reach at least k.

Special cases:
- If k == 0, print 0.
- If the target cannot be reached in 12 months, print -1.


------------------------------------------------------------
1. GREEDY ALGORITHM - MAIN IDEA
------------------------------------------------------------

Choose the months with the largest growth first.

Steps:
1. Read k and the 12 monthly growth values.
2. If k == 0, print 0 and stop.
3. Sort the monthly growth values in descending order.
4. Add the largest values one by one.
5. Count the selected months.
6. When total growth >= k, print the count.
7. If all 12 months are insufficient, print -1.

Why Greedy?
Choosing the largest growth values first minimizes the
number of months needed to reach the target.


------------------------------------------------------------
2. BUBBLE SORT - DESCENDING ORDER
------------------------------------------------------------

for (int i = 0; i < 12 - 1; i++)
{
    for (int j = 0; j < 12 - 1 - i; j++)
    {
        if (month[j] < month[j + 1])
        {
            int temp = month[j];
            month[j] = month[j + 1];
            month[j + 1] = temp;
        }
    }
}

Remember:
- Use < to sort in descending order.
- Larger values move toward the beginning.


------------------------------------------------------------
3. ACCUMULATION AND COUNTING
------------------------------------------------------------

int height = 0;
int count = 0;

for (int i = 0; i < 12; i++)
{
    height += month[i];
    count++;

    if (height >= k)
    {
        cout << count << endl;
        return 0;
    }
}

cout << -1 << endl;

Remember:
- height stores the total accumulated growth.
- count stores the number of selected months.
- Add the current month's growth BEFORE checking
  whether height >= k.


------------------------------------------------------------
4. SPECIAL CASES
------------------------------------------------------------

Case 1: k == 0

if (k == 0)
{
    cout << 0 << endl;
    return 0;
}

No months are needed because the target is already reached.

Case 2: Impossible to reach the target

If all 12 months are insufficient, print -1.


------------------------------------------------------------
5. COMPLEXITY ANALYSIS
------------------------------------------------------------

Bubble Sort:
O(12^2)

Accumulation loop:
O(12)

Overall Time Complexity:
O(1), because the number of months is always fixed at 12.

Space Complexity:
O(1), because the vector always stores exactly 12 values.


------------------------------------------------------------
6. IMPORTANT LESSONS
------------------------------------------------------------

1. Use Greedy when choosing the largest values first
   gives the minimum number of selections.
2. Sort in descending order for this problem.
3. Handle special cases before the main algorithm.
4. Update the total before checking the target.
5. Always consider the impossible case.
6. Understand why the greedy choice works, not just
   how to implement it.

============================================================
*/