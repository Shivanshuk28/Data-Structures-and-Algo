#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class binary{
    public:
    int data;
    binary* left;
    binary* right;
    binary(int val): data(val),left(NULL), right(NULL){};
};

vector<int> iterativeInoder(binary* root){
    stack<binary*>stk;
    vector<int>ans;
    while(true){
        if(root!=NULL){
            stk.push(root);
            root=root->left;
        }
        else{
            if(stk.empty()){
                return ans;
            }
            root=stk.top();
            stk.pop();
            ans.push_back(root->data);
            root=root->right;
        }
    }
    return ans;
}

int main(){
    binary* root=new binary(20);
    root->left=new binary(10);
    root->right=new binary(30);
    root->left->left=new binary(5);
    root->left->right=new binary(15);
    root->right->left=new binary(25);
    root->right->right=new binary(35);
    // preorder(root);

    vector<int>ans=iterativeInoder(root);
    for(auto x:ans){
        cout<<x<<" ";
    }
}