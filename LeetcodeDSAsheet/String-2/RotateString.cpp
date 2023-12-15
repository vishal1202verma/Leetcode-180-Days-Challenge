#include<iostream>
#include<algorithm>
using namespace std;
bool rotateString(string s, string goal) {
        int n  = s.size();
        int m  = goal.size();
        for(int i=0; i<s.size(); i++){

        if(n==m){
            return true;
        }
        else if (s[i] != goal[i]){
            return false;
        }
        }
        return {};
    }


int main (){



}