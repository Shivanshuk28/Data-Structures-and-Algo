// Remove all consecutive duplicates from the string

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Input: S= “aaaaabbbbbb”
// Output: ab

void duplic(string s,string ans){
    for(int i=0;i<s.size();i++){
        if(s[i]==s[i+1]){
            continue;
        }
        else{
            ans+=s[i];
        }
    }
    cout<<ans<<" ";
}

void duplicates(string s,int i,string ans){
    if(i>s.size()){
        cout<<ans;
        return;
    }
    if(s[i]==s[i+1]){
        duplicates(s,i+1,ans);
    }
    else{
        duplicates(s,i+1,ans+s[i]);
    }
}

int main(){
    string s;
    getline(cin,s);
    string ans;
    duplicates(s,0,ans);
}