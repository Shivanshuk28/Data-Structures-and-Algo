#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insertion(vector<int>&arr,int i,int n){
    if(i==n){
        return;
    }
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        swap(arr[j],arr[j-1]);
        j--;
    }
    insertion(arr,i+1,n);
    
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
    insertion(arr,0,arr.size());
    for(auto x:arr){
        cout<<x<<" ";
    }



}