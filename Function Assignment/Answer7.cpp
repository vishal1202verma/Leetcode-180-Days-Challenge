// Can the same function name be used for different functions without any conflict?
#include<iostream>
using namespace std;
void vishal(){
    cout<<"hello vishal !";
}
void vishal1(){
    cout<<"verma ji !";
}
int main (){
    vishal();
    vishal1();
}