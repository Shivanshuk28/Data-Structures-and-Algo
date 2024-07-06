#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverese(int n,int rev){
    if(n==0){
        return rev;
    }
    rev=rev*10+n%10;
    reverese(n/10,rev);
}

int main(){
    // enter number
    int a;
    cin>>a;
    int ans=reverese(a,0);
    cout<<ans;

}