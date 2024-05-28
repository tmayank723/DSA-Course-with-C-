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

    //         // DOSRA TARIKA OPTIMIZED
    //         if(row == 0 || row == n - 1 || col == 0 || col == n - 1) {
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

    return 0;
}