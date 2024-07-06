#include<iostream>
#include<queue>
#include<bits/stdc++.h>
using namespace std;

void heapify(vector<int>&arr,int n,int i){
    int largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n && arr[largest]<arr[left]){
        largest=left;
    }
    if(right<n && arr[largest]<arr[right]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[largest],arr[i]);
        heapify(arr,n,largest);
    }
}

int main(){
    vector<int>arr{1,2,3,4,5};
    int n=arr.size();
    for(int i=n/2;i>=0;i--){
        heapify(arr,n,i);
    }
    for(auto x:arr){
        cout<<x<<" ";
    }
    
}