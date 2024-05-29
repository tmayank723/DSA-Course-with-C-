#include<iostream>
using namespace std;

int main() {

    // SQUARE PATTERNS
    // Total row = 4 
    // Every row -> 4 star

    // row - outer loop
    // col - inner loop

    // Taking input from User
    // int side;
    // cout << "Enter the side of the Square ";
    // cin >> side;
    
    // Outer Loop => 4 rows
    // for(int row=0; row < side; row++) {
    //     //Inner Loop -> 4 star print
    //     // Har row kr andr kya krna hai vo inner loop bataega
    //     for(int col=0; col < side; col++) {
    //         // har single column me, 1 start rkha hai
    //         cout << "* ";
    //     }
    //     // 4 star print krane ke bad next line m ata hai
    //     cout << endl;
    // }


    // RACTANGLE PATTERN
    // Outer Loop for print Row
    // Take input of length & width
    // int length;
    // int width;
    // cout << "Enter the length of the Ractangle ";
    // cin >> length;
    // cout << "Enter the width of the Ractangle ";
    // cin >> width;

    // for(int r=0; r<length; r++) {
    //     // Inner Loop for print column
    //     for(int c=0; c<width; c++) {
    //         // har column m 1 star print krna h
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    
    // HOLLOW RACTANGLE
    // int length;
    // int width;
    // cout << "Enter length : " << endl;
    // cin >> length;
    // cout << "Enter Width : " << endl;
    // cin >> width;

    // // Outer Loop
    // for(int row = 0; row < length; row++) {
    //     // Inner Loop
    //     for(int col = 0; col < width; col++) {
    //         // First and Last row me all star
    //         if(row == 0 || row == length - 1) {
    //             cout << "* ";
    //         } else {
    //             if(col == 0 || col == width - 1) {
    //                 cout << "* ";
    //             } else {
    //                 cout << "  ";
    //             }
    //         }
    //     }
    //     cout << endl;
    // }


    // HOLLOW SQUARE
    // int n;
    // cout << "Enter length of side of Square " << endl;
    // cin >> n;

    // // Outer Loop for print the row
    // for(int row = 0; row < n; row++) {
    //     // Inner loop for column
    //     for(int col = 0; col < n; col++) {
    //         // PEHLE TARIKA
    //         // if(row == 0 || row == n - 1) {
    //         //     // for first & last row
    //         //     cout << "* ";   
    //         // } else {
    //         //     if(col == 0 || col == n - 1){
    //         //         // for first & last columns
    //         //         cout << "* ";
    //         //     } else {
    //         //         // for middle columns
    //         //         cout << "  "; 
    //         //     }
    //         // }

    //         // DOSRA TARIKA WITH DIAGONAL
    //         if(row == 0 || row == n - 1 || col == 0 || col == n - 1 || row == col) {
    //             // for first & last row and columns
    //             cout << "* ";
    //         } else {
    //             // for middle columns
    //             cout << "  ";
    //         }
    //     }
    //     // isko m bhul jata hu
    //     cout << endl;
    // }


    // HALF PYRAMID
    // int n;
    // cout << "Enter the value of n ";
    // cin >> n;

    // // Outer loop for row always same
    // for(int row=0; row<n; row++) {
    //     // Inner Loop for columns
    //     for(int col=0; col<row+1; col++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    //  INVERTED HALF PYRAMID
    // int n;
    // cout << "Enter the value of n ";
    // cin >> n;

    // // Outer loop for row
    // for(int r=0; r<n; r++) {
    //     // Inner Loop for Columns
    //     for(int c=0; c<n-r; c++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }


    // HOLLOW HALF PYRAMID
    // int n;
    // cout << "Enter the value of n ";
    // cin >> n;

    // // Outer loop for row
    // for(int r = 0; r < n; r++) {
    //     // Inner Loop for Columns
    //     for(int c = 0; c < r+1; c++) {
    //         // PEHLA TARIKA
    //         // int totalColumns = r + 1;
    //         // if(r == 0 || r == 1|| r == n-1) {
    //         //     cout << "* ";
    //         // } else {
    //         //     if(c == 0 || c == totalColumns - 1) {
    //         //         cout << "* ";
    //         //     } else {
    //         //         cout << "  ";
    //         //     }
    //         // }

    //         // SECOND TARIKA OPTIMIZED
    //         if(r == 0 || r == n - 1 || c == 0 || r == c) {
    //             cout << "* ";
    //         } else {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    // INVERTED HOLLOW HALF PYRAMID
    // int n;
    // cout << "Enter the value of n ";
    // cin >> n;

    // // outer loop for rows
    // for(int row=0; row<n; row++) {
    //     // inner loop for columns
    //     for(int col = 0; col < n-row; col++) {
    //         // First Tarika
    //         // int totalColumns = n - row;
    //         // if(row == 0 || row == n-1) {
    //         //     cout << "* ";
    //         // } else {
    //         //     if(col == 0 || col == totalColumns - 1) {
    //         //         cout << "* ";
    //         //     } else {
    //         //         cout << "  ";
    //         //     }
    //         // }

    //         // Second Tarika
    //         if(row == 0 || row == n - 1 || col == 0 || (row+col) == n - 1) {
    //             cout << "* ";
    //         } else {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }


    // NUMERIC HALF PYRAMID
    // int n;
    // cout << "Enter the value of n ";
    // cin >> n;

    // for(int row=0; row<n; row++) {
    //     for(int col=0; col<row+1; col++) {
    //         cout << (col+1) << " ";
    //     }
    //     cout << endl;
    // }

    
    // INVERTED NUMERIC HALF PYRAMID
    int n;
    cout << "Enter the value of n ";
    cin >> n;

    for(int row=0; row<n; row++) {
        for(int col=0; col<n-row; col++) {
            cout << (col+1) << " ";
        }
        cout << endl;
    }


    return 0;
}