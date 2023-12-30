#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void selectionsort(vector<int>&arr,int n){
    for(int i=0;i<n;i++){
        int mini=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        swap(arr[i],arr[mini]);
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
    selectionsort(arr,n);
    for(auto x:arr){
        cout<<x<<" ";
    }
}