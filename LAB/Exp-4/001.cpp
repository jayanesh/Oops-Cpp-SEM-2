/*1. Write a C++ program to create a library catalog system using classes and objects.
Implement member functions to display book information and manage the catalog.*/

#include<iostream>
using namespace std;

class Library{
    int Book_id;
    string Book_name;
    int price;
public:
    Library(){
        Book_id=0;
        Book_name=' ';
        price=0;
    }
    Library(int id, string name, int price){
        Book_id=id;
        Book_name=name;
        this->price=price;
    }
    void display(int Book_id, string Book_name, int price);
    void display();
};

void Library::display(){
    cout<<"Book_id: "<<Book_id<<endl<<"Book_name: "<<Book_name<<endl<<"Book_price: "<<price;
}

void Library::display(int Book_id, string Book_name, int price){
    cout<<"Book_id: "<<Book_id<<endl<<"Book_name: "<<Book_name<<endl<<"Book_price: "<<price;
}

int main(){
    int n;
    int id,price;
    string name;
    cout<<"Enter No. of books you want to store: ";
    cin>>n;
    Library Books[n];
    for(int i=0;i<n;i++){
        cout<<"Enter Book "<<i+1<<" details:"<<endl;
        cout<<"Enter Book id: ";
        cin>>id;
        cout<<"Enter Book name: ";
        cin>>name;
        cout<<"Enter Book price: ";
        cin>>price;
        Books[i]=Library(id,name,price);
    }
    for(int i=0;i<n;i++){
        Books[i].display();
    }
}