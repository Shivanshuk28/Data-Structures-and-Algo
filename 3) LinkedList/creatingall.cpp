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

//Finding the length of an LL
int lengthofLL(Node* head){
    Node* temp=head;
    int count=0;
    while(temp){
        // cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }

    return count;
}
//searching an element in a array.
int searching(Node* head,int ele){
    Node* temp=head;
    while(temp){
        if(temp->data==ele){
            return 1;
        }
        temp=temp->next;        
    }
    return 0;
}
void printt(Node* head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
}
int main(){

    //main exapmle of creating a pointer and accesing its values.

    vector<int>arr{99,3,2,2,3,4};
    Node* head=convertarrtoLL(arr);
    //Now the head is storing the value of first element that is head.
    // cout<<head->data;
    int length=lengthofLL(head);
    cout<<length<<endl;
    int search=searching(head,24);
    cout<<search<<endl;
    printt(head);
}
