#include<iostream>
using namespace std;
bool check(int);
int main(){
    if(check(18))
    cout <<"You are adult\n";
    else
    cout <<"You are kid\n";

    return 0;
}
bool check(int age){
    if(age>=18)
    return true;
    else
    return false;
}