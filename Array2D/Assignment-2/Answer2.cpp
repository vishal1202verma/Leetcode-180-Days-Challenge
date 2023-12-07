// Write a program to rotate the matrix by 90 degrees anti-clockwise.
#include<iostream>
#include<vector>
using namespace std;
int main (){
int a[3][3] = {1, 2, 3 , 4, 5 ,6 ,7, 8, 9};

// printing the  matrix
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
       cout<<a[i][j]<<" ";
    }
    cout<<endl;

} 
cout<<endl;
// tranpose the matrix
for(int j=0; j<3; j++){
        for(int i=0; i<3; i++ ){
           cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
cout<<endl;
// swap the first row by third row for rotation 
for(int k=0; k<3; k++){
        int i=0;
        int j=2;
        while(i<=j){
            int temp = a[k][i];
            a[k][i] = a[k][j];
            a[k][j] = temp;
            i++;
            j--;
        }


}
cout<<endl;
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
       cout<<a[j][i]<<" ";
    }
    cout<<endl;

}     

cout<<"vishal verma ji !";

}