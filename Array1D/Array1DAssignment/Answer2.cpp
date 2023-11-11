// Find the second largest element in the given Array in one pass.
#include<iostream>
#include<climits>
using namespace std;
int main (){
int arr [6]= {2, 3, 4, 5, 8,6, };
int max= INT_MIN;
for(int i=0; i<=5; i++){
    if(max<arr[i]){
        max = arr[i];
    }
}
cout<<"the maximum element of the array is :"<<max<<endl;
int smax=  INT_MIN;
for(int i=0; i<=5; i++){
    if(arr[i] != max && smax<arr[i]){
         smax = arr[i] ;
          
    }
}
cout<<"the second largest number of the array is :"<<smax; 
}