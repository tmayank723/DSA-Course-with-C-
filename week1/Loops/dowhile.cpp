#include <iostream>
using namespace std;

int main() {

    // For Loop
    // for (int i = 1; i <= 5; i = i + 1) {
    //     cout << i << endl;
    // }

    // Convert it into do-while loop
    // int i = 1;  // Initialisation
    // do {
    //     cout << i << endl;  // Logic
    //     i = i + 1;          // Updation
    // } while (i <= 5);        // Condition

    // Print 20 times Babbar with do-while loop
    // int count = 1;
    // do {
    //     cout << count << ": Babbar" << endl;
    //     count = count + 1;
    // } while(count <= 20);

    // Nested Loops
    // for(int i=1; i<=3; i=i+1) {
    //     for(int j=1; j<=3; j=j+1) {
    //         cout << i <<  j << " ";
    //     }
    //     cout << endl;
    // }

    // One more Example for Nested Loop
    for(int i=1; i<=2; i=i+1) {
        for(int j=1; j<=2; j=j+1) {
            cout << i*j << " ";
        }
    }
}