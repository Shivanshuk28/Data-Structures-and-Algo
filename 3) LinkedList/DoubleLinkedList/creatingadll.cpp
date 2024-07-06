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
Node *deletehead(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return NULL;
    }
    // Node* newhead=head->next;
    // newhead->back=nullptr;
    // head->next=nullptr;
    // return newhead;

    // OR

    Node *prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}

Node *deletetail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        return nullptr;
    }
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;
    tail->back = nullptr;
    prev->next = nullptr;
    return head;
}
Node *deletek(Node *head, int k)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    int count = 0;
    Node *temp = head;
    while (temp)
    {
        count++;
        if (count == k)
        {
            break;
        }
        temp = temp->next;
    }
    Node *prev = temp->back;
    Node *front = temp->next;
    if (prev == nullptr && front == nullptr)
    {
        delete temp;
        return nullptr;
    }
    else if (prev == nullptr)
    {
        return deletehead(head);
    }
    else if (front == nullptr)
    {
        return deletetail(head);
    }
    prev->next = front;
    front->back = prev;
    temp->back = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}

void deletenode(Node* node){
    Node* prev=node->back;
    Node* front=node->next;
    if(front==nullptr){
        prev->next=nullptr;
        node->back=nullptr;
        delete node;
        return;
    }
    prev->next=front;
    front->back=prev;
    node->next=nullptr;
    node->back=nullptr;
    free(node);
    return;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    Node *head = creatingadll(arr);
    printt(head);
    deletenode(head->next);
    printt(head);
}
