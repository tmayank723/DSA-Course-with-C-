#include <iostream>
using namespace std;

// SET Kth BITS
int setKthBit(int n, int k) {
    // find mask means left shift
    int mask = 1 << k;
    // Bitwise OR (|)
    int ans = n | mask;
    return ans;
}

int main() {
    int n , k;
    cout << "Enter the value of n : ";
    cin >> n;
    cout << "Enter the bits to be set : ";
    cin >> k;

    int ans = setKthBit(n, k);
    cout << ans << endl;

    return 0;
}