#include<bits/stdc++.h>
using namespace std;

class Tree{
    public:
    int data;
    Tree* left;
    Tree* right;

    Tree(int d):data(d),left(NULL),right(NULL){};
};
Tree* build(vector<int>& arr,Tree* root,int i){
    int n = arr.size();
    if(i<n){
        Tree* temp=new Tree(arr[i]);
        root=temp;
        root->left=build(arr,root->left,2*i+1);
        root->right=build(arr,root->right,2*i+2);
    }
    return root;
}

void beautifuldisplay(Tree* node,int level){
    if(node==NULL){
        return;
    }
    beautifuldisplay(node->right,level+1);
    if(level!=0){
        for(int i=0;i<level-1;i++){
            cout<<"|\t\t";
        }
        cout<<"|------->"<<node->data<<endl;
    }
    else{
        cout<<node->data<<endl;;
    }
    beautifuldisplay(node->left,level+1);
    
}


void inorder(Tree* root) {
    if (root) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}
int main(){
    vector<int>arr{9,8,7,6,5,3,2};
    Tree* root=NULL;
    root=build(arr,root,0);
    inorder(root);
    cout<<endl;
    beautifuldisplay(root,0);
}





