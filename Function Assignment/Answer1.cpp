// Write a function to print squares of first n natural numbers, taking n as argument to the function
#include<iostream>
using namespace std;
int Square(int n){
   for(int i=1; i<=n; i++){
    int sqr = i*i; 
    cout<<sqr<<endl;
   }
        

}
int main (){
int n;
cout<<"enter the number of the n :";
cin>>n;
cout<<Square(n);

}