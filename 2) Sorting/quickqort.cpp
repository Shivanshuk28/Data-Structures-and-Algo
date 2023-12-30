#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int func(vector<int>&arr,int low,int high){
    int i=low;
    int j=high;
    int pivot=arr[low];
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[j],arr[low]);
    return j;
}
void quicksort(vector<int>&arr,int low,int high){
    if(low<high){
        int partition=func(arr,low,high);
        quicksort(arr,low,partition-1);
        quicksort(arr,partition+1,high);
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
    quicksort(arr,0,n-1);
    for(auto x:arr){
        cout<<x<<" ";
    }
}