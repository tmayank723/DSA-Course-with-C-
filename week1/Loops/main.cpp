#include <iostream>
using namespace std;

int main()
{
    // For Loop
    
    // for(int count = 1; count<=10; count = count + 1) {
    //     cout << "Babbar" << endl;
    // }

    // Counting from 1 to 10

    // for( int i=1; i<=10; i=i+1) {
    //     cout << i << endl;
    // }

    // Counting from 51 to 69

    // for(int i=51; i<=69; i = i + 1) {
    //     cout << i << endl;
    // }
    // for(int i=51; i < 70; i = i + 1) {
    //     cout << i << endl;
    // }

    // Use of Break Keyword  (when break keyword executed than loop will be finished)

    // for(int i=1; i<=10; i=i+1) {
    //     cout << i << endl;
    //     if(i==5) {
    //         break;
    //     }
    // }

    // Use of continue keyword (just for skip the current iteration)

    // for(int i=1; i<=5; i=i+1) {
    //     if(i == 4) {
    //         continue;
    //     }
    //     cout << i << " ";
    // }


    // While Loop

    int i = 1;
    while(i<=5) {
        cout << i << " ";
        i = i + 1;
    }


    return 0;
}