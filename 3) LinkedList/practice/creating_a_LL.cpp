#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int d):data(d),next(NULL){};
    Node(int d, Node* next1):data(d),next(next1){};
};

Node* converting(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* node=new Node(arr[i]);
        mover->next=node;
        mover=node;
    }
    return head;
}
void printt(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node* delete_by_position(Node* head,int k){
    if(head==NULL){
        return head;
    }
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int count=0;
    // Node* prev=NULL;
    Node* temp=head;
    while(temp){
        count++;
        if(count==k-1){
            temp->next=temp->next->next;
            break;
        }
        temp=temp->next;
    }
    return head;
}
Node* insert(Node* head,int val,int k){
    if(head==NULL){
        return  new Node(val);
    }
    if(head->data==k){
        return new Node(val,head);
    }
    else{
        Node* temp=head;
        while(temp->next){
            if(temp->next->data==k){
                Node* x=new Node(val);
                x->next=temp->next;
                temp->next=x;
                break;
            }
            temp=temp->next;
            return head;
        }
    }
}

int main(){
    vector<int>arr{1,2,3,4,5,6};
    Node* head=converting(arr);
    printt(head);
    cout<<endl;
    int k=6;
    // Node* ans=delete_by_position(head,k);
    // printt(ans);
    cout<<endl;
    Node* ans2=insert(head,99,4);
    printt(ans2);
}
