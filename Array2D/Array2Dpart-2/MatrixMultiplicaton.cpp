#include<iostream>
#include<vector>
using namespace std;
int main (){
    int a[2][3]= {1,2,3,4,5,6};
    int b[3][2] = {7,8,9,3,2,1};   
    int res[2][2];
    // mulitiplication of two array 
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            res[i][j] = 0;
            for(int k=0; k<3; k++){
            res[i][j] += a[i][k]*b[k][j];
            }
        }
    }

    //printing 
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    
}