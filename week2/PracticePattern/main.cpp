#include <iostream>
using namespace std;

void numericHollowPyramid(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            if(i == 0 || i == n - 1 || j == 0 || j == i) {
                cout << (j + 1) << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// NUMERIC PALINDROME EQUILATERAL PYRAMID
void numericPalindromeEquiPyramid(int n) {
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n - row - 1; col++) 
            cout << "  ";
        for(int col = 0; col < row + 1; col++)
            cout << (col + 1) << " ";
        for(int col = row; col > 0; col--)
            cout << col << " ";
        cout << endl;
    }
}

// FANCY PATTERN ONE
void fancyPatternOne(int n) {
    for(int i = 0; i < n; i++) {
        int startNumIndex = 8 - i;
        int num = i + 1;
        int countNum = num;
        for(int j = 0; j < 17; j++) {
            if(j == startNumIndex && countNum > 0) {
                cout << num;
                startNumIndex += 2;
                countNum--;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

// FANCY PATTERNS SECOND
void fancyPatternSecond(int n) {
    // Growing Phase
    int c = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << c;
            c++;
            if(j<i){
                cout << "*";
            }
        }
        cout << endl;
    }
    // Shrinking Phase
    // cout << "C:::"<<c<< endl;
    int start = c - n;
    for(int i = 0; i < n; i++) {
        int k = start;
        for(int j = 0; j <= n - i - 1; j++) {
            cout << k;
            k++;
            if(j<n-i-1) {
                cout << "*";
            }
        }
        start = start - (n - i - 1);
        cout << endl;
    }
}


int main () {

    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    // numericHollowPyramid(n);
    // numericPalindromeEquiPyramid(n);
    // fancyPatternOne(n);
    // fancyPatternSecond(n);


    return 0;
}