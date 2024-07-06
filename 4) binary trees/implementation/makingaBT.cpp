
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class BinaryTree{
    public:
    int value;
    BinaryTree* left;
    BinaryTree* right;
    BinaryTree(int data){
        left=NULL;
        right=NULL;
        value=data;
    }
};


void populate(BinaryTree* node){
    cout<<"DO YOU WANT TO enter left of "<<node->value<<endl;
    bool left;
    cin>>left;
    if(left){
        cout<<"ENTER THE VALUE OF LEFT NODE"<<endl;
        int value;
        cin>>value;
        node->left=new BinaryTree(value);
        populate(node->left);
    }

    cout<<"DO YOU WANT TO enter right of"<<node->value<<endl;
    bool right;
    cin>>right;
    if(right){
        cout<<"ENTER THE VALUE OF right NODE"<<endl;
        int value;
        cin>>value;
        node->right=new BinaryTree(value);
        populate(node->right);
    }

}

void display(BinaryTree* node){
    if(node==NULL){
        return;
    }
    cout<<node->value<<" ";
    display(node->left);
    display(node->right);
}

void beautifuldisplay(BinaryTree* node,int level){
    if(node==NULL){
        return;
    }
    beautifuldisplay(node->right,level+1);
    if(level!=0){
        for(int i=0;i<level-1;i++){
            cout<<"|\t\t";
        }
        cout<<"|------->"<<node->value<<endl;
    }
    else{
        cout<<node->value<<endl;;
    }
    beautifuldisplay(node->left,level+1);
    
}

int main(){
    cout<<"EnTER THE ROOT NODE:"<<endl;
    int value;
    cin>>value;
    BinaryTree* root=new BinaryTree(value);
    populate(root);
    display(root);
    cout<<endl;
    beautifuldisplay(root,0);


}