#include<iostream>
using namespace std;
int display(int,int);
int main(){
    int result;
    result=display(20,30);
    cout<<result <<endl;
}
int display(int a,int b){
    return a+b;
}