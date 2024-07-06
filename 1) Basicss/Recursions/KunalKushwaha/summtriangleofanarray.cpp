#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int reverese(int n,int rev){
    if(n==0){
        return rev;
    }
    rev=rev*10+n%10;
    reverese(n/10,rev);
}

int main(){
    // enter number
    vector<int>arr{1,2,3,4,5};
    int n=arr.size();
    for(int i=0;i<n;i++){
        
    }

}