#include<iostream>
using namespace std;
void show (int [],int);
int main(){
    int number[]{1,2,3,4,5,6,7};
    int length=7;
    show (number,length);
    return 0;
}
void show(int numbers[],int length){
    for(int i=0;i<length;i++){
        cout <<numbers[i] <<endl;
    }
}