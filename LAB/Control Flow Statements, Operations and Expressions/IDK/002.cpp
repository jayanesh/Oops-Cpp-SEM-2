//Traffic Light Management System

#include<iostream>
using namespace std;

int main(){
    string light;
    cout<<"Enter Traffic Signal(Red/Yellow/Green):";
    cin>>light;
    if(light=="Red") cout<<"Stop!";
    else if(light=="Yellow") cout<<"Slow Down!";
    else if(light=="Green") cout<<"Go!";
    else cout<<"Invalid signal!";
}