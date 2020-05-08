#include<iostream>
using namespace std;
struct student{
    int rollno;
    char sex;
}anil,shyam;
int main(){
    student murari,ajay={11,'m'};
    student *stptr;
    stptr=&shyam;
    shyam.rollno=222;
    shyam.sex='M';
    cout<<stptr->rollno<<endl;
    cout<<stptr->sex<<endl;
    return 0;
}