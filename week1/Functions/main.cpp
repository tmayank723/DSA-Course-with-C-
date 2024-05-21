#include<iostream>
using namespace std;

// Function Define
// int sum(int a, int b) {
//     int totalSum = a + b;
//     return totalSum;
// }

int getMultiplication(int x, int y, int z) {
    int result = x * y * z;
    return result;
}

void printNameTenTimes() {
    for(int i=1; i<=10; i++) {
        cout << "Mayank" << endl;
    }
}

void printMultiples(int num) {
    for(int i=1; i<=10; i++) {
        cout << num * i << endl;
    }
}

int convertIntoCelcius(int far);

char convertIntoUpparCase(char ch);

int main() {

    // Function Calling

    // int ans = sum(5, 10);
    // cout << ans << endl;

    // int multiplicationAns = getMultiplication(5,4,3);
    // cout << multiplicationAns << endl;

    // printNameTenTimes();

    // int m = 5;
    // printMultiples(m);

    // int far = 32;
    // int ans = convertIntoCelcius(far);
    // cout << ans << endl;

    char answer = convertIntoUpparCase('k');
    cout << answer << endl;


    return 0;
}

char convertIntoUpparCase(char ch) {
    char ans = ch - 'a' + 'A';
    return ans;
}

int convertIntoCelcius(int far) {
    int celcius = (far - 32) * 5 / 9;
    return celcius;
}