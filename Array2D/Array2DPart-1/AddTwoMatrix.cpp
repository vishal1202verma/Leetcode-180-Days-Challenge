#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr1[3][3] = {10,2,32,42,53,63,78,85,90};
int arr2[3][3] = {1,2,3,4,5,6,7,8,9};
int result[3][3] ;
for(int i=0; i<3; i++){
   for(int j=0; j<3; j++){
        result[i][j] = arr1[i][j] + arr2[i][j];
   }
   cout<<endl;
}
//printing 
for(int i=0; i<3; i++){
   for(int j=0; j<3; j++){
       cout<<result[i][j]<<" ";
   }
   cout<<endl;
}
}