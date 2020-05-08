#include<iostream>
using namespace std;
int display(int x,int y,int z=30){
    cout<<"x =" <<x <<endl;
    cout<<"y =" <<y <<endl;
    cout<<"z =" <<z <<endl;
}
int main(){
    display(10,20);
    display(30,50);
}