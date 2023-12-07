// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order
// Input 1: n = 3
// Output 1: [[1,2,3],[8,9,4],[7,6,5]]
// Input 2: n = 1
// Output 2: [[1]]
#include<iostream>
using namespace std;
int main (){
int n;
cout<<"enter the size of matrix :";   
cin>>n;
int a[n][n];
cout<<"enter the elements of the matrix :"; 
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>a[i][j];
    }
}
// printing the spiral matrix 
int minr = 0;
int minc = 0;
int maxr = n-1;
int maxc = n-1;
for (int i=0; i<n; i++){
    //right
    for(int j=minc; j<=maxc; j++){
        cout<<a[minr][j]<<" ";
    }
    minr++;
    //down
    
    for(int j=minr; j<=maxc; j++){
        cout<<a[j][maxc]<<" ";
    }
    maxc--;
    //left
    for(int j=maxc; j>=minc; j--){
        cout<<a[maxr][j]<<" ";
    }
    maxr--;
    //up
    for(int j=maxr; j>=minr; j--){
        cout<<a[j][minc]<<" ";
    }
    minc++;
}

}