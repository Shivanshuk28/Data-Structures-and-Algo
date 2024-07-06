#include<bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
TreeNode* buildtree(TreeNode* root,int val){
    if (root == nullptr) {
        return new TreeNode(val);
    }
    if(val<root->val){
        root->left=buildtree(root->left,val);
    }
    if(val>root->val){
        root->right=buildtree(root->right,val);
    }
    return root;
}
void beautifuldisplay(TreeNode* node,int level){
    if(node==NULL){
        return;
    }
    beautifuldisplay(node->right,level+1);
    if(level!=0){
        for(int i=0;i<level-1;i++){
            cout<<"|\t\t";
        }
        cout<<"|------->"<<node->val<<endl;
    }
    else{
        cout<<node->val<<endl;;
    }
    beautifuldisplay(node->left,level+1);
    
}
void inorderPrint(TreeNode* root) {
    if (!root) return;
    inorderPrint(root->left);
    std::cout << root->val << " ";
    inorderPrint(root->right);
}


int main(){
    vector<int>arr{9,4,2,6,3,0};
    TreeNode* root=new TreeNode(arr[0]);
    for(int i=1;i<arr.size();i++){
        root=buildtree(root,arr[i]);
    }
    inorderPrint(root);
    cout<<endl;
    beautifuldisplay(root,0);
    
}