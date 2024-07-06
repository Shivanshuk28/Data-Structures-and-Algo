#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}

int main(){
    // enter number
    int a;
    cin>>a; 
    int ans=fact(a);
    cout<<ans;

}