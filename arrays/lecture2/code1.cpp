#include <iostream>
#include <climits>
using namespace std;

// FIND UNIQUE NUMBER
int findUniqueNumber(int arr[], int size) {
    int ans = 0;

    // to find the final answer , we need to XOR all the numbers in an array.
    for(int i = 0; i < size; i++)
        ans = ans ^ arr[i];

    return ans;
}

// SORT ZEROES AND ONES
void sortZeroOnes(int arr[], int n) {
    int zeroCount = 0;
    // COUNTING PROCESS
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0)
            zeroCount++;
    }

    // INSERTION PROCESS
    // USING FILL METHOD
    fill(arr, arr + zeroCount,0);
    fill(arr+zeroCount, arr+n,1);

    // USING LOOP
    int i = 0;
    for(; i < zeroCount; i++)
        arr[i] = 0;

    for(; i < n; i++)
        arr[i] = 1;
}

// PRINT ALL PAIRS
void printAllPairs(int arr[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
}

// CHECK TWO SUM PAIR EXISTS OR NOT
bool checkTwoSum(int arr[], int n, int target) {
    // CHECK ALL THE PAIRS
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] + arr[j] == target) {
            // FOUND A PAIR THAT'S SUM EQUAL TO THE TARGET
                return true;
            }
        }
    }
    // Agar app yaha tk pahuch gye 
    // iska matlab hai ki koi bhi pair target ke equal nhi mile
    // iska matlab return false kr do;
    return false;
}

// RETURN PAIR OF TWO SUM USING PAIR RETURN TYPE
pair<int, int> twoSum(int arr[], int n, int target) {
    // ASSUMING (-1,-1) AS NO ANSWER FOUND
    pair<int, int> ans = make_pair(-1,-1);
    // CHECK ALL PAIRS
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                // FOUND A PAIR THAT'S SUM EQUAL TO THE TARGET
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }
    // Agar app yaha tk pahuch gye 
    // iska matlab hai ki koi bhi pair target ke equal nhi mile
    // iska matlab return false kr do;
    return ans;
}

// RETURN PAIR OF TWO SUM USING ARRAY
void twoSumUsingArray(int arr[], int n, int target, int ans[]) {
    // CHECK ALL PAIRS
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                // FOUND A PAIR THAT'S SUM EQUAL TO THE TARGET
                ans[0] = arr[i];
                ans[1] = arr[j];
                return;
            }
        }
    }
    // Agar app yaha tk pahuch gye 
    // iska matlab hai ki koi bhi pair target ke equal nhi mile
    // iska matlab return false kr do;
    return;
}

// RETURN ALL PAIR OF TWO SUM
void twoSumPrintAllPairs(int arr[], int n, int target) {
    // CHECK ALL PAIRS
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                // FOUND A PAIR THAT'S SUM EQUAL TO THE TARGET
                cout << arr[i] << ", " << arr[j] << endl;
            }
        }
    }
    // Agar app yaha tk pahuch gye 
    // iska matlab hai ki koi bhi pair target ke equal nhi mile
    // iska matlab return false kr do;
    return;
}

int main() {

    int arr[] = {10,20,30,40};
    int size = 4;
    int target = 60;
    
    // RETURN ALL PAIR OF TWO SUM
    twoSumPrintAllPairs(arr, size, target);

    // RETURN PAIR OF TWO SUM USING ARRAY
    // int ans[] = {INT_MIN, INT_MAX};
    // twoSumUsingArray(arr, size, target, ans);
    // cout << ans[0] << ", " << ans[1] << endl;

    // RETURN PAIR OF TWO SUM USING PAIR RETURN TYPE
    // pair<int, int> ans = twoSum(arr, size, 60);
    // if(ans.first == -1 && ans.second == -1) {
    //     cout << "Pair not found..!!" << endl;
    // } else {
    //     cout << "Pair found : " << ans.first << " " << ans.second << endl;
    // }

    // CHECK TWO SUM PAIR EXISTS OR NOT
    // bool ans =  checkTwoSum(arr, size, 600);
    // if(ans) {
    //     cout << "Pair Found..!!" << endl;
    // } else {
    //     cout << "Pair Not found..!!" << endl;
    // }

    // PRINT ALL PAIRS
    // printAllPairs(arr, size);

    // SORT ZEROES AND ONES
    // int arr[] = {0,1,0,0,0,1,1,1};
    // int size = 8;

    // sortZeroOnes(arr, size);
    // // PRINTING AN ARRAY
    // for(int i = 0; i < size; i++)
    //     cout << arr[i] << " ";

    // FIND UNIQUE NUMBER
    // int ans = findUniqueNumber(arr, size);
    // cout << "Unique Number is : " << ans;

    return 0;
}