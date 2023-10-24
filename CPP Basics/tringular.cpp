#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the length of rows :";
cin>>n;
int m;
cout<<"enetr the length of coloms :";
cin>>m;
for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout<<"*";
    }
    cout<<endl;
}

    //  numbers traingle questions 

for(int i=1; i<=n; i++){
    for(int j=1; j<=i; j++){
      cout<<i;
    }   
    cout<<endl;
}

}