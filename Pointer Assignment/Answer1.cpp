// : Write a program to find the product of two numbers using pointers.
#include<iostream>
using namespace std;
int product(int *p1, int *p2){

  int ans = (*p1)*(*p2);
  return ans;
}
int main (){
int  a;
cout<<"enter the num of a :";
cin>>a;
int *p1 = &a;
int b;
cout<<"enter the num of b :";
cin>>b;
int *p2 = &b;
cout<<"the product of these two numbers are :"<<product( &a, &b);

}  
