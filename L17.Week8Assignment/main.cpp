#include <iostream>
#include <vector>

using namespace std; 

class Node{
    public:
        int data;
        Node* next;
    
    Node(){
        // cout<<"I am inside default constructor"<<endl;
        this->next = NULL;
    }

    Node(int data){
        // cout<<"I am inside param constructor "<<data<<endl;
        this->data = data;
        this->next = NULL;
    }
};


void printLL(Node* head){
    Node*temp = head;

    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}

int printLLlength(Node* head){
    Node*temp = head;
    int len = 0;
    while(temp != NULL){
        len ++;
        temp = temp->next;
    }

    return len;
}

int main() {
    // Node a;
    Node* first = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    Node* head = first;
    cout<<"Printing Linked List"<<endl;
    printLL(head);
    cout<<printLLlength(head);
}

