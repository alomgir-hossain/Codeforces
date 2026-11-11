/*
========================================
Problem: 50A - Domino Piling
Rating: 800
Topic: Mathematics, Greedy, Implementation

Approach:
1. Read the board dimensions M and N.
2. Calculate the total number of squares:
   area = M * N
3. Each domino covers exactly 2 squares.
4. Divide the total area by 2.
5. Integer division automatically ignores
   any remaining uncovered square.
6. Print the maximum number of dominoes.

Formula:
Maximum Dominoes = (M * N) / 2

Example:
Input:
3 3

Calculation:
Area = 3 * 3 = 9
Dominoes = 9 / 2 = 4

Output:
4

Time Complexity: O(1)
Space Complexity: O(1)

Key Learning:
1. Calculating the area of a rectangle.
2. Using multiplication and division.
3. Understanding integer division in C++.
4. Understanding how odd numbers are handled
   by integer division.
5. Using mathematical observations to solve
   programming problems.
6. Understanding basic greedy thinking.

========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int M, N;
    cin >> M >> N;

    int area = M * N;

    int dominoNumber = area / 2;

    cout << dominoNumber << endl;

    return 0;
}