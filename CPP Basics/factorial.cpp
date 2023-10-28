#include<iostream>
using namespace std;
int main (){

int m;
cout<<"enetr any integer value :";
cin>>m;
int product = 1;

for( int i=1; i<=m; i++){
   product *= i;

}
   cout<<" the factorial of this integer is :" <<product;

     cout<<endl;
     cout<<endl;
    //    2nd question fabinocci effect 
    // 0,1,1,2, 3, 5, 8, 13, ...........
    int n;
    cout<<"enetr any fabinocci number :";
    cin>> n;
    int a =0;
    int i =1;
    
    while( i< 13){
        int sum = a +(i-1);
        sum++;
    }
     cout<<sum;
   

}