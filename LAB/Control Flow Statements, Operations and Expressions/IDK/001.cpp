//Warehouse Inventory Management System

#include<iostream>
#include<map>
using namespace std;

int main(){
    std::map<string,int> stock;
    int choice;
    while(true){
        cout<<"\n1. Add Stock\n2. View Stock\n3. Delete Stock\n4. Update Stock\nEnter Your Choice:";
        cin>>choice;
        if(choice==1){
            int quantity;
            string stock_name;
            cout<<"\nEnter Name of stock to add:";
            cin>>stock_name;
            cout<<"\nEnter stock quantity to add:";
            cin>>quantity;
            stock[stock_name]=quantity;
        }
        else if(choice==2){
            string stock_name;
            cout<<"Enter stock name to view:";
            cin>>stock_name;
            cout<<"\nThe quantity of stock is :"<<stock[stock_name];
        }
        else if(choice==3){
            string temp;
            cout<<"Enter Name of stock to delete:";
            cin>>temp;
            cout<<"The stock to be deleted :"<<stock.erase(temp);
        }
        else if(choice==4){
            string temp;
            cout<<"Enter Name of stock to Update:";
            cin>>temp;
            cout<<"The stock to be Updated :"<<stock.erase(temp);
        }
        else if(choice==5) {
            cout<<"Bye...";
            return 0;
        }


    }
    
}
