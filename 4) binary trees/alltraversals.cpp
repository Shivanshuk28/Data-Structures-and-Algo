#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class binary{
    public:
        int data;
        binary* left; 
        binary* right;

        binary(int val){
            data=val;
            left=NULL;
            right=NULL;
        }
};

void inordertraversal(binary* root){
    if(root==NULL){
        return;
    }
    inordertraversal(root->left);
    cout<<root->data<<" ";
    inordertraversal(root->right);
}


void preorder(binary* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(binary* root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}


int main(){
    binary* root=new binary(1);
    root->left=new binary(2);
    root->right=new binary(3);
    root->left->left=new binary(4);
    root->left->right=new binary(9);
    root->right->left=new binary(8);
    root->right->right=new binary(10);

    preorder(root);
}