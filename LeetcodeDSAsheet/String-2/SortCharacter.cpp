#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
  string  s  = "Aabb";
  char chA = 'A';
  char ch = 'a';
  int as = (int)chA;
  int as2 = (int)ch;
  cout<<as<<endl;
  cout<<as2<<endl;


  cout<<s.size()<<endl;
  for(int i=s.size(); i>=0; i--){
    int ascci = (int)s[i];
  sort(s.begin(), s.end());
  cout<<s[i];
  
  }
}