#include<iostream>
using namespace std;

class base1{
public:
    float salary=10000;
};

class base2{
public:
    float bonus=1000;
};

class derived: public base1, public base2{
public:
    void totalSalary(){
        cout<<"The total salary of employee is: "<<salary+bonus<<endl;
    }
};

int main(){
    derived d1;
    cout<<"The base salary of employee is: "<<d1.salary<<endl;
    cout<<"The additional bonus of employee is: "<<d1.bonus<<endl;
    d1.totalSalary();
}