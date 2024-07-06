#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//bascially kept the conditions basic it n==0 or n==1 we return the sam enumber
// else we call for sum of last 2 numbers.
int fib(int n){
    if(n==1 || n==0){
        return n;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    // enter number
    int a;
    cin>>a; 
    int ans=fib(a);
    cout<<ans;

}