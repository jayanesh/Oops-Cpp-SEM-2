/*Develop a secure access card generation system using string manipulation functions.
Generate a string consisting of four copies of the first two characters of the employee's
name.*/

#include<iostream>
using namespace std;

int main(){
    string name;
    cout<<"Enter Employee name: ";
    getline(cin,name);
    string access_card="",First_Two=name.substr(0,2);
    for(int i=0;i<4;i++){
        access_card+=First_Two;
    }
    cout<<"Your access code is:"<<access_card;
    return 0;
    
}