#include<iostream>
using namespace std;

int main() {

    // First Example if-else block
    // int budget;
    // cout << "Enter the value of the Budget : " << endl;
    // cin >> budget;
    // if(budget > 2000000){
    //     cout << "You can buy the Scorpio" << endl;
    // }else{
    //     cout << "You cannot buy the Scorpio" << endl;
    // }

    // Second Example with if-else block
    // int age = 19;
    // if(age > 18) {
    //     cout << "You are eligible for Vote!" << endl;
    // }else {
    //     cout << "You are not eligible for Vote!" << endl;
    // }

    // Third Example with if-else-if block
    // int  marks = 55;
    // if(marks > 90) {
    //     cout << "A" << endl;
    // } else if(marks > 80){
    //     cout << "B" << endl;
    // } else if(marks > 70){
    //     cout << "C" << endl;
    // } else if (marks > 60) {
    //     cout << "D" << endl;
    // } else {
    //     cout << "Failed!" << endl;
    // }

    // Nested if
    int height;
    cout << "Enter the height in feet : " << endl;
    cin >> height;

    int weight;
    cout << "Enter your weight in kg : " << endl;
    cin >> weight;

    if(height > 5) {
        if(weight > 70) {
            cout << "You got good BMI " << endl;
        } else {
            cout << "Bhai tujse na ho payega!" << endl;
        }
    } else {
        cout << "Complain dila du ? " << endl;
    }

    return 0;
}