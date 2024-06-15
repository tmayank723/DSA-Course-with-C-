#include<iostream>
using namespace std;

void printPrimeNumbers() {
    // Print Prime Numbers from 1 to 100
    for(int i=2; i<100; i++) {
        for(int j=2; j<i; j++) {
            if(i%j ==0) {
                break;
            } else if(i==j+1) {
                cout << i << " ";
            }
        }
    }
}

int main() {

    printPrimeNumbers();    
    return 0;
}