#include<iostream>
#include<vector>
using namespace std;
int main (){
vector<int>v1;
v1.push_back(1);
v1.push_back(2);
v1.push_back(3);
vector<int>v2;
v2.push_back(4);
v2.push_back(5);
v2.push_back(6);
vector<int>v3;
v3.push_back(7);
v3.push_back(8);
v3.push_back(9);

    // decalaration of 2D vector
vector<vector<int>>  v;
v.push_back(v1);
v.push_back(v2);
v.push_back(v3);
// printing the 2D vector 
for(int i=0; i<v.size(); i++){
    for(int j=0; j<v[0].size(); j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}







}
