#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v) {
    // SIZE OF THE VECTOR
    cout << "Vector Printing : " << endl;
    int size = v.size();
    for(int i = 0; i < size; i++) {
        // cout << v[i] << " ";
        cout << v.at(i) << " ";      // ESE BHI VECTOR KO KR SKTE HAI
    }
    cout << endl;
}

void print2(vector<int>v) {
    cout << "Vector Printing method 2 " << endl;
    // FOREACH LOOP KEHTE HAI ISKO!
    for(auto it: v) {
        cout << it << " ";
    }
    cout << endl;
}

int main() {

    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    print2(v);


    // vector<char> v;
    // v.push_back('a');
    // v.push_back('b');
    // v.push_back('c');

    // // cout << "First element : " << v[0] << endl;
    // cout << "First element : " << v.front() << endl;
    // // cout << "Last Element : " << v[v.size() - 1] << endl;
    // cout << "Last Element : " << v.back() << endl;


    // INITIALIZATIONS OF VECTOR
    // vector<int> arr;            // Default with no data , 0 size;
    // vector<int>arr2(5, -1);     // Init with n size with specific data
    // // arr2.push_back(50);
    // // print(arr2);

    // vector<int> arr3 = {10,20,30,40,50};
    // // arr3.pop_back();
    // // print(arr3);

    // vector<int> arr4{1,2,3,4,5,6};
    // // print(arr4);

    // // HOW TO COPY VECTOR
    // vector<int> arr5 = {10,20,30,50,60};
    // vector<int> arr6(arr5);
    // print(arr6);
    
    // IN VECTORS DON'T NEEDS TO TELLS THE SIZE OF THE ARRAY
    // JUST KEEP INSERTING , I WILL MANAGE THE ALLOCATIONS.
    // vector<int> v;

    // // TAKING INPUT FROM THE VECTOR
    // int n;
    // cin >> n;
    // for(int i = 0; i < n; i++) {
    //     int d;
    //     cin >> d;
    //     v.push_back(d);
    // }
    // print(v);

    // // LET ME TRY INSERT ADD MORE ITEMS IN AN ARRAY
    // // for(int i = 0; i < 10; i++) {
    // //     v.push_back(80);
    // // }

    // // I WANT TO CLEAR THE VECTOR
    // v.clear();

    // print(v);

    // INSERT
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    // v.push_back(4);
    // print(v);

    // // POP -> DELETE ELEMENT INSIDE AN ARRAY FROM END
    // v.pop_back();
    // print(v);   // output - 123
    
    // v.pop_back();
    // print(v);   // output - 12

    // PRINT CAPACITY AND SIZE OF AN ARRAY
    // while(1) {
    //     int d;
    //     cin >> d;
    //     v.push_back(d);
    //     cout << "Capacity = " << v.capacity() << " Size = " << v.size() << endl;
    // } 

    return 0;
}