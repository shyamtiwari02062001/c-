#include<iostream>
using namespace std;
int main(){
    int date;
    cout <<"Enter date\n";
    cin >>date;
    if(date>0){
        if(date<32){
            cout <<"Valid date\n";
        }
        else{
            cout <<"Invalid date\n";
        }
    }
   
    return 0;
}