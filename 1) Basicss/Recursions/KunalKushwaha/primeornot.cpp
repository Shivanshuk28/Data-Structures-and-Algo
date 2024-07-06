// prime or not

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime(int n,int i){
    if(i>=n){
        return true;
    }
    else if(n%i!=0){
        prime(n,i+1);
    }
    else{
        return false;   
    }
        
}

int main(){
    int a;
    cin>>a;
    if(prime(a,2)){
        cout<<"yess";
    }
    else{
        cout<<"NO";
    }





}