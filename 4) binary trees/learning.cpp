#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* buildTree(Node* root){
    int data;
    cout<<"Enter the data";
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left"<<data<<endl;
    root->left=buildTree(root);
    cout<<"Enter data for inserting in right"<<data<<endl;
    root->right=buildTree(root);

    return root;
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
    root=buildTree(root);
    beautifuldisplay(root,0);
    return 0;
}