#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// print n to 1 by backtracking
void printt(int n,int i){
    if (n<i){
        return;
    }
    printt(n,i+1);
    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;
    printt(n,1);
}