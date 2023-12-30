#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void printt(int n){
    if (n<1){
        return;
    }
    cout<<"Shivanshu"<<endl;
    printt(n-1);
}
int main(){
    int n;
    cin>>n;
    printt(n);
}