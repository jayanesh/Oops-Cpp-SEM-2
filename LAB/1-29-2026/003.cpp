/*Write a C++ program computing simple/compound interest. Use double for
principal/rate/time, int for years. Define const double SIMPLE_RATE=0.07,
COMPOUND_RATE=0.08. Read inputs, calculate both interests using formulas (pow for
compound), display comparison table with fixed output.*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double principal, rate, time;
    int years;
    const double SIMPLE_RATE = 0.07;
    const double COMPOUND_RATE = 0.08;
    cout << "Enter principal amount: "<<endl;
    cin >> principal;
    cout << "Enter time in years: "<<endl;
    cin >> years;
    double simple_interest = principal * SIMPLE_RATE * years;
    double compound_interest = principal * (pow((1 + COMPOUND_RATE), years) - 1);
    cout << "Year\tSimple Interest\tCompound Interest" << endl;
    for(int i = 1; i <= years; i++){
        double si = principal * SIMPLE_RATE * i;
        double ci = principal * (pow((1 + COMPOUND_RATE), i) - 1);
        cout << i << "\t" << fixed << si << "\t\t" << fixed << ci << endl;
    }
    return 0;
}