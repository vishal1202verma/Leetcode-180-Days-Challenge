#include<iostream>
using namespace std ;
int main (){
int n;
cout<<"enter a number :"; 
cin>>n;
int lastDigit = 0;
int ReversNum = 0;
while(n>0){
     lastDigit= n%10;
     ReversNum *=10;
    ReversNum+= lastDigit;
    n/=10;
}
 cout<<ReversNum;


}