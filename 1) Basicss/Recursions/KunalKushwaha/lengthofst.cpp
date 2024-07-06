// length of string 
//simple program to calculate the length of string 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int length(int i,string &s,int len){
//the point we reach a backslash we return (\0 means the end of string)
    if(s[i]=='\0'){
        return len;
    }
    length(i+1,s,len+1);
}

int main(){ 
    string s="abcDXYZ";
    int ans=length(0,s,0); 
    cout<<"length is "<<ans;
}