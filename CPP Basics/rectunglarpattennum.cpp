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
    for(int j=1; j<=m; j++){
        cout<<i;
    }
    cout<<endl;
}

cout<<endl;
// question two 
// rectunglar patter of numbers 

for(int i=1; i<=n; i++){
    for( int j=1; j<=m; j++){
      cout<<i;
     if(1<i && i<n){
        for( int k=j+1; j<m-1; j++){
            cout<<" ";
        }
     }
    }
    cout<<endl;
}

}