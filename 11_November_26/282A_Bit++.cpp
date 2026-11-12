
/*
========================================
Problem: 282A - Bit++
Rating: 800
Topic: Implementation, Strings, Variables

Approach:
Read the number of operations.
Initialize the variable X = 0.
For each operation, read the statement.
If the statement is "++X" or "X++",
increase X by 1.
If the statement is "--X" or "X--",
decrease X by 1.
Finally, print the final value of X.

Time Complexity: O(n)
Space Complexity: O(1)

Key Learning:
1. Using strings to read operations.
2. Comparing strings using the == operator.
3. Using increment (++) and decrement (--).
4. Updating variables inside a loop.
5. Processing input one operation at a time.
========================================
*/

// todo: first

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string operation[n];

    int X = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> operation[i];

        if (operation[i] == "++X" || operation[i] == "X++")
        {
            X++;
        }
        else if (operation[i] == "--X" || operation[i] == "X--")
        {
            X--;
        }
    }

    cout << X << endl;

    return 0;
}


// TODO: improved version

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     int X = 0;

//     for (int i = 0; i < n; i++) {
//         string operation;
//         cin >> operation;

//         if (operation == "++X" || operation == "X++") {
//             X++;
//         } else {
//             X--;
//         }
//     }
    
//     cout << X << endl;

//     return 0;
// }