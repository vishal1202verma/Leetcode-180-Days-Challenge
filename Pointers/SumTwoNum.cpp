#include<iostream>
using namespace std;
int main (){   
int a, b;
cin>>a>>b;
int *p1 = &a;
int *p2 = &b;
int sum = *p1 + *p2;
cout<<sum<<endl;
cout<<sum+2;
 

     

}