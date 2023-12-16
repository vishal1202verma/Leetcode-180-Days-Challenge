#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main (){
string s = "abcde";
string goal = "cdeab";
int n  = s.size();
int m  = goal.size();
        // int i=0; 
        // int j= n-1;
        // while(i<j){
        //     char temp = s[j];
        //     s[j] = s[i];
        //     s[i] = temp;
        //     i++;
        //     j--;
        // }
       string last = "";
       for(int i=2;  i<n; i ++){
           last += s[i];
       } 
       cout<<last;
       cout<<endl;
       string temp = "";
        for(int i=0;  i<n-3; i ++){
           temp += s[i];
       } 
       cout<<temp;
       cout<<endl;
       string ans = last+temp;
       cout<<ans;
      


       


}