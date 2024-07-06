#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d):data(d),left(NULL),right(NULL){};
};
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

Node* buildtree(vector<int>&arr){
    Node* root=new Node(arr[0]);
    queue<Node*>q;
    q.push(root);
    int i=1;
    while(i<arr.size() && !q.empty()){
        Node* curr=q.front();
        q.pop();
        if(arr[i]!=-1){
            curr->left=new Node(arr[i]);
            q.push(curr->left);
        }
        i++;
        if(i<arr.size()&& arr[i]!=-1){
            curr->right=new Node(arr[i]);
            q.push(curr->right);
        }
        i++;
    }
    return root;
}
int main(){
    // vector<int>arr{1,2,-1,3,4,5,6};

    string s;
    getline(cin,s);
    istringstream iss(s);
    vector<int>arr;
    int value;
    while(iss>> value){
        arr.push_back(value);
    }
    Node* root=buildtree(arr);
    beautifuldisplay(root,0);
}