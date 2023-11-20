#include<iostream>
#include<vector>
using namespace std;
int main (){
  vector<int> v;
  v.push_back(5);
  v.push_back(4);
  v.push_back(3);
  v.push_back(2);
  v.push_back(1);
  for(int i=0; i<=v.size()-1; i++){
  cout<<v[i]<<" ";
  cout<<" ";        
  }
  cout<<endl;
  cout<<"size of the vector is :"<<v.size()<<endl;
  cout<<"the capacity of the vector is :"<<v.capacity()<<endl;
  v.pop_back();
  for(int i=0; i<=v.size()-1; i++){
  cout<<v[i]<<" ";        
                                                       
  }
                                  
                         

} 