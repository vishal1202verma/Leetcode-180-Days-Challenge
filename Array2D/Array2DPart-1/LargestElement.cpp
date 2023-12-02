#include<iostream>
#include<climits>
using namespace std;
int main(){
int arr[3][3] = {10,2,32,42,53,653,78,85,90};
int max = INT_MIN;
for(int i=0; i<3; i++){
   for(int j=0; j<3; j++){
        if(max<arr[i][j]){
            max = arr[i][j];
        }
   }
   cout<<endl;
}
//printing 
cout<<"largest element of the 2Darray is :"<<max;

}