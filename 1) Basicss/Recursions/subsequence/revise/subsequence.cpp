#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void subseq(int index,vector<int>&arr,vector<int>&ans,int n){
    if(index==n){
        for(auto x:ans){
            cout<<x<<" "; 
        }
        if(ans.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[index]);
    subseq(index+1,arr,ans,n);
    ans.pop_back();
    subseq(index+1,arr,ans,n);
}

int main(){
    vector<int>arr{1,2,3};
    int n=arr.size();
    vector<int>ans;
    subseq(0,arr,ans,n);

}