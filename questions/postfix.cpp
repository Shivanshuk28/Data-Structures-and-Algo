#include<bits/stdc++.h>
#include<stack>
using namespace std;
int prec(char c){
    if (c == '^') {
        return 3;
    }
    else if (c == '/' || c == '*') {
        return 2;
    }
    else if (c == '+' || c == '-') {
        return 1;
    }
    else {
        return 0;
    }
}
bool isoperand(char s){
    if((s>='a' && s<='z') ||(s>='A' && s<='Z')||(s>='0' && s<='9')){
        return true;
    }
    return false;
}

int main(){
    string s="K+L-M*N+(O^P)*W/U/V*T+Q";
    stack<char>stk;
    string ans="";
    for(int i=0;i<s.size();i++){
        if(isoperand(s[i])){
            ans+=s[i];
        }
        else if(s[i]=='('){
            stk.push(s[i]);
        }
        else if(s[i]==')'){
            while(!stk.empty() && stk.top()!='('){
                ans+=stk.top();
                stk.pop();
            }
            stk.pop();
        }
        else{
            if(stk.empty()){
                stk.push(s[i]);
            }
            else{
                while(!stk.empty()&& prec(s[i])<=prec(stk.top())){
                    ans+=stk.top();
                    stk.pop();
                }
                stk.push(s[i]);
            }
        }

    }
    while (!stk.empty())
    {
        ans+=stk.top();
        stk.pop();
    }
    cout<<ans;

}