#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int x,Node* y):data(x),next(y){}
    Node(int x):data(x),next(nullptr){}
};
Node* convertarrtoLL(vector<int>&arr){
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}
void printt(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

Node* insert_head(Node*head, int val){
    Node* newhead=new Node(val,head);
    return newhead;
}

Node* insert_tail(Node*head,int val){
    if(head==nullptr){
        return new Node(val);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* x=new Node(val);
    temp->next=x;
    return head;
}
Node* insert_position(Node*head,int val,int k){
    if(head==nullptr){
        if(k==1){
            return new Node(val);
        }
    }
    if(k==1){
        return new Node(val,head);
    }
    else{
        Node*temp=head;
        int count=0;
        while(temp){
            count++;
            if(count==k-1){
                Node* x=new Node(val);
                x->next=temp->next;
                temp->next=x;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
}

Node* insert_value(Node*head,int val,int k){
    if(head==nullptr){
        if(head->data==k){
            return new Node(val);
        }
    }
    if(head->data==k){
        return new Node(val,head);
    }
    else{
        Node*temp=head;
        while(temp->next!=nullptr){
            if(temp->next->data==k){
                Node* x=new Node(val);
                x->next=temp->next;
                temp->next=x;
                break;
            }
            temp=temp->next;
        }
        return head;
    }
} 

int main(){
    vector<int> arr{1,2,99,3,4,5};
    Node* head=convertarrtoLL(arr);
    cout<<head->data<<endl;
    printt(head);
    head=insert_value(head,100,5);
    printt(head);

}