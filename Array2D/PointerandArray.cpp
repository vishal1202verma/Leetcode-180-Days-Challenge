#include<iostream>
using namespace std;
int main(){
 int arr[] = {2,3,4,5,6};
 int *ptr = arr;
 cout<<ptr<<endl;
 cout<<ptr[2]<<endl;
 for(int i=0; i<=4; i++){
    cout<<ptr[i]<<" ";
}



}