#include<iostream>
using namespace std;
void display(const int num[],int limit);
int main(){
    int number[]={22,11,44,55,66};
    display(number,5);
    return 0;
}
void display(const int num[],int limit){
    for(int counter =0;counter<limit;counter++){
        cout <<num[counter]<<endl;
    }
}