#include<iostream>
#include<vector>
using namespace std;
int main (){
vector<int> v;
//input
cout<<"enter the element of the vector :";
for(int i=0; i<5; i++){
    int x;
    cin>>x;
    v.push_back(x);
        
}
//output
for(int i=0; i<5; i++){
    cout<<v[i]<<" ";      
}

}








