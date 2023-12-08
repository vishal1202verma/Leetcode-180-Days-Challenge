#include<iostream>
#include<vector>
using namespace std;
int main (){
vector<vector<int > > v;
vector<int>v1;
v1.push_back(0);
v1.push_back(0);
v1.push_back(1);
v1.push_back(1);
v.push_back(v1);
vector<int>v2;
v2.push_back(1);
v2.push_back(0);
v2.push_back(1);
v2.push_back(0);
v.push_back(v2);
vector<int>v3;
v3.push_back(1);
v3.push_back(1);
v3.push_back(0);
v3.push_back(0);
v.push_back(v3);

// priting 
for(int i=0; i<=v.size(); i++){
    for(int j=0; j<=v[0].size(); j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    
}
cout<<endl;

// flopping the rows of 2D vector
    for(int i=0; i<=v.size(); i++){
       if(v[i][0]==0){
       for(int j=0; j<=v[0].size(); j++){
       if(v[i][j] == 0){
          v[i][j] =1;
       }
       else v[i][j] =0;
     }
}
}
// priting 
for(int i=0; i<=v.size(); i++){
    for(int j=0; j<=v[0].size(); j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    
}



}