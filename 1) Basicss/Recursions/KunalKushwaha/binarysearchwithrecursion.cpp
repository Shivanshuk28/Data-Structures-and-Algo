// 704. Binary Search



// Recursive Programs to find Minimum and Maximum elements of array


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int binary(vector<int>&arr,int target,int low,int high){
    int mid=low+(high-low)/2;
    if(low>high){
        return -1;
    }
    if(arr[mid]==target){
        return mid;
    }
    if(arr[mid]>target){
        return binary(arr,target,low,mid-1);
    }
    if(arr[mid]<target){
        return binary(arr,target,mid+1,high);
    }
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
    int target;
    cin>>target;
    int ans=binary(arr,target,0,arr.size()-1);
cout<<"ans is"<<ans;

    


}