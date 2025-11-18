#include <iostream>
using namespace std;
int main()
{
    int arr[2][3];
    arr[0][0] = 3;
    arr[0][1] = 5;
    arr[0][2] = 1;
    arr[1][0] = 9;
    arr[1][1] = 6;
    arr[1][2] = 4;
    for (int i = 0; i < 2; i++) // i is for rows
    {
        for (int j = 0; j < 3; j++) // j is for column
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Transpose of a matrix....

#include <iostream>
using namespace std;
int main()
{
    int arr[2][3];
    arr[0][0] = 3;
    arr[0][1] = 5;
    arr[0][2] = 1;
    arr[1][0] = 9;
    arr[1][1] = 6;
    arr[1][2] = 4;
    for (int j = 0; j < 3; j++) // i is for rows
    {
        for (int i = 0; i < 2; i++) // j is for column
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}