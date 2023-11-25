#include<iostream>
using namespace std;
int main (){
int n;
cout<<"enter the num of rows :";
cin>>n;
for(int a =1; a<2*n-1; a++ ){
    cout<<"*";
}
for(int i=0; i<=n; i++){
    for(int j=0; j<=n-i; j++){
        cout<<"*";
    }

 for(int l=1; l<=2*i-1; l++){
            cout<<" ";
        }

  for( int k=1; k<=(n+1)-i; k++){
      cout<<"*";
  }

    cout<<endl;

}
}
