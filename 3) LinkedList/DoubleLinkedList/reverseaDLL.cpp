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

Node* reverseadll(Node* head){
    Node* current=head;
    Node* last=NULL;
    while(current){
    last=current->back;
    current->back=current->next;
    current->next=last;
    current=current->back;
    }
    return last->back;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    Node *head = creatingadll(arr);
    printt(head);
    // Node* head2=insertbeforekthnode(head,100,3);
    // printt(head2);
    // beforegivennode(head->next,99);
    Node* head3=reverseadll(head);
    printt(head3);
}
