#include<iostream>
using namespace std;

class base{
public:
    float salary=10000;
};

class derived:public base{
public:
    float bonus=1000;
    void totalSalary(){
        cout<<"The Total Salary is "<<salary+bonus<<endl;
    }
};

int main(){
    derived obj;
    cout<<"The base salary of the employee is:" <<obj.salary<<endl;
    cout<<"The additional bonus of the employee is: "<<obj.bonus<<endl;
    obj.totalSalary();
}