/*
========================================
Problem: 112A - Petya and Strings
Rating: 800
Topic: Strings, Character Comparison,
       Lexicographical Order

Approach:
1. Read two strings.
2. Traverse both strings from left to right.
3. Convert the current characters of both
   strings into lowercase using tolower().
4. Compare the converted characters.
5. If they are different:
   - Print -1 if the first character is smaller.
   - Print 1 if the first character is greater.
   - Stop the program.
6. If the loop finishes without finding
   a difference, print 0.

Important Concept:
Lexicographical Comparison:
Compare two strings from left to right.
The first different character determines
which string is smaller or greater.

Time Complexity: O(n)
Auxiliary Space Complexity: O(1)

Key Learning:
1. Understanding C++ strings.
2. Accessing characters using indexing.
3. Understanding zero-based indexing.
4. Using tolower() from <cctype>.
5. Comparing characters using <, > and !=.
6. Understanding lexicographical order.
7. Using return 0 to stop execution.
8. Understanding why output should be
   printed only once.

========================================
*/

#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    string string1;
    string string2;

    cin >> string1;
    cin >> string2;

    for (int i = 0; i < string1.length(); i++)
    {
        char a = tolower(string1[i]);
        char b = tolower(string2[i]);

        if (a != b)
        {
            if (a < b)
            {
                cout << "-1" << endl;
            }
            else
            {
                cout << "1" << endl;
            }

            return 0;
        }
    }

    cout << "0" <<endl;

    return 0;
}