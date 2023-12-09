#include<iostream>
#include<string>
using namespace std;
int main (){
// cout<<"enter the character :";    
string str = "vishal";
cout<<str<<endl;
for(int i=0; i<str[i] != '\0'; i++){
      if(i%2 ==0){
        str[i]  = 's';
      }
      cout<<str[i];
}

}


