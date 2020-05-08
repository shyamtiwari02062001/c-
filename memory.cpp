#include<iostream>
using namespace std;
int main(){
    int *pointer=NULL;
    cout<<"How many items U want to enter"<<endl;
    int input;
    cin>>input;
    pointer= new int[input];
    int temp;
    for(int counter=0;counter<input;counter++){
        cout<<"Enter the item "<<counter+1<<endl;
        cin>>temp;
        *(pointer+counter)=temp;
    }
    for(int counter=0;counter<input;counter++){
        cout<<counter+1 <<" item is " <<*(pointer+counter)<<endl;
    }
    delete pointer;
    return 0;
}