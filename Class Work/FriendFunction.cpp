#include<iostream>
using namespace std;




class Cse_placements{
private:
    string name;
protected:
    string company;
public:
    Cse_placements(){
        this->name='Jayanesh';
        this->company='Jaynx';
    }
    friend void display(Cse_placements &obj);
};

int main(){
    Cse_placements n1;
    display(n1);
}