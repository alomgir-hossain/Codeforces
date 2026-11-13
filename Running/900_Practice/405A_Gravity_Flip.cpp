#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> column(n);

    for (int i = 0; i < n; i++)
    {
        cin >> column[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (column[j] > column[j + 1])
            {
                int temp = column[j];
                column[j] = column[j + 1];
                column[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << column[i] << " ";
    }

    cout << endl;

    return 0;
}

/*
PROBLEM: 405A - Gravity Flip

CONCEPT: BUBBLE SORT

Bubble Sort repeatedly compares adjacent elements.

If the left element is greater than the right element,
swap them.

OUTER LOOP:
for (int i = 0; i < n - 1; i++)

Controls the number of passes.

INNER LOOP:
for (int j = 0; j < n - 1 - i; j++)

Compares adjacent elements.
The -i avoids checking elements already in their
correct positions at the end.

SWAPPING:
int temp = a[j];
a[j] = a[j + 1];
a[j + 1] = temp;

COMPLEXITY:
Time: O(n^2)
Auxiliary space: O(1)

STL ALTERNATIVE:
sort(a.begin(), a.end());

STL sort time: O(n log n)
*/