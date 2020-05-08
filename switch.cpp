#include<iostream>
using namespace std;
int main(){
    char ch;
    cout <<"Enter your grade\n";
    cin>>ch;
    switch(ch){
        case 'A':{
            cout <<"Excellent\n";
            break;
        }
        case 'B':{
            cout <<"Good\n";
            break;
        }

        case 'C':{
            cout <<"Not bad\n";
            break;
        }
        default:{
            cout <<"Grade unknown\n";
            break;
        }
    }
}