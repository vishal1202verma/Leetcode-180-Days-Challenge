#include<iostream>
#include<vector>
using namespace std;
int main (){
    int a[4][4]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    // Spiral printing of an 2D array 
    int minr =0;
    int minc = 0;
    int maxr = 3;
    int maxc = 3;

    for(int i=0; i<4; i++){
       // right
       for(int j = minc; j<=maxc; j++){
        cout<<a[minr][j]<<" ";
       }
        minr++;
       //Down
       for(int k =minr; k<=maxr; k++){
        cout<<a[k][maxc]<<" ";
       }
        maxc--;
        //left
        for(int l=maxc; l>=minc; l--){
            cout<<a[maxr][l]<<" " ;
        }
            maxr--;
        //up
        for(int m= maxr; m>=minr; m--){
        cout<<a[m][minc]<<" ";
        }
        minc++;
        

    }
      
}
