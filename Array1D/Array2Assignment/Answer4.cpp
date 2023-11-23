// Find the difference between the sum of elements at even indices to the sum of elements at odd 
// indices
#include<iostream>
using namespace std;
int main (){
int arr[7] ={2,3,4,5,6,8,9};
int sume =0;
int sumo =0;
// even indicates add
for(int i=0; i<7; i++){
     if(i%2 ==0){ //even
        sume = sume+arr[i]; 
     }     
}
     
     cout<<endl;
for(int i=0; i<7; i++){
     if(i%2 != 0){ //even
        sumo = sumo+arr[i]; 
     }     
}
    cout<<"the differece of sum between even and odd indicates are :"<<sume-sumo;


}