/*Write a C++ program for I CSE section exam results. Use short for students (45), int for
subject marks, long for college code (202600123L), char for section ('A'), float/double for
average/percentage. Define const int MAX_MARKS=100, SUBJECTS=5. Read one student's
data, compute total/average/pass status (bool, 50% criterion), output formatted
with setprecision(2)*/
#include<iostream>

using namespace std;
int main(){
    short int students(45);
    int subject_marks,total=0;
    long int college_code(202600123L);
    char section('A');
    float average, percentage;
    const int MAX_MARKS=100, SUBJECTS=5;
    cout<<"Enter your exam details-"<<endl;
    cout<<"Enter your marks: \n";
    for(int i=1;i<=5;i++){
        cout<<"Enter subject "<<i<<" mark: ";
        cin>>subject_marks;
        total+=subject_marks;
    }
    average=total/SUBJECTS;
    percentage=average;
    cout<<"Your average marks is: "<<average<<endl;
    cout<<"Your total percentage is: "<<percentage<<"%"<<endl;
}