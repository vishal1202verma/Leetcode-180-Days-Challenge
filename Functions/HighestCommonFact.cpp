#include<iostream>
using namespace std;
int hcf (int a, int b){
   int gcd;
    for(int i=1; i<=min(a ,b); i++){
           if( a%i== 0 && b%i ==0){
             gcd =i;
           }
    }
     return gcd;


}

int main (){
int a;
cout<<"enetr he value of a :";
cin>>a;
int b;
cout<<"enetr the value of b :";
cin>>b;
int Ans= hcf(a ,b);
cout<<Ans; 
return 0;



}