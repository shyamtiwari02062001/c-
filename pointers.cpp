#include<iostream>
using namespace std;
int main(){
    int age=10;
    bool human=true;
    int *ageptr;
    bool *humanptr;
    ageptr=&age;
    humanptr=&human;
    cout<<"Age --->" <<ageptr <<endl;
    cout<<"Human --->" <<ageptr <<endl;
    cout<<"Age --->" <<*ageptr <<endl;
    cout<<"Human --->" <<*humanptr <<endl;
    return 0;
}