#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&arr,int n,int i){
    int parent=(i-1)/2;
    if(parent>=0 && arr[i]>arr[parent]){
        
            swap(arr[i],arr[parent]);
            heapify(arr,n,parent);
    }
}

void insert(vector<int>&arr,int& n, int key){
    n=n+1; 
    arr[n-1]=key;
    heapify(arr,n,n-1);
}
void printt(vector<int>&arr){
    for(auto x:arr){
        cout<<x<<" ";
    }
}

int main(){
    vector<int>arr{4,5,6,7,8,9};
    int n=arr.size();
    int key=15;
    insert(arr,n,key);
    printt(arr);
}