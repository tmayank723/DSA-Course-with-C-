#include<iostream>
using namespace std;

void funct(int arr[], int n) {
    cout << "Array elements : " << endl;
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    
    // STATIC MEMORAY ALLOCATION OF AN ARRAY
    // int arr[5] = {10,20,30,40,50};

    // DYNAMIC MEMORY ALLOCATION OF AN ARRAY
    int n;
    cin >> n;

    int *arr = new int[n];  // EACH ELEMENT WOULD BE ZERO OR GARBAGE

    // TAKING N ELEMENTS INPUT AND INSERTING IN AN ARRAY
    for(int i = 0; i < n; i++) {
        int data;
        cin >> data;
        arr[i] = data;
    }

    // LET ME ADD TRY TO INSERT MORE ITEMS
    for(int i = 0; i < 10; i++) {
        arr[n + i] = 80;
    }
    funct(arr, 5);

    return 0;
}