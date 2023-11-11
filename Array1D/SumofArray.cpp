// print the sum of all elements of array 
#include<iostream>
using namespace std;
int main (){
int n;
cout<<"enter the  number of array :";
cin>>n;    
int arr[n];
cout<<"enter the element of array :";
for(int i=0; i<=n-1; i++){
    cin>>arr[i];
}
int sum =0;
for(int i=0; i<=n-1; i++){
    sum = sum+arr[i];                     
}
  
    cout<<sum;
} 