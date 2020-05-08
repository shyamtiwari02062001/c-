#include<iostream>
using namespace std;
union emp{
    float sal;
    int id;
}shyam;
int main(){
    shyam.id=2;
    shyam.sal=20000;
    cout<<shyam.id<<endl;
    cout<<shyam.sal<<endl;
    cout<<shyam.id<<endl;
}