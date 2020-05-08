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
    student *st;
    st=&shyam;
    st->name="Shyam";
    st->rollno=1234;
    st->addr.house_no=68;
    st->addr.street_name="m a road";
    cout<<st->name<<endl;
    cout<<st->rollno<<endl;
    cout<<st->addr.house_no<<endl;
    cout<<st->addr.street_name<<endl;
}