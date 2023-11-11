// Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;
int NumDigit(int n){
    int count =0; 
    while(n>1){
        n = n/10;
        count++;
    }       
    return count*count;
     
}

int main (){
int n;
cout<<"enter the number of n :";
cin>>n;
cout<<NumDigit(n);

}