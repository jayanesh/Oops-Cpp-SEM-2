#include<iostream>
#include<cstring>
#include<string>
using namespace std;

int main(){
    string str1="Hello World!";
    string str2="hello world!";
    cout<<"length() Function"<<endl;
    cout<<"The length of first string is: "<<str1.length()<<endl;
    cout<<"The length of second string is: "<<str2.length()<<endl;
    cout<<"swap() Function"<<endl;
    str1.swap(str2);
    cout<<"The swapped str1: "<<str1<<endl;
    cout<<"The swapped str2: "<<str2<<endl;
    cout<<"size() Function"<<endl;
    cout<<"The size of str1 is:"<<str1.size()<<endl;
    cout<<"The index of world in str2 is:"<<str2.find('w')<<endl;
    cout<<"pushback() Function"<<endl;
    str1.push_back('@');
    cout<<"The @ appended str1 is"<<str1<<endl;
    cout<<"popback() Function"<<endl;
    str1.pop_back();
    cout<<"The @ removed str1 is"<<str1<<endl;
    cout<<"clear() Function"<<endl;
    str1.clear();
    cout<<"clear() str1:"<<str1<<endl;
    cout<<"copy() Function"<<endl;
    string str="Hello";
    char strCopy[]="";
    cout<<"The copy of char array using copy() function:"<<str.copy(strCopy,5,0)<<endl;
    cout<<strCopy<<endl;
}
