// Given an array, predict if the array contains duplicates or not.
#include<iostream>
#include<climits>
using namespace std;
int main (){
int arr [6]= {2, 3, 4, 5, 8,6, };
int x ;
cout<<"enter the element :";
cin>>x;
for(int i=0; i<=5; i++){
     if( x == arr[i]){
        cout<<"element is not duplicate"<<endl;
     }     
     continue;
}


}