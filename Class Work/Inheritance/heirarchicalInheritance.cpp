#include<iostream>
using namespace std;

class base{
public:
    int x=10,y=20;
};

class derived1: public base{
public:
    void Sum(){
        cout<<"The sum of x and y is: "<<x+y<<endl;
    }
};

class derived2: public base{
public:
    void Product(){
        cout<<"The product of x and y is: "<<x*y<<endl;
    }
};

int main(){
    derived1 d1;
    derived2 d2;
    d1.Sum();
    d2.Product();

}