#include <iostream>
using namespace std;

class Node{
  
  public :
  int data;
  Node * next;
  
  Node(int data){
    this->data = data;
    next = NULL;
  }
}; 

// Reversing LinkedList using iterative Method

Node* reverseLinkedList(Node* head){
  if(head==NULL || head->next == NULL){
    return head;
  }
 Node* prev = NULL;
 Node* next =NULL;
 Node* current =head;
 while(current!=NULL){
   next= current->next;
   current->next =prev;
   prev =current;
   current =next;
 }
 head = prev;
 return head;
}

void print(Node *head){
  if(head==NULL){
    return;
  }
  if(head->next==NULL){
    cout<<head->data<<endl;
  }
  if(head->next!= NULL){
    cout<<head->data<<endl;
    print(head->next);
  }
}

int main(){
  Node n1(10);
  Node * head = &n1;
  Node n2(20);
  n1.next = &n2;
  Node n3(30);
  n2.next= &n3;
  
  Node* newHead =reverseLinkedList(head);
  print(newHead);
}