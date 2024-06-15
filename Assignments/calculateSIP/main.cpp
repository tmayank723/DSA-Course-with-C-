#include<iostream>
#include<cmath>
using namespace std;

int calculateSIP(double monthlyInvestment, double annualRate, int years) {
    double monthlyRate = annualRate / 12 / 100;
    int totalMonths = years * 12;
    double returnedAmount = monthlyInvestment * (pow(1 + monthlyRate, totalMonths) - 1) / monthlyRate * (1 + monthlyRate);
    return returnedAmount;
}   

int main() {

    double ans = calculateSIP(500, 12, 5);
    cout << ans << endl;

    return 0;
}


