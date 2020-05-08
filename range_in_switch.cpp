#include<iostream>
using namespace std;
int main(){
    int marks;
    cout <<"Enter your marks\n";
    cin>>marks;
    switch(marks){
        case 75 ... 100:{
            cout <<"Excellent\n";
            break;
        }
        case 50 ... 74:{
            cout <<"Good\n";
            break;
        }

        case 35 ... 49:{
            cout <<"Not bad\n";
            break;
        }
        default:{
            cout <<"Fail\n";
            break;
        }
    }
}