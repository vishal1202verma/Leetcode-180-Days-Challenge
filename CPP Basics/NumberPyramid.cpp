#include<iostream>
using namespace std ;
int main (){
int n;
cout<<"enter a number of row :"; 
cin>>n;
for(int i=1; i<=n; i++){
    for(int j=1; j<=2*n-i; j++){
        cout<<j;

    }
    cout<<endl;
}










}