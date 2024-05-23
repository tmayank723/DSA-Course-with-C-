#include<iostream>
using namespace std;

int calSimpleInterest(int amount , float rate, int time) {
    return (amount * rate * time ) / 100;
}


int main() {
    int ans = calSimpleInterest(10000, 2, 24);
    cout << ans << endl;
    return 0;
}