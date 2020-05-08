#include<iostream>
using namespace std;
int main(){
    int *pointer;
    pointer=new int;
    cout<<pointer<<endl;
    *pointer=24;
    cout<<*pointer<<endl;
    delete pointer;
    return 0;
}