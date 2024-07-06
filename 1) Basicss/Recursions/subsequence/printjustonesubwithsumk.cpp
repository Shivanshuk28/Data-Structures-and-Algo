#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool printsubs(int index,vector<int>&arr,int n,vector<int>ds,int k,int sum){
    if(index>=n){
        if(sum==k){
            for(auto x:ds){
                cout<<x<<" ";   
            }
            return true;
        }
        return false;
    }
    
    ds.push_back(arr[index]);
    sum+=arr[index];
    if(printsubs(index+1,arr,n,ds,k,sum)==true){
        return true;
    };
    sum-=arr[index];
    ds.pop_back();
    if(printsubs(index+1,arr,n,ds,k,sum)==true){
        return true;
    };
    return false;
}

int main(){
    vector<int>arr{1,2,3};
    int n=arr.size();
    vector<int>ds;
    int k=3;
    printsubs(0,arr,n,ds,k,0);
    
}