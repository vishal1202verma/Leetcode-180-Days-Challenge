#include<iostream>
using namespace std;
int main (){
int m;
cout<<"enter the rows number :";
cin>>m;
int n;
cout<<"enter the columns number :";
cin>>n;
int arr[m][n];
for(int i=0; i<=m-1; i++){
    for(int j=0; j<=n-1; j++){
        cin>>arr[i][j];
    }
}


}