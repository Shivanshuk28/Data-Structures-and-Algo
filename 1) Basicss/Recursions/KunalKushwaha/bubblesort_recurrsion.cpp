#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void bubble(vector<int>&arr, int n){
    if(n==1){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubble(arr,n-1);
}

int main(){
    // enter number
    int a;
    cin>>a; 
    vector<int>arr;
    for(int i=0;i<a;i++){
        int num;
        cin>>num;
        arr.push_back(num);
    } 
    bubble(arr,arr.size());
    for(auto x:arr){
        cout<<x<<" ";
    }



}