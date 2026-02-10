#include<iostream>
using namespace std;

class Room{
    private:
    double length;
    double breadth;
    double height;
    public:
    void Values(double length, double breadth, double height){
        this->length=length;
        this->breadth=breadth;
        this->height=height;
    }
    double roomArea(){
        return length * breadth;
    }
    double roomVolume(){
        return length * breadth * height;
    }
};

int main(){
    Room r1;
    double length, breadth, height;
    cout<<"Enter room length:";
    cin>>length;
    cout<<"Enter room breadth:";
    cin>>breadth;
    cout<<"Enter room height:";
    cin>>height;
    r1.Values(length, breadth, height);
    cout<<"The Area of the room is:";
    cout<<r1.roomArea()<<endl;
    cout<<"The Volume of the room is:";
    cout<<r1.roomVolume()<<endl;

}