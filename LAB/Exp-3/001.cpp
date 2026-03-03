/*Design a C++ program that generates personalized greeting strings based on user input.
The greeting system requires creating a string consisting of a user's chosen greeting
phrase replicated multiple times. If the chosen greeting is less than n characters, return
n copies of the entire phrase.*/

#include<iostream>
using namespace std;

int main(){
    string greeting; int n;
    cout<<"Enter greeting phrase to display:";
    getline(cin,greeting);
    cout<<"\nHow many times do you want to display the greeting? ";
    cin>>n;
    for(int i=0;i<n;i++){
         cout<<greeting+" ";
    }
    return 0;
}