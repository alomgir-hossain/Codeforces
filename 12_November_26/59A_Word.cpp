#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 97)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    if (count > 0)
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }
    else if (count < 0)
    {
        for (char &c : s)
        {
            c = toupper(c);
        }
    }
    else
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }

    cout << s << endl;

    return 0;
}

/*
========================================================
Codeforces: 59A - Word
Rating: 800
Day: 9
Topic: Strings, Loops, Character Counting, ASCII,
       Character Conversion
========================================================

1. PROBLEM UNDERSTANDING

We are given a word containing uppercase and lowercase
English letters.

We need to convert the entire word based on these rules:

1. If uppercase letters are more than lowercase letters,
   convert the entire word to UPPERCASE.

2. If lowercase letters are more than uppercase letters,
   convert the entire word to lowercase.

3. If uppercase and lowercase letters are equal,
   convert the entire word to lowercase.

IMPORTANT:
When counts are equal, the answer must be lowercase.

--------------------------------------------------------

2. EXAMPLE

Input:
HoUse

Count uppercase:
H, U = 2

Count lowercase:
o, s, e = 3

Lowercase letters are greater.

Output:
house

Another example:

Input:
ViP

Uppercase = 2
Lowercase = 1

Output:
VIP

Another example:

Input:
maTRIx

Uppercase = 3
Lowercase = 3

Counts are equal, so output lowercase:

matrix

--------------------------------------------------------

3. ASCII VALUES

English uppercase letters:

A = 65
B = 66
C = 67
...
Z = 90

English lowercase letters:

a = 97
b = 98
c = 99
...
z = 122

Therefore:

if (s[i] >= 97)

This checks whether the character is lowercase for
English alphabetic input.

A more readable method is:

islower(s[i])

To check uppercase:

isupper(s[i])

--------------------------------------------------------

4. COUNTING APPROACH

We can use one variable:

int count = 0;

Instead of maintaining two separate counters:

- Lowercase letter: count++
- Uppercase letter: count--

After checking every character:

If count > 0:
    More lowercase letters.

If count < 0:
    More uppercase letters.

If count == 0:
    Equal number of uppercase and lowercase letters.

--------------------------------------------------------

5. DECISION LOGIC

if (count < 0)
{
    // Convert the whole word to uppercase.
}
else
{
    // Convert the whole word to lowercase.
}

Why?

count < 0 means uppercase letters are greater.

count > 0 means lowercase letters are greater.

count == 0 means both are equal.

The problem says equal counts must produce lowercase.

Therefore, count == 0 also belongs in the else block.

--------------------------------------------------------

6. IMPORTANT FUNCTIONS

We use the cctype header:

#include <cctype>

tolower():

Converts an uppercase character to lowercase.

Example:
char c = 'A';
c = tolower(c);

Now c = 'a'.

toupper():

Converts a lowercase character to uppercase.

Example:
char c = 'a';
c = toupper(c);

Now c = 'A'.

islower():

Checks whether a character is lowercase.

Example:
islower('a') returns true.

isupper():

Checks whether a character is uppercase.

Example:
isupper('A') returns true.

IMPORTANT:

tolower() and toupper() return converted characters.
They do not automatically change the original variable.

WRONG:
tolower(c);

CORRECT:
c = tolower(c);

WRONG:
toupper(c);

CORRECT:
c = toupper(c);

--------------------------------------------------------

7. RANGE-BASED FOR LOOP

We can use:

for (char &c : s)

This visits every character in the string.

Why use &?

The & makes c a reference to the original character.

Without &:

for (char c : s)

c is only a copy. Changing c does not change s.

With &:

for (char &c : s)

Changing c also changes the original string.

Example:

string s = "Hello";

for (char &c : s)
{
    c = tolower(c);
}

Now:

s = "hello"

--------------------------------------------------------

8. COMPLETE SOLUTION

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (islower(s[i]))
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    if (count < 0)
    {
        for (char &c : s)
        {
            c = toupper(c);
        }
    }
    else
    {
        for (char &c : s)
        {
            c = tolower(c);
        }
    }

    cout << s << endl;

    return 0;
}

--------------------------------------------------------

9. DRY RUN

Input:

HoUse

Initially:

count = 0

Character 1: H
H is uppercase.
count = 0 - 1 = -1

Character 2: o
o is lowercase.
count = -1 + 1 = 0

Character 3: U
U is uppercase.
count = 0 - 1 = -1

Character 4: s
s is lowercase.
count = -1 + 1 = 0

Character 5: e
e is lowercase.
count = 0 + 1 = 1

Final count:

count = 1

Because count > 0, lowercase letters are greater.

Convert the entire word to lowercase.

Final output:

house

--------------------------------------------------------

10. TIME AND SPACE COMPLEXITY

Time Complexity: O(n)

First loop:
Visits every character once to count uppercase
and lowercase letters.

Second loop:
Visits every character once to convert the word.

Total: O(n) + O(n) = O(n).

Auxiliary Space Complexity: O(1)

We only use a counter and a few variables.
No additional array or vector is needed.

The input string itself requires O(n) storage.

--------------------------------------------------------

11. COMMON MISTAKES

1. Forgetting to assign the result of tolower():

   WRONG:
   tolower(c);

   CORRECT:
   c = tolower(c);

2. Forgetting to assign the result of toupper():

   WRONG:
   toupper(c);

   CORRECT:
   c = toupper(c);

3. Using char c instead of char &c when modifying
   characters in a range-based loop.

4. Forgetting that equal uppercase and lowercase
   counts must produce lowercase.

5. Forgetting to print the final string:

   cout << s << endl;

6. Confusing ASCII values:
   Uppercase A-Z: 65-90
   Lowercase a-z: 97-122

--------------------------------------------------------

12. WHAT I LEARNED

- How to count uppercase and lowercase characters.
- How ASCII values represent English letters.
- How to use islower() and isupper().
- How to use tolower() and toupper().
- How to modify strings using char references.
- How to use one counter instead of two counters.
- How to combine conditions using if-else.

IMPORTANT PROGRAMMING PATTERNS:

1. Counting characters in a string.
2. Using a counter to compare two categories.
3. Transforming every character in a string.
4. Using a reference in a range-based for loop.

========================================================
*/

// todo: simple modification

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     string s;
//     cin >> s;

//     int count = 0;

//     for (int i = 0; i < s.length(); i++)
//     {
//         if (islower(s[i]))
//         {
//             count--;
//         }
//         else
//         {
//             count++;
//         }
//     }

//     if (count > 0)
//     {
//         for (char &c : s)
//         {
//             c = toupper(c);
//         }
//     }
//     else if (count < 0)
//     {
//         for (char &c : s)
//         {
//             c = tolower(c);
//         }
//     }
//     else
//     {
//         for (char &c : s)
//         {
//             c = tolower(c);
//         }
//     }

//     cout << s << endl;

//     return 0;
// }