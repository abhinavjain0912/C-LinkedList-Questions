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

Node* insertNode(Node *head,int data, int position){
  Node *newNode = new Node(data);
  int coun = 0;
  Node *temp =head ;
  
  if(position==0){
    newNode->next= head;
    head =newNode;
    return head;
  }
  while(temp!=NULL && coun< (position -1)){
    temp = temp->next;
    coun++;
  }
  if(temp!=NULL){
 Node * a = temp->next;
 temp->next = newNode;
 newNode->next = a;
}
}


int main() 
{
    Node n1(10);
    Node *head = &n1;
    Node n2(20);
    n1.next = &n2;
    Node n3(30);
    n2.next= &n3;
    
    print(head);
    
    insertNode(head,40,1);
    cout<<"After Insertion"<<endl;
    print(head);
    
}