#include<iostream>
using namespace std;
int main (){
int m;
cout<<"enter the marks and no of student :";
cin>>m;
int n;
cout<<"enter the numbers :";
cin>>n;
int arr[m][n];
for(int i=0; i<=m-1; i++){
    for(int j=0; j<=n-1; j++){
        cin>>arr[i][j];

    }
}
// printing 
for(int i=0; i<=m-1; i++){
    for(int j=0; j<=n-1; j++){
        cout<<arr[i][j]<<" ";

    }
    cout<<endl;
}
cout<<"vishal verma ji ";

}