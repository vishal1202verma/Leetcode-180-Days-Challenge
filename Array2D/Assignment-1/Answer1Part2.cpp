#include<iostream>
using namespace std;
int main (){
int a[3][3] = {1,2,3,4,5,6,7,8,9};
int b[3][3] = {4,5,8,0,0,8,1,2,0};
int c[3][3];
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        c[i][j] = a[i][j] + b[i][j];
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
// output
// 5 7 11 
// 4 5 14 
// 8 10 9

}