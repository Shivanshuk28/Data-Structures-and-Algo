#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sumk(int index,vector<int>&arr,vector<int>&ans,int cursum,int n,int target){
    if(index==n){
        if(cursum==target){
            for(auto x:ans){
                cout<<x<<" ";
            }
            return true;
        }
        return false;
    }
    ans.push_back(arr[index]);
    cursum+=arr[index];
    if(sumk(index+1,arr,ans,cursum,n,target)==true){
        return true;
    };
    cursum-=arr[index];
    ans.pop_back();
    if(sumk(index+1,arr,ans,cursum,n,target)==true){
        return true;
    };
    return false;
}

int main(){
    vector<int>arr{1,2,3};
    int n=arr.size();
    vector<int>ans;
    int target=5;
    int cursum=0;
    sumk(0,arr,ans,cursum,n,target);

}