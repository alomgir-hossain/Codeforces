#include <iostream>
using namespace std;

int main() {
    int w;
    cin >> w;

    if (w > 2 && w % 2 == 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}