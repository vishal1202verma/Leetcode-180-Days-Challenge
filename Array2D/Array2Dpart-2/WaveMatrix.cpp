#include<iostream>
#include<vector>
using namespace std;
int main (){
    int a[3][3]= {1,2,3,4,5,6,7,8,9};
    // wave form  of array 
      for(int i=2; i>=0; i-- ){// i=0; i<2; i++
        if(i!=1){ // i==1
            for(int j=2; j>=0; j--){
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int j=0; j<3; j++){
                cout<<a[i][j]<<" ";
            }
        }
        
   
   
       }
}
