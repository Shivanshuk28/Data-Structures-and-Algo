#include<iostream>
#include<bits/stdc++.h>
// to find the largest word in a string
using namespace std;
// void largest(const string&str)


void largest(string input,string& maxword){
    int i=0,j=0;
    // string str="hi my name is shivanshu";
    int strlenn=input.length();
    int max_len=0;
    int max_start=0;
    while(j<=strlenn){
        if(j<strlenn && input[j]!=' '){
            j++;
        }
        else{ 
            int curr_len=j-i;
            if(curr_len>max_len){
                max_len=curr_len;
                max_start=i;
            }
            j++;
            i=j;
        }
        maxword=input.substr(max_start,max_len);
    }
}
int main(){
    string input="hi my name is shivansh djsndjbsjfbjsbfjbu";
    string maxword;
    largest(input,maxword);
    cout<<"Max word is "<<maxword;
    
}
// int summ(vector<int>arr,int size,int targetsum){
//     int count=0;
//     for(int i=0;i<size;i++){
//         for(int j=i+1;j<size;j++){
//         if (arr[i]+arr[j]==targetsum){
//             count++;
//         }
//         }
//     }
//     return count;
// }


// int main(){
//     vector<int>arr;
//     int n;
//     cin>>n;

//     //input
//     for(int i=0;i<n;i++){
//         int num;
//         cin>>num;
//         arr.push_back(num);
//     }
//     //method call
//     int countt=summ(arr,n,5);
//     cout<<countt;

// }




