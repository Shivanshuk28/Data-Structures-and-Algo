#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int d){
        data=d;
        left=NULL;
        right=NULL;
    }
};

Node* insertIntoBST(Node* &root,int data){
    if(root==NULL){
        root=new Node(data);
        return root;
    }
    if(data>root->data){
        root->right=insertIntoBST(root->right,data);
    }
    else{
        root->left=insertIntoBST(root->left,data);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        insertIntoBST(root,data);
        cin>>data;
    }
}
void beautifuldisplay(Node* node,int level){
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
int main(){
    Node* root=NULL;
    cout<<"Enter the data to create BSt"<<endl;
    takeInput(root);
    beautifuldisplay(root,0);
}