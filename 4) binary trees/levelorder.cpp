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


vector<vector<int>> level order(binary* root){
    vector<vector<int>>ans;
    if(root==NULL) return ans;
    queue<binary*>q; 
    q.push(root);
    while(!q.empty()){
        vector<int>sm;
        int size=q.size();
        for(int i=0;i<size;i++){
            binary* node=q.front();
            q.pop();
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
            sm.push_back(node->data);
        }
        ans.push_back(sm);
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
    vector<vector<int>>ans;
    ans=levelorder(root);
    for(auto x:ans){
        for(auto xx:x){
            cout<<xx<<" ";
        }
        cout<<endl;
    }
}