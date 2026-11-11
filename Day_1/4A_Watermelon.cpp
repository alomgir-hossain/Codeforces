// todo: 1

#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;

    if (w > 4 && w % 2 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}


/*
4A — Watermelon

Topic: Mathematics, modulo, conditional statements.

Problem: Divide a watermelon into two positive even-weight integer parts.

Observation: The minimum valid total weight is 4. The total weight must be even.

Logic: w >= 4 && w % 2 == 0

Important concepts:
- % returns the remainder.
- Even numbers have remainder 0 when divided by 2.
- && means both conditions must be true.
Complexity: Time O(1), Space O(1).

My mistake / lesson learned: Read the exact requirements. Equal division and division into two even parts are different conditions.

*/


// todo: 2nd process

// #include <iostream>
// using namespace std;

// int main()
// {

//     int w;
//     cin >> w;

//     int half = w / 2;

//     if (half * 2 == w && half > 0)
//     {
//         cout << "Yes" << endl;
//     }
//     else
//     {
//         cout << "No" << endl;
//     }

//     return 0;
// }