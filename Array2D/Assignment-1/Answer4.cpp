// : Write a program to print the row number having the maximum sum in a given matrix.
#include<iostream>
#include<climits>
using namespace std;
int main (){
int a[3][4] = {1, 3, 5, 7, 3 ,4 ,7 ,8 ,1 ,4, 12, 3 };
int max = INT_MIN;
int maxRow = -1;
for(int i=0; i<3; i++){
    int sum =0;
    for(int j=0; j<4; j++){
        sum += a[i][j];
     }
           
    if(max<sum){
        max = sum;
        maxRow = i;
    }

}
cout<<"the index of marimum sum row :"<<maxRow +1;


}