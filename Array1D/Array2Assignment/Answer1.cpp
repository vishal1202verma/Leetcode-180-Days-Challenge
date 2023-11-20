// Count the number of elements strictly greater than x.
#include<iostream>
using namespace std;
int main (){
int arr[5] ={2,3,4,5,6};
int x;
cout<<"enter the value of x";
cin>>x;
int count  =0;
for(int i=0; i<=4; i++){
    if(arr[i]>x){
        count++;
    }
    cout<<count<<arr[i]<<" ";
}










}