#include<iostream>
#include<vector>
using namespace std;

int fact(int n ){
    int fac = 1;
    for(int i=2; i<=n; i++){
        fac*=i;
    }
    return fac;
}
int main (){
    int m;
    cout<<"enter the size of Pascal traingle :";
    cin>>m;
    for(int i=0; i<m; i++){
    for(int j=0; j<=i; j++){
        int comb = fact(i)/(fact(j)*(fact(i-j)));
        cout<<comb<<" ";
    }
    cout<<endl;
}
}


// int main (){
// int m =5;
// vector<vector<int > > v;
// for(int i=1; i<=m; i++ ){
//    vector<int>a(i);
//    v.push_back(a);

// }
// // genrate
// for(int i=0; i<m; i++){
//     for(int j=0; j<=i; j++){
//         if(j==0 || j==i){
//             v[i][j] =1;

//         }
//         else{
//             v[i][j] = v[i-1][j] + v[i-1][j-1];
//         }
//     }
// }
// // printing 
// for(int i=0; i<m; i++){
//     for(int j=0; j<m; j++){
//         cout<<v[i][j]<<" ";
//     }
//     cout<<endl;
// }


