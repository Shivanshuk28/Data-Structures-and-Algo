#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverese(string &s,int n,int i){
    if(i>n/2){
        return;
    }
    swap(s[i],s[n-i-1]);
}

int main(){
    // enter number
    string s;
    getline(cin,s);
    int n=s.size();
    reverese(s,n,0);
    for(auto x:s){
        cout<<x<<" ";
    }


}