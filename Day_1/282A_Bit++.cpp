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