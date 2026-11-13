//todo #include <cstdlib> ---- include this to use abs for calculating the distance;

/*
========================================
Problem: 263A - Beautiful Matrix
Rating: 800
Topic: 2D Arrays, Matrix, Implementation

Approach:
Read the 5x5 matrix.
Find the position of the number 1.
Move the number 1 toward the center.
Count each row and column movement.
Print the total number of movements.

Time Complexity: O(1)
Space Complexity: O(1)

Key Learning:
1. Working with 2D arrays.
2. Understanding zero-based indexing.
3. Using nested loops to search a matrix.
4. Using while loops for repeated movements.
5. Updating row and column positions.
6. Calculating the minimum movements to the center.
========================================
*/

#include <iostream>
using namespace std;

int main()
{
    int matrix[5][5];

    int count = 0;

    int row = 2;
    int column = 2;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (matrix[i][j] == 1)
            {
                while (i != row)
                {
                    if (i < row)
                    {
                        int temp = matrix[i][j];
                        matrix[i][j] = matrix[i + 1][j];
                        matrix[i + 1][j] = temp;
                        count = count + 1;
                        i = i + 1;
                    }
                    if (i > row)
                    {
                        int temp = matrix[i][j];
                        matrix[i][j] = matrix[i - 1][j];
                        matrix[i - 1][j] = temp;
                        count = count + 1;
                        i = i - 1;
                    }
                }
                while (j != column)
                {
                    if (j < column)
                    {
                        int temp = matrix[i][j];
                        matrix[i][j] = matrix[i][j + 1];
                        matrix[i][j + 1] = temp;
                        count = count + 1;
                        j = j + 1;
                    }
                    if (j > column)
                    {
                        int temp = matrix[i][j];
                        matrix[i][j] = matrix[i][j - 1];
                        matrix[i][j - 1] = temp;
                        count = count + 1;
                        j = j - 1;
                    }
                }
            }
        }
    }

    cout << count << endl;

    return 0;
}

// todo: better approach by chatgpt

/*
========================================
Problem: 263A - Beautiful Matrix
Rating: 800
Topic: 2D Arrays, Matrix, Implementation

Approach:
Read the 5x5 matrix.
Find the position of the number 1.
Calculate the row distance from the center.
Calculate the column distance from the center.
Add both distances to get the minimum movements.
Print the final answer.

Time Complexity: O(1)
Space Complexity: O(1)

Key Learning:
1. Working with 2D arrays.
2. Using nested loops to search a matrix.
3. Understanding zero-based indexing.
4. Finding an element inside a matrix.
5. Using abs() to calculate absolute distance.
6. Understanding Manhattan Distance.
========================================
*/

// #include <iostream>
// #include <cstdlib>
// using namespace std;

// int main()
// {
//     int matrix[5][5];

//     int answer = 0;

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             cin >> matrix[i][j];

//             if (matrix[i][j] == 1)
//             {
//                 int rowMoves = abs(i - 2);
//                 int columnMoves = abs(j - 2);

//                 answer = rowMoves + columnMoves;
//             }
//         }
//     }

//     cout << answer << endl;

//     return 0;
// }
