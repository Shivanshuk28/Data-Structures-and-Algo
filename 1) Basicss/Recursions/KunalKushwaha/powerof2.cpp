#include<iostream>
#include<bits/stdc++.h>

using namespace std;
bool powerof2(int n){
    if(n==1){
        return true;
    }
    if(n%2==0){
        return powerof2(n/2);
    }
    else{
        return false;
    }

}


int main(){
    // enter number
    int a;
    cin>>a;
    if(powerof2(a)) cout<<"yes";
    else{
        cout<<"NO";
    }
    
}