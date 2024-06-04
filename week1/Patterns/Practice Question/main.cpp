#include <iostream>
using namespace std;

// NUMBER TRIANGULAR PATTERN
void numberTriangular(int n) {
    for (int row = 0; row < n; row++) {
        // for print spaces
        for (int col = 0; col < (n - row) - 1; col++)
            cout << " ";

        // for print stars
        for (int col = 0; col < row + 1; col++)
            cout << (row + 1) << " ";

        cout << endl;
    }
}

// NUMBER INCREASING PYRAMID
void numberIncreasingPyramid(int n) {
    for (int row = 0; row < n; row++) {
        // inner loop for columns
        for (int col = 0; col < row + 1; col++)
            cout << (col + 1) << " ";

        cout << endl;
    }
}

// NUMBER INCREASING REVERSE PYRAMID
void numberIncreasingReversePyramid(int n) {
  for(int row = 0; row < n; row++) {
    for(int col = 0; col < n - row; col++) {
      cout << (col + 1) <<  " ";
    }
    cout << endl;
  }
}

// NUMBER CHANGING PYRAMID
void numberChangingPyramid(int n) {
    int count = 1;
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < row + 1; col++) 
            cout << count++ << " ";
        cout << endl;
    }
}

// ZERO-ONE TRIANGLE PATTERN
void zeroOneTriangle(int n) {
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < row + 1; col++) {
            if(row == 0 || row == col || col) {
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}



int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    // numberTriangular(n);
    // numberIncreasingPyramid(n);
    // numberIncreasingReversePyramid(n);
    // numberChangingPyramid(n);
    zeroOneTriangle(n);

    return 0;
}