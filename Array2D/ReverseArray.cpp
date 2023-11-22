#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &a){
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<" ";
    }
}
int main (){
    vector<int>v1;
    v1.push_back(2);
    v1.push_back(9);
    v1.push_back(7);
    v1.push_back(4);
    v1.push_back(3);
    display(v1);
    cout<<endl;
    int i=0; 
    int j = v1.size()-1-i;
    while(i<=j){
        int temp = v1[i];
        v1[i] = v1[j];
        v1[j] = temp;
        i++;
        j--;
    }
    display(v1);
    

}