#include<iostream>
#include<bits/stdc++.h>
using namespace std;

string compress(vector<char>& chars) {
        stack<pair<char,int>>stk;
        vector<pair<char,int>>compresschar;
        string compress="";
        for(int i=0;i<chars.size();i++){
            // count=0;
            if(stk.empty() || chars[i]!=stk.top().first){
                stk.push({chars[i],1});
            }
            else{
                stk.top().second++;
            }
        }
        while(!stk.empty()){
            compresschar.push_back({stk.top().first,stk.top().second});
            stk.pop();
        }
        for(int i=compresschar.size()-1;i>=0;i--){
            compress+=compresschar[i].first;
            if(compresschar[i].second>1){
                compress+=to_string(compresschar[i].second);
            }
        }
        return compress;
    }
int main(){
    vector<char>chars={'a','a','b','b','b','c','c','c'};
    string ans=compress(chars);
    cout<<"ans is "<<ans;
    

}

    
