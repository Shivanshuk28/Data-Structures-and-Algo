#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool ispalind(int n,string &arr,int i){
    if(arr[i]!=arr[n-i-1]){
        return false;
    }
    if(i>=n/2){
        return true;
    }
    ispalind(n,arr,i+1);
}

int main(){
    int n;
    string arr;
    cin>>arr;
    n=arr.size();
    
    if(ispalind(n,arr,0)){
        cout<<"IT IS PALINDROME"<<endl;
    }
    else{
        cout<<"IT IS NOT"<<endl;
    }

}








// bool palindrome(int i,string &s, int n){
//     if(s[i]!=s[n-i-1]){
//         return false;
//     }
//     if (i>=n/2){
//         return true;
//     }
//     palindrome(i+1,s,n);

// }

// int main(){
//     int n;
//     // cin>>n;
//     string s;
//     cin>>s;
//     n=s.size();
//     if(palindrome(0,s,n)){
//         cout<<"PALINDROME";
//     }
//     else{
//         cout<<"NOT";
//     }



// }