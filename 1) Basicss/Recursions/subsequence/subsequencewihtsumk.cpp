#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printsubs(int index,vector<int> &arr,vector<int> &ans,int n,int sum,int k){
    if(index>=n){
        if(sum==k){
            for(auto x: ans){
            cout<<x<<" ";
            }
            if(ans.size()==0){
                cout<<"{}";
            }
            cout<<endl;
        }
        return;
    }
    ans.push_back(arr[index]);
    sum+=arr[index];
    printsubs(index+1,arr,ans,n,sum,k);
    sum-=arr[index];
    ans.pop_back();
    printsubs(index+1,arr,ans,n,sum,k);

}

int main(){
    vector<int>arr{1,2,3};
    int n=arr.size();
    vector<int>ans;
    int k=3;
    printsubs(0,arr,ans,n,0,k);
    
}