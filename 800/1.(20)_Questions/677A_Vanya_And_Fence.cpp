// todo: Approach - 2

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int count = 0;
    int width = 1;
    vector<int> height(n);

    for (int i = 0; i < n; i++)
    {
        cin >> height[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (height[i] > h)
        {
            count++;
        }
    }

    width = (n + count) * width;

    cout << width << endl;

    return 0;
}


/*
========================================================
Codeforces 677A - Vanya and Fence
Rating: 800
Day: 8
Problem: 1

TOPICS:
- For loops
- If-else
- Vectors
- Counting
- Arithmetic
========================================================

1. PROBLEM UNDERSTANDING
------------------------
We have n friends and a fence of height h.

Each friend has a height.

If friend's height <= h:
    Required width = 1

If friend's height > h:
    Required width = 2

Find the total width occupied by all friends.


2. APPROACH 1: VECTOR + COUNTING
--------------------------------
Step 1:
Read n and h.

Step 2:
Create a vector:
vector<int> height(n);

Step 3:
Read all friends' heights into the vector.

Step 4:
Initialize:
int count = 0;

Step 5:
Loop through all heights.

If height[i] > h:
    count++;

Step 6:
Calculate:
width = n + count;

Step 7:
Print width.


3. WHY DOES THE FORMULA WORK?
-----------------------------
Every friend initially occupies width 1.

Initial width = n

Every friend taller than the fence needs
one additional unit of width.

Additional width = count

Therefore:

TOTAL WIDTH = n + count


4. APPROACH 2: DIRECT COUNTING
------------------------------
Initialize:
int width = 0;

Read each friend's height inside a loop.

If height > h:
    width += 2;
Else:
    width += 1;

Print width.

No vector is needed because we process each
height immediately.


5. IMPORTANT C++ CONCEPTS
-------------------------
A. Vector initialization:

vector<int> height(n);

Creates n available elements.

B. Increment:

count++;

Same as:
count = count + 1;

C. Addition assignment:

width += 2;

Same as:
width = width + 2;

D. Vector access:

height[i]

Accesses an existing vector element.

E. Condition:

height[i] > h

Checks whether a friend is taller than the fence.


6. COMMON MISTAKES
------------------
1. Using an empty vector without allocating elements.
2. Forgetting to initialize count.
3. Using >= instead of >.
4. Adding only 1 for a taller friend.
5. Printing extra messages in Codeforces.
6. Using a vector when it is unnecessary.


7. COMPLEXITY
-------------
Approach 1:
Time: O(n)
Auxiliary Space: O(n)

Approach 2:
Time: O(n)
Auxiliary Space: O(1)


8. KEY LESSONS
--------------
- A vector can store multiple values.
- Process input directly when storage is unnecessary.
- A running total can simplify calculations.
- += is useful for updating a total.
- Always check whether the condition is > or >=.

========================================================
END OF NOTES
========================================================
*/


// todo: Approach - 2

// #include <iostream>
// using namespace std;

// int main() {
//     int n, h;
//     cin >> n >> h;

//     int width = 0; 

//     for (int i = 0; i < n; i++) {
//         int height;
//         cin >> height;

//         if (height > h) {
//             width += 2;
//         } else {
//             width += 1;
//         }
//     }

//     cout << width << endl;

//     return 0;
// }