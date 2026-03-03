
#include<iostream>
#include<cstring>
using namespace std;

class String{
    char *s;
    int size;
    public:
    String(const char* str==NULL);
    void print(){cout<<s<<endl;
    void ;
    }
}
String::String(const char* str){
    size=strlen(str);
    s=new char[size+1];
    strcpy(s,str);
}
String::String(const String& old_str){
    size=old_str.size;
    String 
}

int main(){
    String str1("Welcome to C++");
    String str2(str1);
    str1.print();
    str2.print();
    str2.change("C++ is interesting!");
    str1.print();
    str2.print();

    return 0;
}