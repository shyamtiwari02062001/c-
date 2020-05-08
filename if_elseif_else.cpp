#include<iostream>
using namespace std;
int main(){
    int age;
    cout <<"Enter your age\n";
    cin >>age;
    if(age<=17){
        cout <<"TEEN\n";
    }
    else if(age<60){
        cout <<"ADULT\n";
    }
    else{
        cout <<"SENIOR CITIZEN\n";
    }
    return 0;
}