#include<iostream>
#include<bits/stdc++.h>

using namespace std;
bool powerof3(int n){
    if(n==1){
        return true;
    }
    if(n%3==0){
        powerof3(n/3);
    }
    else{
        return false;
    }
}


int main(){
    // enter number
    int a;
    cin>>a;
    if(powerof3(a)) cout<<"yes";
    else{
        cout<<"NO";
    }
}