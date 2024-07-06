#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printt(int n){
    if(n<0){
        return;
    }
    cout<<n<<" ";
    printt(--n);
}

//by backtracking
void printt(int i,int n){
    if(i>n) return;
    printt(i+1,n);
    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;
    // printt(n);
    printt(1,n);

}