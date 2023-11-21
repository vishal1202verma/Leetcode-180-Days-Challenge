#include<iostream>
#include<vector>
using namespace std;
int main (){
int target ;
cout<<"enter the target :";
cin>>target;
cout<<endl;
int n;
cout<<"enter the size of array :";
cin>>n;
vector<int>v;
cout<<"enter the element of array :";
for(int i=0; i<n; i++){
      int x;
      cin>>x;
      v.push_back(x);
}

cout<<endl;
// output
for(int i=0; i<v.size()-2; i++){
    for(int j=i+1; j<v.size()-1; j++){
        if(v[i] + v[j] == target){
            cout<<"("<<i<<" "<<j<<")"<<endl;
        }
    }
}

}