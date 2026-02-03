/*Develop a C++ program converting temperature between Celsius/Fahrenheit/Kelvin.
Use double for temp, char for unit choice. Define const double C_TO_F=9.0/5.0+32,
C_TO_K=273.15. Read input, apply formulas with type casting, output all three scales
formatted to 2 decimals.*/


#include <iostream>
using namespace std;
int main()
{
    double temperature ;
    char unit;
    cout<<"Enter temperature : ";
    cin>>temperature;
    cout <<  "Enter unit (C/F/K): ";
    cin>>unit;
    switch (unit)
    {
        case 'C':
        case 'c':
            cout << temperature << " Celsius is " << (temperature * 9/5) + 32 << " Fahrenheit." << endl;
            break;
        case 'F':
        case 'f':
            cout << temperature << " Fahrenheit is " << (temperature - 32) * 5/9 << " Celsius." << endl;
            break;
        case 'K':
        case 'k':
            cout<< temperature << " Kelvin is " << temperature - 273.15 << " Celsius." << endl;
            break;
        default:
            cout << "Invalid unit entered. Please enter 'C' for Celsius or 'F' for Fahrenheit." << endl;
            break;
        
    }
    return 0;
}