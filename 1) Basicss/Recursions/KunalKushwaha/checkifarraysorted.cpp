#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(vector<int>arr,int i,int n){
    if(i>n){
        return true;
    }
    if(arr[i]>arr[i+1]){
        return false;
    }
    return check(arr,i+1,n);
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
    if(check(arr,0,a)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

}