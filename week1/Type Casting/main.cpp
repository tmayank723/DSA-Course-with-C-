#include<iostream>
using namespace std;

int main() {

    // IMPLICIT TYPE CASTING - (Compiler automatic Converts data type)
    
    // First Type
    // 1. From Int to Float
    // int num1 = 10;
    // float num2 = 5.5;
    // float result = num1 + num2;     // implicit conversion of num1 to from int to float automatically.
    // cout << result << endl;

    // 2. From char to int 
    // char ch = 'A';
    // int a = ch + 1;            // Implicit conversion of ch from char to int.
    // cout << a << endl;

    // 3. From int to char
    // int a = 97;
    // char ch = a;
    // cout << ch << endl;

    // 4. From char to int
    // char g = 'B';
    // int gg = g;
    // cout << gg << endl;


    // EXPLICIT TYPE CASTING - Second Type
    
    // 1. From double to int
    // double pi = 3.14159265;
    // int intPi = (int)pi;        // Explicitly conversion from double to int
    // cout << intPi << endl;

    // 2. From float to char
    // float fl = 65.35;
    // char ch = (char)fl;         // Explicitly conversion from float to char
    // cout << ch << endl;

    // 3. From int to float
    int a = 10;
    int b = 3.0;                // Implicit type conversion from to float to int 
    float c = a / ((float)b);     // Explicity type convesion from int to float
    cout << c << endl;

    return 0;
}