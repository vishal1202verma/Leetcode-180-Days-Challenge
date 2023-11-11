// Find the minimum value out of all elements in the array#include<iostream>
#include<iostream>
#include<climits>
using namespace std;
int main (){
int arr [6]= {2, 3, 4, 5, 8,6, };
int min= arr[0];
for(int i=0; i<=5; i++){
    if(min>arr[i]){
        min = arr[i];
    }
}
cout<<"the minimum element of the array is :"<<min;
}