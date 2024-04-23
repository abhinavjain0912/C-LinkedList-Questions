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
int main() 
{
    Node n1(10);
    Node *head = &n1;
    Node n2(20);
    n1.next = &n2;
    Node n3(30);
    n2.next= &n3;
    
    print(head);
    
}