#include<iostream>
using namespace std ;
int main (){
int n;
cout<<"enter a number of row :"; 
cin>>n;
int m;
cout<<"enter num :";
cin>>m;
for(int i=1; i<=n; i++){
    for(int j=1; j<=m; j++){
        cout<<j;
    for( int k =i+1; k<=i; k++){
        cout<<" ";
    }
    }
  
    cout<<endl;

}


}
