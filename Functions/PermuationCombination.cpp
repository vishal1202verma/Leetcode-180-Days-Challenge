#include<iostream>
using namespace std;
int fact(int x){
    int f =1;
  for(int i=1; i<=x; i++){
       f*=i;
  }
      return f;
}

int combination (int n, int r){

 int ncr = fact(n)/(fact(n-r)*fact(r));   
 return ncr;

} 

int main (){
   int n;
   cout<<"enter the value of n :";
   cin>>n;
   int r;
   cout<<"enter the value of r :";
   cin>>r;
   int answer = combination( n, r);
   cout<<answer;      
   


}
