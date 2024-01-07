#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;
    Node(int x, Node *y, Node *z) : data(x), next(y), back(z) {}
    Node(int x) : data(x), next(nullptr), back(nullptr) {}
};

Node *creatingadll(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void printt(Node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
Node* insertbeforehead(Node* head,int val){
    Node* newhead=new Node(val,head,nullptr);
    head->back=newhead;
    return newhead;

}

Node* insertbeforetail(Node* head, int val){
    Node* tail=head;
    while(tail->next!=nullptr){
        tail=tail->next;
    }
    Node* prev=tail->back;
    Node* newnode=new Node(val,tail,prev);
    prev->next=newnode;
    tail->back=newnode;
    return head;
}


Node* insertbeforekthnode(Node* head,int val,int k){
    Node* temp=head;
    int count=0;
    while(temp){
        count++;
        if(count==k){
            break;
        }
        temp=temp->next;
    }
    Node* prev=temp->back;
    if(prev==nullptr){
        insertbeforehead(head,val);
    }
    Node* newnode=new Node(val,temp,prev);
    prev->next=newnode;
    temp->back=newnode;
    return head;
}
void beforegivennode(Node* node,int val){
    Node* prev=node->back;
    // Node* front=node->next;
    Node* newnode=new Node(val,node,prev);
    prev->next=newnode;
    node->back=newnode;
return;
}


int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    Node *head = creatingadll(arr);
    printt(head);
    // Node* head2=insertbeforekthnode(head,100,3);
    // printt(head2);
    beforegivennode(head->next,99);
    printt(head);
}
