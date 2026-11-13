// todo: Approach - 1

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int p;
    cin >> p;

    vector<int> vp(p);

    for (int i = 0; i < p; i++)
    {
        cin >> vp[i];
    }

    int q;
    cin >> q;

    vector<int> vq(q);

    for (int i = 0; i < q; i++)
    {
        cin >> vq[i];
    }

    vector<int> v3;

    v3.insert(v3.end(), vp.begin(), vp.end());
    v3.insert(v3.end(), vq.begin(), vq.end());

    sort(v3.begin(), v3.end());

    v3.erase(unique(v3.begin(), v3.end()), v3.end());

    int size = v3.size();

    if (size == n)
    {
        cout << "I become the guy." << endl;
    }
    else
    {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}


/*
PROBLEM: 469A - I Wanna Be the Guy

APPROACH 1: VECTOR + SORT + UNIQUE
1. Read both players' levels into separate vectors.
2. Combine both vectors using insert().
3. Sort the combined vector.
4. Remove duplicates using erase() + unique().
5. Compare the number of unique levels with n.

IMPORTANT:
- unique() does not resize the vector.
- Sort before using unique().
- erase() actually removes the duplicate elements.

APPROACH 2: BOOLEAN ARRAY
1. Create bool passed[101] = {};
2. Read player X's levels and mark passed[level] = true.
3. Read player Y's levels and mark passed[level] = true.
4. Check every level from 1 to n.
5. If any passed[i] is false, print failure and return 0.
6. Otherwise, print success.

IMPORTANT:
- Levels are numbered from 1 to n.
- Therefore, check using i = 1; i <= n.
- Input-reading loops can use i = 0; i < p or q.
- A Boolean array avoids sorting and duplicate removal.

BEST APPROACH:
Boolean array — O(p + q + n) time and O(n) space.
*/


// todo: Approach - 2

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     bool passed[101] = {};

//     int p;
//     cin >> p;

//     for (int i = 1; i <= p; i++)
//     {
//         int level;
//         cin >> level;
//         passed[level] = true;
//     }

//     int q;
//     cin >> q;

//     for (int i = 1; i <= q; i++)
//     {
//         int level;
//         cin >> level;
//         passed[level] = true;
//     }

//     for (int i = 1; i <= n; i++)
//     {
//         if (!passed[i])
//         {
//             cout << "Oh, my keyboard!" << endl;
//             return 0;
//         }
//     }

//     cout << "I become the guy." << endl;

//     return 0;
// }