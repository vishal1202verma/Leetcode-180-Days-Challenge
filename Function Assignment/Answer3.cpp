// Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
void oddNum (int a, int b){
   for(int i=min(a, b); i<=b; i++){
      if(i%2 != 0){
        cout<<i<<" ";
      }     
      
   }
                                                                                                   
}
int main (){
int a;
cout<<"enter the number of a :";
cin>>a;
int b;
cout<<"enter the number of b :";
cin>>b;
oddNum(a, b);


}