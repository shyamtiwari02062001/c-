#include<iostream>
using namespace std;
int main(){
    int arr[10][20];
    int i,j;
    cout <<"Enter the array elemnts\n";
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
         cin>>arr[i][j];
        }
    }
    cout <<"Array elemnts are\n";
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
         cout<<arr[i][j] <<endl;
        }
    }
}