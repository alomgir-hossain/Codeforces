/*
========================================
Problem: 281A - Word Capitalization
Rating: 800
Topic: Strings, Character Manipulation, Implementation

Approach:
Read the given word into a string variable.
Access the first character using word[0].
Convert the first character to uppercase using toupper().
Print the modified word.
Keep all other characters unchanged.

Time Complexity: O(n)
Space Complexity: O(n)

Key Learning:
1. Understanding the C++ string data type.
2. Accessing characters using string indexing.
3. Understanding zero-based indexing.
4. Using toupper() to convert lowercase
   characters into uppercase.
5. Using the <string> and <cctype> headers.
6. Modifying a specific character in a string.

========================================
*/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string word;
    cin >> word;

    word[0] = toupper(word[0]);

    cout << word << endl;
    return 0;
}