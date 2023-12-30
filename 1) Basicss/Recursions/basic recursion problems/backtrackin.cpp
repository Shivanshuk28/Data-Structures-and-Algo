#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// print 1 to n by backtracking
void printt(int n){
    if (n<1){
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