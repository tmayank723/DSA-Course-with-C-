#include <iostream>
#include <limits.h>
using namespace std;

// Function receives an array
void print(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}

void solve1(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        arr[i] = arr[i] * 10;

    }
}

// LINEAR SEARCH
bool findTarget(int arr[], int size, int target) {
    // TRAVERSING OF AN ARRAY
    // for(int i = 0; i < size; i++) {
    //     if(arr[i] == target) {
    //         return true;
    //     }
    // }
    // // agar aap yaha pahuch gye toh
    // // iska mtlb poora loop chal chuka hai
    // // iska mtlb poore loop m target nhi mile
    // // element not found;
    // // iska mtlb return false
    
    // REVERSE TRAVERSING OF AN ARRAY
    for(int i = size - 1; i >= 0; i--) {
        if(arr[i] == target) {
            return true;
        }
    }
    return false;
}

// FIND MAXIMUM NUMBER FROM AN ARRAY
int findMaxNumber(int arr[], int size) {
    // FOR USING INT_MIN ADD (limits.h) HEADER FILE
    int maxNum = INT_MIN;
    for(int i = 0; i < size; i++) {
        // if(arr[i] > max) {
        //     maxNum = arr[i];
        // }

        // In-built method
        maxNum = max(arr[i], maxNum);
    }
    return maxNum;
}

// COUNT NUMBER OF ZEROES & ONCE
void countZerosAndOnce(int arr[], int size) {
    int zeroCount = 0;
    int onceCount = 0;
    for(int i = 0; i < size; i++) {
        // ZEROES COUNT
        if(arr[i] == 0) 
            zeroCount++;
        
        // ONCE COUNT
        if(arr[i] == 1)
            onceCount++;
    }
    cout << " Zeroes Counts = " << zeroCount << endl;
    cout << " Once Counts = " << onceCount << endl;
}

// PRINT EXTREME PRINTING WITH TWO POINTER TECHNIQUE
void extremePrinting(int arr[], int n) {
    int left = 0;
    int right = n - 1;
    while(left <= right) {
        if(left == right) {
            cout << arr[left] << " ";
            left++;
        } else {
            cout << arr[left] << " ";
            left++;
            cout << arr[right] << " ";
            right--;
        }
    }
}

int main() {
    // EXTREME PRINTING WITH TWO POINTER TECHNIQUE
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    extremePrinting(arr, size);

    // TAKING INPUT OF ARRAY, SIZE & TARGET
    // int arr[100];
    // int size;
    // // int target;
    // cout << "Enter the number of elements : ";
    // cin >> size;
    // for(int i = 0; i < size; i++) {
    //     cout << "Enter the input value for index " << i << endl;
    //     cin >> arr[i];
    // }
    // cout << "Enter the value of target : ";
    // cin >> target;


    // COUNT ZEROES & ONCE
    // countZerosAndOnce(arr, size);

    // FIND MAXIMUM NUMBER
    // int maxNum = findMaxNumber(arr, size);
    // cout << "Maximum number of an array is " << maxNum << endl;

    // LINEAR SEARCH EXAMPLE
    // bool ans = findTarget(arr, size, target);
    // cout << ans << endl;

    // Array with Functions
    // int arr[] = {10,20,30,40,50};
    // int size = 5;
    // solve1(arr, size);
    // print(arr, size);

    // Creation
    // int arr[10];

    // // throwing an error
    // // int brr[];

    // int crr[] = {1,3,4,45};
    // int drr[4] = {0};
    // // cout << drr[0] << endl; 
    // cout << crr[4] << endl; 

    // Fill Method
    // int arr[4];
    // fill(arr, arr + 4, 101);
    // cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << endl;

    // Taking input from an Array
    // int arr[5];
    // for(int i = 0; i < 5; i++) {
    //     cout << "Enter the value of box index: " << i << endl;
    //     cin >> arr[i];
    // }
    // // Printing element of an Array
    // for(int i = 0; i < 5; i++) {
    //     cout << arr[i] << " ";
    // }


    return 0;
}