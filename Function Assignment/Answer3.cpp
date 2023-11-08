// Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
int oddNum (int a, int b){
   int i= min(a,b);
   while(a<=i<b){
    if(i%2 != 0){
        cout<<i;
    }
   }
   return i;                                                                    
    
}

int main (){
int a;
cout<<"enetr the number of a :";
cin>>a;
int b;
cout<<"enetr the number of b :";
cin>>b;
cout<< "odd number between a and b are :"<<oddNum(a, b);

}