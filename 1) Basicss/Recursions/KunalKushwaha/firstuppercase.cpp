// First uppercase letter in a string
// 704. Binary Search



// Recursive Programs to find Minimum and Maximum elements of array


#include<iostream>
#include<bits/stdc++.h>
using namespace std;

char isup(string s,int i, int n){
    if(i>n){
        return 'x';
    }
    if(isupper(s[i])){
        return s[i];
    }
    return isup(s,i+1,n);
}


int main(){
    
    string s;
    getline(cin,s);
    char ans=isup(s,0,s.size());
    cout<<ans<<" ";

    


}