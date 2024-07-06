// Recursive Programs to find Minimum and Maximum elements of array


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int find(vector<int>&arr,int i,int n,int maxx){
    if(i>n){
        return maxx;
    }
    if(maxx<arr[i]){
        maxx=arr[i];
    }
    
        find(arr,i+1,n,maxx);

    
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
    int maxx=INT_MIN;
int ans=find(arr,0,arr.size(),maxx);
cout<<"ans is"<< ans;

    


}