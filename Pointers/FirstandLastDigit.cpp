#include<iostream>
using namespace std;
int LastDigit(int x){
int lastnum  = x%10;
return lastnum; 

}
int FirstDigit (int x){
    while(x>9){
        x/=10;

    }
    return x;
        


    
}


int main (){
int x;
cout<<"enter the num of x :";
cin>>x;
int ld = LastDigit(x);
int fd = FirstDigit(x);

cout<<"the last digit of the number is :"<<fd<<" "<<ld;
// cout<<"the first digit of the number is :"<<fd<<endl;


}