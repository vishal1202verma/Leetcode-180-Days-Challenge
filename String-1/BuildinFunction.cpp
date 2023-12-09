#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
// cout<<"enter the character :";    
string str = "vishal";
int n = str.size();
cout<<n<<endl;

str.push_back('j');
str.push_back('i');
str.pop_back();
str.pop_back();
cout<<str<<endl;

// + operator
string st = "vermaji";
 string stradd = str + st; // add  two strings
cout<<stradd<<endl;
reverse(stradd.begin()+6, stradd.begin()+5);
cout<<stradd<<endl;




}


