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

vector<int> iterativePreoder(binary* root){
    stack<binary*>stk;
    vector<int>ans;
    stk.push(root);
    while(!stk.empty()){
        binary* node=stk.top();
        stk.pop();
        ans.push_back(node->data);
        if(node->right!=NULL) stk.push(node->right);
        if(node->left!=NULL) stk.push(node->left);

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

    vector<int>ans=iterativePreoder(root);
    for(auto x:ans){
        cout<<x<<" ";
    }


}