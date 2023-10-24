// simpe pattern questo on loops 
#include<iostream>
using namespace std;
int main(){
int n = 4;
int m = 5;
 for( int i=1; i<=m; i++){
    for(int j=1; j<=m; j++){
        cout<<"*";
    }
    cout<<endl;
 }
 cout << endl;

//    some rectunglar star 

for( int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
        cout<<"*";
     if (i>1 && i<n){
        for(int k= j+1; j<m-1; j++){
            cout<<" ";
        }
     }
    
    }
    cout<<endl;
 }
 



}