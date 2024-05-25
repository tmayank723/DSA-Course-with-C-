#include <iostream>
#include <cmath>
using namespace std;

// Convert From Decimal to Binary
// First Method - Devision Method
int convertDecimalToBinaryDevisionMethod(int n) {
    int binaryNum = 0;
    int i = 0;
    while(n>0) {
        int bit = n % 2;
        binaryNum = bit * round(pow(10, i++)) + binaryNum;
        n = n / 2;
    }
    return binaryNum;
}

// Second Method - Bitwise Method
int convertDecimalToBinaryBitwiseMethod(int n) {
    int binaryNum = 0;
    int i = 0;
    while(n>0) {
        int bit = n & 1;
        binaryNum = bit * round(pow(10, i++)) + binaryNum;
        n = n >> 1;
    }
    return binaryNum;
}

// Convert from Binary to Decimal
int convertFromBinaryToDecimal(int n) {
    int i = 0;
    int decimal = 0;
    while(n) {
        int placeValue = n % 10;
        decimal = placeValue * round(pow(2, i++)) + decimal;
        n /= 10;
    }
    return decimal;
}

int main() {
    int n;
    cout << "Enter the value of n : " << endl;
    cin >> n;
    // int binary = convertDecimalToBinaryDevisionMethod(n);
    // cout << binary << endl;

    cout << convertFromBinaryToDecimal(n) << endl;

    return 0;
}