#include<iostream>
#include<string>
using namespace std;
int main (){
// cout<<"enter the character :";    
string str = "vishal";
int count =0;
int i=0;
while(str[i] != '\0'){
    if(str[i] == 'a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] == 'u'){
           count++;
    }
    i++;
}

cout<<"no of vowels in my name is :"<<count;

}