#include<iostream>
using namespace std;

// NOTE :- Agar Loops AND If-else ke andar sirf one line of code hai to It's not mandatory to use curly Braces you can ignore it.

// FULL PYRAMID
void printFullPyramid(int n) {
    // Outer Loop for Rows
    for(int row = 0; row < n; row++) {
        // Inner loop for columns
        // First Inner Loop for Print Spaces
        for(int col = 0; col < n - row - 1; col++) 
            cout << " ";

        // Second Inner Loop print stars
        for(int col = 0; col < row + 1; col++) {
            cout << "* ";
        }
        cout << endl;
    }
}

// INVERTED FULL PYRAMID
void invertedFullPyramid(int n) {
    for(int row = 0; row < n; row++) {
        // First Inner loop for print SPACES
        for(int j = 0; j < row; j++) 
            cout << " ";

        // Second inner loop for print STARS
        for(int j = 0; j < n - row; j++) 
            cout << "* ";
        
        cout << endl;
    }
}

// DIAMOND PATTERN
void diamond(int n) {
    printFullPyramid(n);
    invertedFullPyramid(n);
}

// HOLLOW FULL PYRAMID
void hollowFullPyramid(int n) {
    // laveraging full pyramid code
    for(int row = 0; row < n; row++) {
        // I - for print SPACES
        for(int col = 0; col < n - row - 1; col++)
            cout << " ";
        
        // II - for print STARS
        for(int col = 0; col < row + 1; col++) 
            if(row == 0 /*|| row == n - 1*/ || col == 0 || col == row) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        cout << endl;
    }
}

// INVERTED HOLLOW PYRAMID
void invertedHollowPyramid(int n) {
    for(int row = 0; row < n; row++) {
        // For Print Spaces
        for(int col = 0; col < row; col++)
            cout << " ";
        
        // For print stars
        for(int col = 0; col < n - row; col++)
            if(/*row == 0 ||*/ row == n - 1 || col == 0 || col == (n -row) - 1)
                cout << "* ";
            else
                cout << "  ";

        cout << endl;
    }
}

// HOLLOW DIAMOND (KAJU KATLI😂)
void hollowDiamond(int n) {
    hollowFullPyramid(n);
    invertedHollowPyramid(n);
}

// MIX PYRAMID
void mixPyramid(int n) {
    // PART - I
    for(int i = 0; i < n; i++) {
        // I. STARS
        for(int j = 0; j < n - i; j++)
            cout << "*";

        // II. SPACES
        for(int j = 0; j < (2 * i) + 1; j++)
            cout << " ";

        // III. STARS
        for(int j = 0; j < n - i; j++)
            cout << "*";

        cout << endl;
    }
    // PART - II
    for(int i = 0; i < n; i++) {
        // I. STARS
        for(int j = 0; j < i + 1; j++)
            cout << "*";

        // II. SPACES
        for(int j = 0; j < (2 * (n - i)) - 1; j++)
            cout << " ";

        // III. STARS
        for(int j = 0; j < i + 1; j++)
            cout << "*";

        cout << endl;
    }
}

// FANCY NUMERICE PATTERN
void fancyOneTwoPattern(int n) {
    for(int i = 0; i < n; i++) {
        // First Method
        for(int j = 0; j < i + 1; j++) {
            if(i == 0 || i == j) {
                cout << (i + 1);
            } else {
                cout << (i + 1) << " * ";
            }
        }
        
        // Second Method
        // for(int j = 0; j < 2 * i + 1; j++) {
        //     if(j % 2 == 0)
        //         cout << (i + 1);
        //     else
        //         cout << " * ";
        // }
        cout << endl;
    }
}

// FULL FANCY NUMERIC PATTERNS
void fullFancyNumericPattern(int n) {
    fancyOneTwoPattern(n);
    for(int i = n - 1; i > 0; i--) {
        for(int j = 0; j < i; j++) {
            if(j == i - 1) {
                cout << i;
            } else {
                cout << i << " * ";
            }
        }
        cout << endl;
    }
}

// ABCBA Pattern
void abcbaPattern(int n) {
    for(int i = 0; i < n; i++) {
        char ch = 'A' - 1; // ASCII 64 Initialize
        for(int j = 0; j < i + 1; j++) {
            ch++;
            cout << ch;
        }
        while (ch > 'A') {
            ch--;
            cout << ch;
        }        
        cout << endl;
    }
}


int main () {
    int n;
    cout << "Enter the value of n ";
    cin >> n;
    // printFullPyramid(n);
    // invertedFullPyramid(n);
    // diamond(n);
    // hollowFullPyramid(n);
    // invertedHollowPyramid(n);
    // hollowDiamond(n);
    // mixPyramid(n);
    // fancyOneTwoPattern(n);
    // fullFancyNumericPattern(n);
    abcbaPattern(n);

    return 0;
}