#include<iostream>
using namespace std;
int main (){
int n;
cout<<"enter the number of :";
cin>>n;
for(int i=1; i<=n; i++){
     for(int j=1; j<=n-i; j++){
            cout<<" ";
     }
     for(int k=1; k<=i-1; k++){
          cout<<k;
     }
     for(int l=i; l>=1; l--){
          cout<<l;
     }
     
     cout<<endl;
}

}