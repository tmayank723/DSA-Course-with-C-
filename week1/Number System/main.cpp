#include <iostream>
#include <cmath>
using namespace std;

// Decimal to Binary
// First Method - Division Method
int convertDecimalToBinaryDivisionMethod(int n) {
    // Formula for reverse the bits ans = (digit * 10^n) + 10
    int binaryNumber = 0;
    int i = 0;
    while(n > 0) {
        int bits = n % 2;
        binaryNumber = bits * pow(10, i++) + binaryNumber;
        n = n / 2;
    }
    return binaryNumber;
}

// Second Method - Bitwise Method
int convertDecimalToBinaryBitwiseMethod(int n) {
    // Formula for reverse the bits ans = (digit * 10^n) + 10
    int binaryno = 0;
    int i = 0;
    while(n > 0) {
        int bits = (n & 1);
        binaryno = bits * pow(10, i++) + binaryno;
        n = n >> 1;
    }
    return binaryno;
}

// Binary to Decimal
int convertBinaryToDecimal(int n) {
    int decimal = 0;
    int i = 0;
    while(n) {
        int bit = n % 10;
        decimal = bit * pow(2, i++) + decimal;
        n = n / 10;
    }
    return decimal;
}


int main(){

    // int n;
    // cout << "Enter the Number : " << endl;
    // cin >> n;
    // int ans = convertDecimalToBinaryBitwiseMethod(n);
    // cout << ans << endl;

    int binaryNumber;
    cin >> binaryNumber;
    cout << convertBinaryToDecimal(binaryNumber) << endl;

    return 0;
}