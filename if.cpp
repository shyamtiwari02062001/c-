#include<iostream>
using namespace std;
int main(){
    int age;
    cout <<"Enter your age\n";
    cin >>age;
    if(age<=17){
        cout <<"Not eligible to vote\n";
    }
    if(age>17){
        cout <<"Eligible to vote\n";
    }
    return 0;
}