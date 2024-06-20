#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    // Different Methods of Swapping

    // 1. In-built Method
    // int a = 5 , b = 6;
    // swap(a,b);
    // cout << "a = " << a << " b = " << b;

    // 2. Using Temp Variable
    // int a = 5, b = 6;
    // int temp = a;
    // a = b;
    // b = temp;
    // cout << "a = " << a << " b = " << b;

    // 3. Using Arithematic Method
    // int a = 5, b = 6;
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // cout << "a = " << a << " b = " << b;

    // 4. Bitwise XOR Method 
    int a = 5, b = 6;
    a = a ^ b;
    b = a ^ b;  // (b = a ^ b || b = b ^ a) both are equal
    a = a ^ b;
    cout << "a = " << a << " b = " << b;


    return 0;
}
