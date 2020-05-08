#include<iostream>
using namespace std;
int main(){
    int n;
    for(n=0;n<10;n++){        
        if(n==7){
            n++;
            continue;
        }
        cout <<n <<endl;
    }
}