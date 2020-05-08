#include<iostream>
#include<string>
using namespace std;
struct address{
    int house_no;
    string street_name;
};
struct student{
    string name;
    int rollno;
    address addr;
};
int main(){
    student shyam;
    shyam.name="Shyam";
    shyam.rollno=1234;
    shyam.addr.house_no=68;
    shyam.addr.street_name="m a road";
    cout<<shyam.name<<endl;
    cout<<shyam.rollno<<endl;
    cout<<shyam.addr.house_no<<endl;
    cout<<shyam.addr.street_name<<endl;
}