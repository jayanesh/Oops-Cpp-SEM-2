/*Implement a C++ program checking leap year (int year), prime number (int num), and
Fibonacci sequence (int N terms, long long). Use bool flags, const int
SQRT_CHECK=1000. Optimize prime check (divisors to sqrt(num)), handle edge
cases (year=2000, num=1, N=0). Output results clearly.*/
#include<iostream>
#include<cmath>
#define SQRT_CHECK 1000;
using namespace std;
int fib(int n){
    if(n<=1) return n;
    else return fib(n-1)+fib(n-2);
}
int main(){
    int choice;
    cout<<"1. Leap Year\n2. Prime Number\n3. Fibonacci Sequence\nEnter your choice: ";
    cin>>choice;
    if(choice==1){
        int year;
        cout<<"Enter year to check: ";
        cin>>year;
        if(year%4==0&&year%100!=0||year%400==0) cout<<year<<" is a leap year!";
        else cout<<year<<" is not a leap year";
    }
    else if(choice==2){
        int flag=1,num;
        cout<<"Enter number to check: ";
        cin>>num;
        for(int i=2;i<sqrt(num);i++){
            if(num%i==0) flag=0;
        }  
        if(num==1) cout<<"Neither prime nor composite number!";
        else if(flag) cout<<num<<" is a prime number!";
        else cout<<num<<" is not a prime number!";
    }
    else if(choice==3){
        int N;
        cout<<"Enter till which term you need Fibonacci Sequence for: ";
        cin>>N;
        if(N<=0) cout<<"Invalid input!";
        else for(int i=0;i<N;i++) cout<<fib(i)<<" ";
    }
}