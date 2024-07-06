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

Node* build(vector<int>&arr){
    Node* root=new Node(arr[0]);
    queue<Node*>q;
    q.push(root);
    int i=1;
    while(!q.empty()){
        Node* curr=q.front();
        q.pop();
        if(arr[i]!=-1){
            curr->left=new Node(arr[i]);
            q.push(curr->left);
        }
        i++;
        if(arr[i]!=-1){
            curr->right=new Node(arr[i]);
            q.push(curr->right);
            i++;
        }
    }
    return root;
}
int main(){
    string s;
    getline(cin,s);
    istringstream iss(s);
    string value;
    vector<int>arr;
    while(iss>> value){
        if(value=="null"){
            arr.push_back(-1);
        }
        else{
            arr.push_back(stoi(value));
        }
    }
    Node* root=build(arr);
    beautifuldisplay(root,0);
}