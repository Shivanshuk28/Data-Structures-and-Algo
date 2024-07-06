#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int geeko(int a,int b,int c,int n){
    if(n<0){
        return 0;
    }
    if(n==1) return a;
    if(n==2) return b;
    if(n==3) return c;
    return geeko(a,b,c,n-1)+geeko(a,b,c,n-2)+geeko(a,b,c,n-3);
}

int main(){
    int a,b,c;
    int n;
    cin>>n;
    cin>>a>>b>>c;
    int ans=geeko(a,b,c,n);
    cout<<"ans is "<<ans;
}