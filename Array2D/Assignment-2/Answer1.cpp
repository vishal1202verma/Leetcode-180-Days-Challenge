// Write a program to print the elements of both the diagonals in a square matrix.
#include<iostream>
using namespace std;
int main (){
int a[3][3] = {1, 2, 3 , 4, 5 ,6 ,7, 8, 9};
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
           if(i==j || ((i+j) == 2)){
                 cout<<a[i][j]<<" ";     
           }
           else{
            cout<<" ";
           }
     
      }
       cout<<endl;


}
// output
// 1 3
//  5
// 7 9

}