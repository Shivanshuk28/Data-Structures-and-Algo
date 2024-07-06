#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int summofn(int n,int summ){
    if(n==0){
        return summ;
    }
    summ+=n%10;
    summofn(n/10,summ);
    
}

int main(){
    // enter number
    int a;
    cin>>a;
    int ans=summofn(a,0);
    cout<<ans;




}