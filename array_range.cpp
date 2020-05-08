#include<iostream>
using namespace std;
void display(const int *start,const int *end);
int main(){
    int number[]={22,33,44,55,66,77,88};
    display(number,number+7);
    return 0;
}
void display(const int *start, const int *end){
    const int *ptr;
    for(ptr=start;ptr!=end;ptr++){
        cout<<*ptr<<endl;
    }
}