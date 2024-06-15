#include <iostream>
using namespace std;

void numericHollowPyramid(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            if(i == 0 || i == n - 1 || j == 0 || j == i) {
                cout << (j + 1) << " ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

// NUMERIC PALINDROME EQUILATERAL PYRAMID
void numericPalindromeEquiPyramid(int n) {
    for(int row = 0; row < n; row++) {
        for(int col = 0; col < n - row - 1; col++) 
            cout << "  ";
        for(int col = 0; col < row + 1; col++)
            cout << (col + 1) << " ";
        for(int col = row; col > 0; col--)
            cout << col << " ";
        cout << endl;
    }
}

// FANCY PATTERN ONE
void fancyPatternOne(int n) {
    for(int i = 0; i < n; i++) {
        int startNumIndex = 8 - i;
        int num = i + 1;
        int countNum = num;
        for(int j = 0; j < 17; j++) {
            if(j == startNumIndex && countNum > 0) {
                cout << num;
                startNumIndex += 2;
                countNum--;
            } else {
                cout << "*";
            }
        }
        cout << endl;
    }
}

// FANCY PATTERNS SECOND
void fancyPatternSecond(int n) {
    // Growing Phase
    int c = 1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
            cout << c;
            c++;
            if(j<i){
                cout << "*";
            }
        }
        cout << endl;
    }
    // Shrinking Phase
    // cout << "C:::"<<c<< endl;
    int start = c - n;
    for(int i = 0; i < n; i++) {
        int k = start;
        for(int j = 0; j <= n - i - 1; j++) {
            cout << k;
            k++;
            if(j<n-i-1) {
                cout << "*";
            }
        }
        start = start - (n - i - 1);
        cout << endl;
    }
}

// PASCAL TRIANGLE
void pascalTriangle(int n) {
    for(int row = 1; row <= n; row++) {
        int c = 1;
        for(int col = 1; col <= row; col++) {
            cout << c << " ";
            c = c * (row - col) / col;
        }
        cout << endl;
    }
}

// BUTTERFLY PATTERN
void butterFlyPattern(int n) {
    for(int i = 0; i < 2*n; i++) {
        int cond = i < n ? i : n + (n - i - 1);
        int spaceCount = i < n ? 2*(n-cond-1): i - cond - 1;
        for(int j = 0; j < 2*n; j++) {
            if(j<=cond) {
                cout << "* ";
            } else if(spaceCount > 0) {
                cout << "  ";
                spaceCount--;
            } else {
                cout << "* ";
            }
        }
        cout << endl;
    }

}

// CONVERT FROM KM TO MILES
float fromKmToMiles(float n) {
    return ( n * 0.62137);
}

// PRINT ALL DIGITS OF AN INTEGER
void printAllDigitsOfInteger(int n) {
    while(n){
        int unitDigit = n % 10;
        cout << unitDigit << endl;
        n /= 10;
    }
}

// CALCULATE AREA OF CIRCLE
float areaOfCircle(int r) {
    float area = 3.14 * r * r;
    return area;
}

// CHECK NUMBER IS EVEN OR ODD
bool isEven(int n) {
    return  (n & 1) ? false : true;
}

// FIND THE FACTORIAL OF THE NUMBER
int findFactorial(int n) {
    int answer = 1;
    while (n > 0) {
        answer *= n;
        n--;
    }
    return answer;
}

// CHECK NUMBER IS PRIME OR NOT
bool isPrime(int n) {
    for(int i = 2; i <  n; i++) {
        if(n % i == 0) 
            return false;
    }
    return true;
}

//PRINT ALL THE PRIME NUMBERS TO N
void printAllPrimeNumber(int n) {
    for(int i = 2; i <= n; i++) {
        bool checkPrime = isPrime(i);
        if(checkPrime)
            cout << i << " ";
    }
}

// REVERSE THE INTEGERS
int reverseInteger(int n) {
    int ans = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        ans = ans * 10 + lastDigit;
        n = n / 10;
    }
    return ans;    
}

int main () {

    float n;
    cout << "Enter the value of n : ";
    cin >> n;
    // numericHollowPyramid(n);

    // numericPalindromeEquiPyramid(n);

    // fancyPatternOne(n);

    // fancyPatternSecond(n);

    // pascalTriangle(n);

    // butterFlyPattern(n);

    // float miles = fromKmToMiles(n);
    // cout << miles << endl;

    // printAllDigitsOfInteger(n);
    
    // float area = areaOfCircle(n);
    // cout << "Area Of Circle = " << area;

    // bool checkEven = isEven(n);
    // checkEven ? cout << "Number is Even" : cout << "Number is Odd" << endl;

    // int factorial = findFactorial(n);
    // cout << "factorial of " << n << " is " << factorial << endl;

    // bool ans = isPrime(n);
    // ans ? cout << "Given Number " << n << " is Prime." << endl : cout << "Not Prime" << endl;

    //printAllPrimeNumber(n);

    int ans = reverseInteger(n);
    cout << "Reverse Number is : " << ans;

    return 0;
}