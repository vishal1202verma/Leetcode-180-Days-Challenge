#include<iostream>
using namespace std ;
int main (){
int n;
cout<<"enter a number of row :"; 
cin>>n;
// int m;
// cout<<"enter num :";
// cin>>m;
for(int a=1; a<=2*n-1; a++){
    cout<<a;
   
    }
    cout<<endl;
    for(int i=1; i<=n; i++){
        int b =1;
        for(int j=1; j<=n-i; j++){
            cout<<b;
            b++;
        }
        for( int k=1; k<=2*i-1; k++){
             cout<<" ";
             b++;
        }
        for(int l=1; l<(n+1)-i; l++){
            cout<<b;
            b++;
        }
        cout<<endl;
    }
  

}



