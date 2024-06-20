#include<iostream>
#include<algorithm>
using namespace std;

// REVERSE AN ARRAY
void reverseArray(int arr[], int size) {
    // Normal Tarika
    int left = 0;
    int right = size - 1;
    // while(left < right) {
    //     swap(arr[left], arr[right]);
    //     left++;
    //     right--;
    // }

    // Pro Coder ki trah likhne ka traika..
    while(left < right) 
        swap(arr[left++], arr[right--]);
        
    return;
}

int main() {

    // REVERSE AN ARRAY
    int arr[] = {10,20,30,40,50,60,70};
    // FIND THE SIZE OF AN ARRAY
    int size = sizeof(arr) / sizeof(arr[0]);

    // 1. FIRST CUSTOM METHOD USING TWO POINTER APPROACH
    // reverseArray(arr, size);

    // 2. USING STL , C++ Library (In-built)
    reverse(arr, arr + size);

    for(int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}