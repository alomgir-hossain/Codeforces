#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int a;
        int b;

        cin >> a;
        cin >> b;

        total = total - a + b;

        v[i] = total;
    }

    int min_capacity = v[0];

    for (int i = 1; i < n; i++) {
        if (min_capacity < v[i]) {
            min_capacity = v[i];
        }
    }

    cout << min_capacity << endl;

    return 0;
}

/*
========================================================
Codeforces: 116A - Tram
Rating: 800
Day: 8
Topic: Running Sum, Loops, Vectors, Maximum Value
========================================================

1. PROBLEM UNDERSTANDING

A tram has n stops.

At every stop:
- a passengers get OFF the tram.
- b passengers get ON the tram.

We need to find the minimum capacity required for
the tram.

That means we must find the maximum number of passengers
inside the tram at any point.

--------------------------------------------------------

2. INPUT AND OUTPUT

Input:
- First line: n (number of stops).
- Next n lines: a and b.
  - a = passengers getting off.
  - b = passengers getting on.

Output:
- Maximum number of passengers inside the tram.

Example:

Input:
4
0 3
2 5
4 2
4 0

Output:
6

--------------------------------------------------------

3. MAIN CONCEPT: RUNNING SUM

We need to track how many passengers are currently
inside the tram.

Formula:

current = current - a + b

Why?

1. Subtract a because a passengers leave.
2. Add b because b passengers enter.

We update this value after every stop.

--------------------------------------------------------

4. FINDING THE MAXIMUM CAPACITY

At every stop, calculate the current passenger count.

Then compare it with the maximum count found so far.

If current is greater than max_capacity:

    max_capacity = current;

At the end, max_capacity is our answer.

--------------------------------------------------------

5. VECTOR APPROACH

We can store the passenger count after every stop.

Example:

vector<int> v(n);

After calculating the passenger count at stop i:

    v[i] = total;

IMPORTANT:

v[i] means the passenger count after stop i.

i is the stop index.
total is the current passenger count.

Do not write:

    v[total] = i;

That reverses the meaning of the vector.

Also, writing:

    v[total];

does not store anything. It only accesses an element.

--------------------------------------------------------

6. COMPLETE VECTOR SOLUTION

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        total = total - a + b;

        v[i] = total;
    }

    int max_capacity = v[0];

    for (int i = 1; i < n; i++)
    {
        if (max_capacity < v[i])
        {
            max_capacity = v[i];
        }
    }

    cout << max_capacity << endl;

    return 0;
}

--------------------------------------------------------

7. DRY RUN

Input:

4
0 3
2 5
4 2
4 0

Initially:

total = 0

STOP 1:
a = 0, b = 3

total = 0 - 0 + 3
total = 3

v[0] = 3

STOP 2:
a = 2, b = 5

total = 3 - 2 + 5
total = 6

v[1] = 6

STOP 3:
a = 4, b = 2

total = 6 - 4 + 2
total = 4

v[2] = 4

STOP 4:
a = 4, b = 0

total = 4 - 4 + 0
total = 0

v[3] = 0

Vector:

v = [3, 6, 4, 0]

Now find the maximum:

max_capacity = 3

Compare 3 with 6:
6 is greater, so max_capacity = 6.

Compare 6 with 4:
No change.

Compare 6 with 0:
No change.

Final answer:

6

--------------------------------------------------------

8. BETTER APPROACH: WITHOUT A VECTOR

We do not actually need to store every passenger count.

We only need:
- total: current number of passengers.
- max_capacity: maximum number of passengers so far.

After every stop, update both values.

Code:

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;
    int max_capacity = 0;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        total = total - a + b;

        if (total > max_capacity)
        {
            max_capacity = total;
        }
    }

    cout << max_capacity << endl;

    return 0;
}

This approach is more memory-efficient.

--------------------------------------------------------

9. TIME AND SPACE COMPLEXITY

VECTOR APPROACH:

Time Complexity: O(n)
- First loop processes n stops.
- Second loop finds the maximum in n elements.

Space Complexity: O(n)
- The vector stores n passenger counts.

WITHOUT VECTOR:

Time Complexity: O(n)
- We process every stop exactly once.

Auxiliary Space Complexity: O(1)
- We only use a few variables.
- No extra vector is required.

--------------------------------------------------------

10. IMPORTANT LESSONS

1. Running Sum:
   Update a value repeatedly as new data arrives.

2. Maximum Tracking:
   Compare every new value with the maximum so far.

3. Vector Index:
   v[i] accesses the element at index i.

4. Assignment:
   v[i] = total stores total inside the vector.

5. Avoid Unnecessary Storage:
   If you only need the maximum, you do not need
   to store every intermediate value.

6. Read Input Correctly:
   cin >> a >> b;

========================================================
*/