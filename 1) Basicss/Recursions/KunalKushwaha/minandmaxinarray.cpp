#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxx(int i,int n,vector<int>&arr,int max_ele){
    if(i>=n){
        return max_ele;
    }
    if(arr[i]>max_ele){
        max_ele=arr[i];
    }
    return maxx(i+1,n,arr,max_ele);
}

int minn(int i,int n,vector<int>&arr,int min_ele){
    if(i>=n){
        return min_ele;
    }
    if(arr[i]>min_ele){
        min_ele=arr[i];
    }
    return maxx(i+1,n,arr,min_ele);
} 

int main(){
    int n;
    cin>>n; 
    vector<int>arr;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    // int ans=maxx(0,n,arr);
    int ans=maxx(0,n,arr,INT_MIN);
    cout<<"MAX element is "<<ans;

    int ans2=minn(0,n,arr,INT_MAX);
    cout<<"MAX element is "<<ans2;
}