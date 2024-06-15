#include <iostream>
using namespace std;

// NUMBER CREATED BY DIGITS
int numberCreatedByDigits(int n) {
    int num = 0;
    for(int i = 0; i < n; i++) {
        cout << "Enter the digit : ";
        int digit;
        cin >> digit;
        num = num * 10 + digit;
    }
    return num;
}

int main() {

    int numberOfDigits;
    cout << "Enter the number of Digits : ";
    cin >> numberOfDigits;
    int ans = numberCreatedByDigits(numberOfDigits);
    cout << "Final Number is : " << ans << endl;
    
    return 0;
}