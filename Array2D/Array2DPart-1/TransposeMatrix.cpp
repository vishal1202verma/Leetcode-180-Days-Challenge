#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[3][3] = {10,2,32,42,53,63,78,85,90};
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        int temp  = arr[j][i];
        arr[j][i] = arr[i][j];
        arr[i][j] = temp;
    }
}

//printing 
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<arr[j][i]<<" "; 
    }
    cout<<endl;

}

}