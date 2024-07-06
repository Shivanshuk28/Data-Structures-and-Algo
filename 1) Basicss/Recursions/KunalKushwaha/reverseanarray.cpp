// reverse an array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void reverese(int n,int i,vector<int>&arr){
    if(i==n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverese(n,i+1,arr);
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
    reverese(a,0,arr);
    for(auto x:arr){
        cout<<x<<" ";
    }
    

}