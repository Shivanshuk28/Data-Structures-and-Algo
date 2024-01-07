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
Node* delete_head(Node* head){
    if(head==nullptr || head->next==nullptr){
        return nullptr;
    }
    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}
Node* remove_tail(Node* head){
    if(head==nullptr || head->next==nullptr){
        return nullptr;
    }
    Node* temp=head;
    while(temp->next->next!=nullptr){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;    
    return head;
}
Node* delete_by_position(Node* head,int k){
    if(head==nullptr) return head;
    if(k==1){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    int count=0;
    Node* prev=nullptr;
    Node* temp=head;
    
        while(temp!=nullptr){
            count++;
            if(count==k){
                prev->next=temp->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
        
    }

Node* delete_by_value(Node* head,int ele){
    if(head==nullptr) return head;
    if(head->data==ele){
        Node* temp=head;
        head=head->next;
        delete temp;
        return head;
    }
    Node* prev=nullptr;
    Node* temp=head;
    
        while(temp!=nullptr){
            if(temp->data==ele){
                prev->next=temp->next;
                delete temp;
                break;
            }
            prev=temp;
            temp=temp->next;
        }
        return head;
        
    }
int main(){
    vector<int> arr{1,2,99,3,4,5};
    Node* head=convertarrtoLL(arr);
    cout<<head->data<<endl;
    printt(head);
    // head=delete_head(head);
    // printt(head);
    // head=remove_tail(head);
    // printt(head);
    head=delete_by_value(head,99);
    printt(head);

}