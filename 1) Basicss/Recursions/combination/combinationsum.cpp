#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void combinations(int index,vector<int>&arr,vector<int>&ds,int target){
    if(index>=arr.size()){
        if (target==0){
            for(auto x:ds){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(target>=arr[index]){
        ds.push_back(arr[index]);
        combinations(index,arr,ds,target-arr[index]);
        ds.pop_back();
    }
    combinations(index+1,arr,ds,target);
    
}


int main(){
    vector<int>arr{1,2,3};
    int n=arr.size();
    vector<int>ds;
    int target=3;
    combinations(0,arr,ds,target);
    
    
}