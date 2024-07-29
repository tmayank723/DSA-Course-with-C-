#include <iostream>
using namespace std;

int main() {

    // DECLARATION OF 2D ARRAY
    // int arr[4][3];

    // INITIALISATION OF 2D ARRAY
    // int arr[3][3] = { 
    //     {10,20,100}, 
    //     {30,40,200}, 
    //     {50,60,300} 
    // };

    // int arr[3][2] = {10,20,30,40,50,60};

    // int arr[3][2] = {10,20};

    // cout << arr[2][1] << endl;

    // ROW-WISE TRAVERSING ARRAY
    // int rowSize = 3;
    // int colSize = 3;
    // for(int row = 0; row < rowSize; row++) {
    //     for(int col = 0; col < colSize; col++) {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    // COLUMN-WISE TRAVERSING ARRAY
    // for(int col = 0; col < colSize; col++) {
    //     for(int row = 0; row < rowSize; row++) {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    // SQUARE-MATRIX
    // for(int row = 0; row < rowSize; row++) {
    //     for(int col = 0; col < colSize; col++) {
    //         cout << arr[col][row] << " ";
    //     }
    //     cout << endl;
    // }

    // DIAGONALLY TRAVERSING ARRAY

    // With Time-Complexity O(n)
    // for(int i = 0; i < rowSize; i++) {
    //     cout << arr[i][i] << " ";
    // }

    // With Time-Complexity O(n*n)
    // for(int row = 0; row < rowSize; row++){ 
    //     for(int col = 0; col < colSize; col++) {
    //         if(row == col)
    //             cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    
    // TAKING ROW-WISE INPUT OF THE 2D ARRAY
    int arr[2][3];
    int rowSize = 2;
    int colSize = 3;
    for(int r = 0; r < rowSize; r++) {
        for(int c = 0; c < colSize; c++) {
            cout << "Enter the value of (" << r << "," << c << ") : ";
            cin >> arr[r][c];
        }
    }

    cout << "Printing.... 2D array..." << endl;
    
    // PRINTING AN ARRAY ROW-WISE
    for(int r = 0; r < rowSize; r++) {
        for(int c = 0; c < colSize; c++) {
            cout << arr[r][c] << " ";
        }
        cout << endl;
    }

    return 0;
}