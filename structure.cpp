#include<iostream>
using namespace std;
struct student{
    int rollno;
    char sex;
}anil,shyam;
int main(){
    student murari,ajay={11,'m'};
    shyam.rollno=222;
    shyam.sex='M';
    cout<<shyam.rollno<<endl;
    cout<<shyam.sex<<endl;
    return 0;
}