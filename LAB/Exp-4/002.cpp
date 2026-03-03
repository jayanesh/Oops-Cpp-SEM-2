/*Develop a C++ program to simulate an online shopping cart using classes and objects.
Implement member functions to add products, calculate total cost, and display cart
items.*/

#include<iostream>
using namespace std;

class Cart{
    int product_id;
    int price, quantity;
public:
    void addProduct(){
        cout<<"Enter product Id: ";
        cin>>product_id;
        cout<<"Enter price: ";
        cin>>price;
        cout<<"Enter quantity: ";
        cin>>quantity;
    }
    void displayTotal(){
        cout<<"Total of "<<product_id<<" is: "<<price*quantity;
    }

};

int main(){
    Cart p1;
    p1.addProduct();
    p1.displayTotal();
}