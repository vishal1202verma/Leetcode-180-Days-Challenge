#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter the value of n ;";
    cin>>n;
    int r;
    cout<<"enter the value of r";
    cin>>r;
    int factN =1;
    for(int i=1; i<=n; i++){
        factN *=i;

    }
    cout<<factN<<endl;
    int factR =1;
    for( int j=1; j<=r; j++){
        factR *=j;
    }
    cout<<factR<<endl;
    int factNR =1;
    for(int k=1; k<=(n-r); k++){
        factNR *=k;
    }
    cout<<factNR<<endl;





}