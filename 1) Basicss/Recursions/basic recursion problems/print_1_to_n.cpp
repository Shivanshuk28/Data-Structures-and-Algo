#include<iostream>
#include<bits/stdc++.h>

using namespace std;
//print 1 to n
void printt(int i, int n){
    if (i<1){
        return;
    }
    cout<<i<<" ";
    printt(i-1,n);

}
void printt2(int i,int n){
    if (i>n){
        return;
    }
    cout<<i<<" ";
    printt2(i+1,n);
}

int main(){
    int n;
    cin>>n;
    printt(n,n);
    cout<<endl;
    printt2(1,n);
}