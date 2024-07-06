#include<iostream>
#include<bits/stdc++.h>

using namespace std;
// simple
// void printt(int i,int n){
//     if(i>n){
//         return;
//     }
//     cout<<i<<" ";
//     printt(i+1,n);

// }
//by backtracking
void printt(int n){
    if(n<1){
        return;
    }
    printt(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cin>>n; 
    printt(n);
}