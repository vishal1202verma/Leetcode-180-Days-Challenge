// : Write a function that takes the radius of a circle as an argument and returns its area
#include<iostream>
using namespace std;
float RadiusCircle(int r){
 float pi = 3.1414;
 float  rad = pi*r*r;
 return rad; 
 
}
int main( ){
  int r;
  cout<<"enter the radius of the circle r :";
  cin>>r;
  cout<<RadiusCircle(r); 
  

}