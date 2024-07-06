#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printf(int i,vector<int>&arr,vector<int> &ans,int n){
    if(i>=n){
        for(auto x:ans){
            cout<<x<<" ";
        }
        if(ans.size()==0){
            cout<<"{ }";
        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    printf(i+1,arr,ans,n);
    ans.pop_back();
    printf(i+1,arr,ans,n);

}


int main(){
    vector<int>arr;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    // int arr[]={10,9,2,5,3,7,101,18};
    
    vector<int>ans;
    printf(0,arr,ans,n);
}