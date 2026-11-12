/*
========================================
Problem: 339A - Helpful Maths
Rating: 800
Topic: Strings, Vectors, Sorting,
       Character Manipulation

Approach:
1. Read the mathematical expression into
   a string variable.
2. Create an empty vector of characters.
3. Traverse the input string using a loop.
4. Use i += 2 because digits appear at
   indexes 0, 2, 4, 6, etc.
5. Extract each digit using s[i].
6. Insert each digit into the vector using
   push_back().
7. Sort the vector using sort().
8. Print the sorted digits.
9. Print a '+' sign between consecutive
   digits, but not after the last digit.

Example:
Input:
3+2+1

Extraction:
3, 2, 1

After Sorting:
1, 2, 3

Output:
1+2+3

Time Complexity: O(n log n)
Auxiliary Space Complexity: O(n)

Key Learning:
1. Understanding C++ strings.
2. Understanding vectors and dynamic arrays.
3. Using push_back() to insert elements.
4. Accessing string characters using indexing.
5. Understanding why i += 2 is useful here.
6. Using sort() from the <algorithm> library.
7. Understanding vector.begin() and vector.end().
8. Using vector.size() to get the number
   of stored elements.
9. Printing separators without adding one
   after the final element.
10. Understanding character vectors (vector<char>).

Important C++ Concepts:

vector<char> v;
Creates an empty character vector.

v.push_back(s[i]);
Inserts a character from the string.

sort(v.begin(), v.end());
Sorts the vector in ascending order.

v.size();
Returns the number of elements in the vector.

========================================
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    string s;
    cin >> s;

    vector<char> v;

    int len = s.length();

    for (int i = 0; i < len; i += 2)
    {
        v.push_back(s[i]);
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];

        if (i < v.size() - 1)
        {
            cout << "+";
        }
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     vector<char> v;

//     for (int i = 0; i < s.length(); i += 2)
//     {
//         v.push_back(s[i]);
//     }

//     sort(v.begin(), v.end());

//     for (int i = 0; i < v.size(); i++)
//     {
//         cout << v[i];

//         if (i < v.size() - 1)
//         {
//             cout << "+";
//         }
//     }
//     return 0;
// }