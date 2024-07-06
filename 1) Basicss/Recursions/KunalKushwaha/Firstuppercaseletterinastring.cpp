#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string uppercase(int i,string s, string ans,int n){
    if(ans.size()==1 || i>n){
        return ans;
    }
    if(isupper(s[i])){
        ans+=s[i];
    }
    return uppercase(i+1,s,ans,n);
}

int main(){ 
    string s="abcDXYZ";
    string ans="";
    int n=s.size();
    ans=uppercase(0,s,ans,n);
    cout<<ans<<" ";


}