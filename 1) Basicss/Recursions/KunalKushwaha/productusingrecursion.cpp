#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int product(int a ,int b,int c){
    if(b==0){
        return c;
    }
    c+=a;
    product(a,b-1,c);

}

int main(){
    // enter number
    int a;
    cin>>a;
    // enter number you want to multiply with
    int b;
    cin>>b;
    int ans=product(a,b,0);
    cout<<ans;





}