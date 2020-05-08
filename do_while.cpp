#include<iostream>
using namespace std;
int main(){
    char ch;
    do{
        cout <<"Shyam\n";
        cout <<"Enter x to exit or any other key to continue\n";
        cin >>ch;
    }
    while(ch!='x');
    return 0;
}