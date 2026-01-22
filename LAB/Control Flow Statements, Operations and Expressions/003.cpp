//Guessing Game

#include<iostream>

using namespace std;

int main(){
    int n=21;
    int guess;
    int attempts=0;
    while(true){
        ++attempts;
        cout<<"Take a guess from 1-100:";
        cin>>guess;
        if(guess>n) cout<<"\nTry lower!";
        else if(guess<n) cout<<"\nTry higher!";
        else if(guess==n){
            cout<<"\nCongratulations! You guessed it right! Thank You for Playing!";
            cout<<"\nYou guessed it in "<<attempts<<" attempt(s).";
            return 0;
        }
        else cout<<"Input Error!";
    }
}