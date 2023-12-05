#include<iostream>
using namespace std;
int main (){
// Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns. 
// Write a program to add two matrices and save the result in one of the given matrices.
// Input 1:
// 1 2 3
// 4 5 6
// 7 8 9
int arr[5][5];
cout<<"enter the element no 10";
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        cin>>arr[i][j];
    }
}
// printing 
for(int i=0; i<5; i++){
    for(int j=0; j<5; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
    
}




}