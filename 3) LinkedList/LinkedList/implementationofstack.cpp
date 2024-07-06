#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* link;

    Node(int n){
        this->data=n;
        this->link=NULL;
    }
};
class Stack{
    Node* top;
    public:
        Stack(){
            top=NULL;
        }


        void push(int data){
            Node* temp=new Node(data);
            if(!temp){
                cout<<"STACK OVERFLOW"<<endl;
            }
            temp->data=data;
            temp->link=top;
            top=temp;
            
        }

        bool isempty(){
            return (top==NULL);

        }
        int peek(){
            if(!isempty()){
                return top->data;
            }
            else{
                exit(1);
            }
        }
        void pop(){
            Node* temp;
            if(isempty()){
                cout<<"STACK IS UNDERFLOW";
            }

            else{
                temp=top;
                top=top->link;
                free(temp);

            }
        }
        void display(){
            Node* temp;
            if(top==NULL){
                cout<<"STACK UNDERFLOW";
            }
            else{
                temp=top;
                while(temp!=NULL){
                    cout<<temp->data<<"->";
                    temp=temp->link;
                }
            }
            cout<<endl;
        }
};

int main(){

    Stack s;
    s.push(11);
    s.push(10);
    s.push(9);
    s.push(8);
    s.display();
    s.pop();
    s.display();
    s.pop();
    s.display();

}