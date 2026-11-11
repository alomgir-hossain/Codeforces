// todo: 1

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 0; i < n; i++)
//     {
//         string word;
//         cin >> word;

//         int len = word.length();

//         if (len > 10)
//         {
//             cout << word[0] << len - 2 << word[len - 1] << endl;
//         }
//         else
//         {
//             cout << word << endl;
//         }
//     }

//     return 0;
// }


// todo: 2

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string words[100];

    for (int i = 0; i < n; i++)
    {
        cin >> words[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (words[i].length() > 10)
        {
            cout << words[i][0] << words[i].length() - 2 << words[i][words[i].length() - 1] << endl;
        }
        else
        {
            cout << words[i] << endl;
        }
    }

    return 0;
}

