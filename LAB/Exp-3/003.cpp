/*Design a dynamic blogging platform that generates unique content identifiers for blog
posts based on author's name and topic.*/
#include<iostream>
using namespace std;
int main(){
    string author_name,topic;
    cout<<"Enter author name: ";
    cin>>author_name;
    cout<<"Enter Topic: ";
    cin>>topic;
    string identifier=author_name+topic;
    cout<<"Your identifier is: "<<identifier;
}