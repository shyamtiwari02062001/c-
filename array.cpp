#include<iostream>
using namespace std;
int main(){
    int arr[10];
    int i;
    cout <<"Enter the array elemnts\n";
    for(i=0;i<4;i++){
        cin>>arr[i];
    }
    cout <<"Array elemnts are\n";
    for(i=0;i<4;i++){
        cout<<arr[i] <<endl;
    }
}