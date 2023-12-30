#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rbubble(vector<int>&arr,int i){
    if(i==0){
        return;
    }
    int j=0;
    while(j<i){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
        j++;
    }
    rbubble(arr,i-1);


}

void bubblesort(vector<int>&arr,int n){
    for(int i=n-1;i>0;i--){
        for(int j=0;j<i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
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
    rbubble(arr,n-1);
    for(auto x:arr){
        cout<<x<<" ";
    }
}