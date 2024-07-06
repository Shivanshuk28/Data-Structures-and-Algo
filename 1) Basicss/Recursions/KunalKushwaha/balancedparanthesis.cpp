#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(string s,stack<char>&stk,int i){
    if(i>s.size()){
        return true;
    }
        if(stk.empty() && (s[i]=='(' || s[i]=='{' || s[i]=='[')){
            stk.push(s[i]);
            return check(s,stk,i+1);
        }

    else{
        if(stk.empty())return false;
        if(s[i]==')' && stk.top()!='('){
            return false;
        }
        else if(s[i]=='}' && stk.top()!='{'){
            return false;
        }
        else if(s[i]=='[' && stk.top()!='['){
            return false;
        }
        return check(s,stk,i+1);
        stk.pop();
    }
}


int main(){

    string s;
    getline(cin,s);
    stack<char>stk;
    if(check(s,stk,0)){
        cout<<"Balanced string";
    }
    else{
        cout<<"NOT BALANCED";
    }
}