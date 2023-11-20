#include<iostream>
#include<vector>
using namespace std;
void change (vector<int>v){//passing by refrence by using &
      v[0] = 100;
      for(int i=0; i<v.size(); i++){
         cout<<v[i]<<" ";
      }
      cout<<endl;
}
int main (){
  vector<int> v;
  v.push_back(2);
  v.push_back(4);
  v.push_back(5);
  v.push_back(6);
  v.push_back(8);
  v.push_back(9);
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
  }
    cout<<endl;
    change(v);
  for(int i=0; i<v.size(); i++){
    cout<<v[i]<<" ";
 }
                                                                                  
 cout<<"vishal verma :";         
   
}