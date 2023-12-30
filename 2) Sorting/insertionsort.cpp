#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void insert(vector<int>arr,int i,int n){
    if(i==n){
        return;
    }
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp=arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp;
        j--;
    }
    insert(arr,i+1,n);
}




void insertionsort(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
        
    }
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
    insert(arr,0,n);
    for(auto x:arr){
        cout<<x<<" ";
    }
}