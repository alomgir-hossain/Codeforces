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