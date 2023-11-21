#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int> &v1){
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
}
int main (){
    vector<int>v1;
    v1.push_back(1);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(5);
    v1.push_back(4);
    display(v1);
    cout<<endl;
    // int sort =1; 
    // for(int i=0; i<v1.size(); i++){
    //     if(i>sort){
    //         sort = v1[i];
    //     }
    // }
    //     cout<<sort;
    sort(v1.begin(), v1.end());
    display(v1);
}