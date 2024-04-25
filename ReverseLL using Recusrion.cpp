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

Node* reverseLinkedList(Node* head){
   if(head == NULL || head->next == NULL){
     return head ;
   }
   // Assuming it will return us the reverse LinkedList
   Node* smallAns = reverseLinkedList(head->next);
   // Traversing to reach the Last elemet of recieved LL
   // and Attach our first elemet to  the last of recieved LL
   Node* temp = smallAns;
   while(temp->next!=NULL){
     temp=temp->next;
   }
   temp->next= head;
   head->next =NULL;
   return smallAns;
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