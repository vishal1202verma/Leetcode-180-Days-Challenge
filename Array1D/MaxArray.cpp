#include<iostream>
#include<limits>
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
int max =arr[0];
for(int i=1; i<=n-1; i++){
    if(max<arr[i]){
        max = arr[i];
    }
} 
   
   cout<<"the maximum element of the array is :"<<max;
                                                          
}