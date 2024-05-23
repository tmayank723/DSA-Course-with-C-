#include<iostream>
using namespace std;


void checkEligibleForVote(int age) {
    if(age >= 18) {
        cout << "You'are eligible for Vote!";
    } else {
        cout << "You'are not eligible for Vote!";
    }
}


int main() {


    checkEligibleForVote(14);
    return 0;
}