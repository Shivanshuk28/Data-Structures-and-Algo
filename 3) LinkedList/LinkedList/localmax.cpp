#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
    }

};
// this is converting an array to LL
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
}

int main(){

    //main exapmle of creating a pointer and accesing its values.

    vector<int>arr{5,3,1,2,5,1,2};
    Node* head=convertarrtoLL(arr);
    printt(head);


}