//! #include <string> ---- ?

/*
========================================
Problem: 71A - Way Too Long Words
Rating: 800
Topic: Strings, Implementation

Approach:
Read the number of words.
Store the words in a string array.
Check the length of each word.
If the length is greater than 10:
Print the first character,
the number of middle characters,
and the last character.
Otherwise, print the original word.

Time Complexity: O(total characters)
Space Complexity: O(total characters)

Key Learning:
1. Using string arrays to store multiple words.
2. Using length() to find string length.
3. Using indexing to access characters.
4. String indexing starts from 0.
========================================
*/

// todo: 1

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string word;
        cin >> word;

        int len = word.length();

        if (len > 10)
        {
            cout << word[0] << len - 2 << word[len - 1] << endl;
        }
        else
        {
            cout << word << endl;
        }
    }

    return 0;
}

/*
71A — Way Too Long Words

Topic: Strings, indexing, loops, implementation.

Problem: Abbreviate words longer than 10 characters.

Observation: Keep the first and last characters. Replace the middle characters with their count.

Formula:
\[
\text{Middle length}=L-2
\]

Logic:
- If length > 10, abbreviate.
- Otherwise, print the original word.
Important concepts:
- string stores text.
- word.length() returns string length.
- word[0] accesses the first character.
- word[len-1] accesses the last character.
- while(n--) repeats n times.
Complexity: O(L) per word, including input reading.

My mistake / lesson learned: C++ string indexing starts at zero, so the last index is length minus one.
*/

// todo: 2

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     string words[100];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> words[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (words[i].length() > 10)
//         {
//             cout << words[i][0] << words[i].length() - 2 << words[i][words[i].length() - 1] << endl;
//         }
//         else
//         {
//             cout << words[i] << endl;
//         }
//     }

//     return 0;
// }

// todo: 3

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     string words[100];

//     for (int i = 0; i < n; i++)
//     {
//         cin >> words[i];
//     }

//     for (int i = 0; i < n; i++)
//     {
//         int len = words[i].length();

//         if (words[i].length() > 10)
//         {
//             cout << words[i][0] << len - 2 << words[i][len - 1] << endl;
//         }
//         else
//         {
//             cout << words[i] << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//     int n;
//     cin >> n;

//     // Process each word separately.
//     while (n--) {

//         string word;
//         cin >> word;

//         int len = word.length();

//         // Abbreviate only if the word has more than 10 characters.
//         if (len > 10) {

//             // Print first character + middle character count + last character.
//             cout << word[0] << len - 2 << word[len - 1] << endl;

//         }
//         else {

//             // Short words remain unchanged.
//             cout << word << endl;
//         }
//     }

//     return 0;
// }