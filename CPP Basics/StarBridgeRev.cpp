#include<iostream>
using namespace std;
int main (){
int n;
cout<<"enter the number of n :";
cin>>n;
for(int a=1; a<=2*n-1; a++){
    cout<<"*";
}
cout<<endl;
for(int i=1; i<=n; i++){
    for(int j=1; j<=n-i; j++){
         cout<<"*";
    }
    for(int k=1; k<=2*i-1; k++){
        cout<<" ";
    }
    for(int l=1; l<=(n)-i; l++){
        cout<<"*";
    }
    cout<<endl;
}



}