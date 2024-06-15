#include <iostream>
using namespace std;

int countOfSetBits(int n) {
    int count = 0;
    while(n > 0) {
        int bit = n % 2;
        if(bit == 1) 
            count++;
        n = n / 2;
    }
    return count;
}

int main() {
    int n; 
    cout << "Enter the value of n : ";
    cin >> n;
    
    int setBitCounts = countOfSetBits(n);
    cout << "Count of all Set Bits count : " << setBitCounts << endl;



    return 0;
} 