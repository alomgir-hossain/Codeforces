// #include <iostream>
// using namespace std;

// int main()
// {
//     int k2, k3, k5, k6;
//     cin >> k2 >> k3 >> k5 >> k6;

//     int smallest;

//     if (k2 <= k5 && k2 <= k6)
//     {
//         smallest = k2;
//     }
//     else if (k5 <= k2 && k5 <= k6)
//     {
//         smallest = k5;
//     }
//     else
//     {
//         smallest = k6;
//     }

//     int sum = (smallest * 256);

//     if (k2 > smallest)
//     {
//         sum = (k2 - smallest) * 32;
//     }

//     cout << sum << endl;
// }

#include <iostream>
using namespace std;

int main()
{
    int k2, k3, k5, k6;
    cin >> k2 >> k3 >> k5 >> k6;

    int sum = 0;

    while (k2 > 0)
    {
        if (k2 > 0 && k5 > 0 && k6 > 0)
        {
            sum = sum + 256;
            k2 = k2 - 1;
            k5 = k5 - 1;
            k6 = k6 - 1;
        }
        else if (k2 > 0 && k3 > 0)
        {
            sum = sum + 32;
            k2 = k2 - 1;
            k3 = k3 - 1;
        } else {
            k2 = k2 - 1;
        }
    }

    cout << sum << endl;

    return 0;
}