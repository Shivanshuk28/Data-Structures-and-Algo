#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sumk(int index,vector<int>&arr,vector<int>&ans,int cursum,int n,int target){
    if(index==n){
        if(cursum==target){
            return 1;
        }
        return 0;
    }
    ans.push_back(arr[index]);
    cursum+=arr[index];
    int l=sumk(index+1,arr,ans,cursum,n,target);
    cursum-=arr[index];
    ans.pop_back();
    int r=sumk(index+1,arr,ans,cursum,n,target);
    return l+r;
}

int main(){
    vector<int>arr{1,2,3};
    int n=arr.size();
    vector<int>ans;
    int target=3;
    int cursum=0;
    cout<<sumk(0,arr,ans,cursum,n,target);

}