#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
vector<int> v;
v.push_back(2);
v.push_back(4);
v.push_back(5);
v.push_back(6);
v.push_back(8);
v.at(2) = 90;
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
}
cout<<endl;// next line 
sort(v.begin(), v.end());
for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
}



}