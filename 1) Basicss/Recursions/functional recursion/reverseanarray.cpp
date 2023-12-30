#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void swapp(int n,vector<int>&arr,int i){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    swapp(n,arr,i+1);
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

    swapp(n,arr,0);
    for(auto x:arr){
        cout<<x<<" ";
    }
    
}
