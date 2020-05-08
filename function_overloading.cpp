#include<iostream>
#include<string>
using namespace std;
void display();
void display(string);
int main(){
    display();
    display("Shyam Tiwari");
    return 0;
}
void display(){
    cout<<"Hi\n";
}
void display(string name){
    cout<<name<<endl;
}