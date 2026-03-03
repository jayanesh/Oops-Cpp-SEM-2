#include<iostream>
using namespace std;

class Vehicle{
public:
    Vehicle(){
        cout<<"This is the vehicle base class!"<<endl;
    }
};

class FlyingVehicle: public Vehicle{
public:
    FlyingVehicle(){
        cout<<"This is the flying vehicle class!"<<endl;
    }
};

class Aeroplane: public FlyingVehicle{
public:
    Aeroplane(){
        cout<<"This is the Aeroplane class!"<<endl;
    }
};

int main(){
    Aeroplane a1;
}