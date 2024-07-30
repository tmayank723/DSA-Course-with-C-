#include <iostream>
#include<vector>
using namespace std;

bool search2DArray(int arr[][4], int rowSize, int colSize, int target) {
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    // iska mtlab target not found
    // iska mtlab entire array traverse ho chuka hai
    // iska mtlab return false
    return false;
}

bool search2DUsingVector(vector<vector<int>> arr, int target) {
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for(int i=0; i<rowSize; i++) {
        for(int j=0; j<colSize; j++) {
            if(arr[i][j] == target) {
                return true;
            }
        }
    }
    return false;
}

int main() {

    // SEARCHING USING 2D VECTOR
    vector<vector<int>> arr(4, vector<int>(2,0));
    int rowSize = 4;
    int colSize = 2;
    int target = 44;
    // Taking input from the vector
    for(int i = 0; i < rowSize; i++) {
        for(int j = 0; j < colSize; j++) {
            cout << "Enter the value of ...";
            cin >> arr[i][j];
        }
    }
    bool ans = search2DUsingVector(arr, target);
    cout << "Ans is : " << ans;

    // LINEAR SEARCH IN 2D ARRAY
    // int arr[3][4] = {
    //     {10,11,12,13},
    //     {21,22,23,24},
    //     {31,32,33,45}
    // };
    // int rowSize = 3;
    // int colSize = 4;
    // int target = 45;

    // bool ans = search2DArray(arr, rowSize, colSize, target);
    // cout << "Ans is : " << ans << endl;

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

    
    // TAKING INPUT OF THE 2D ARRAY
    // int arr[2][3];
    // int rowSize = 2;
    // int colSize = 3;
    // for(int r = 0; r < rowSize; r++) {
    //     for(int c = 0; c < colSize; c++) {
    //         cout << "Enter the value of (" << r << "," << c << ") : ";
    //         cin >> arr[r][c];
    //     }
    // }

    // TAKING COLUMN-WISE INPUT OF THE 2D ARRAY
    // int arr[3][2];
    // int rowSize = 3;
    // int colSize = 2;
    // for(int col = 0; col < colSize; col++) {
    //     for(int row = 0; row < rowSize; row++) {
    //         cout << "Enter the value for (" << row << ", " << col << ") : ";
    //         cin >> arr[row][col];
    //     }
    // }

    // cout << "Printing.... 2D array..." << endl;
    
    // PRINTING AN ARRAY ROW-WISE
    // for(int r = 0; r < rowSize; r++) {
    //     for(int c = 0; c < colSize; c++) {
    //         cout << arr[r][c] << " ";
    //     }
    //     cout << endl;
    // }


    // CREATION OF 2D VECTOR
    // vector<vector<int>> arr (4,vector<int>(3,0));
    // int rowSize = arr.size();
    // int colSize = arr[0].size();

    // PRINTING THE VECTOR
    // for(int i = 0 ; i < rowSize; i++) {
    //     for(int j = 0; j < colSize; j++) {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}