/*Problem Description:
You have been given a singly linked list of integers along with an integer 'N'.
Write a function to append the last 'N' nodes towards the front of the singly linked list 
and returns the new head to the list.*/
#include<iostream>
#include <cstddef>
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

int lenght (Node* head)
{
    int count = 0;
    Node* current = head;
    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}

Node* appendToLast(Node* head ,int position){
  int len = lenght(head);
  int count = len- position;
  Node* temp = head;
  for(int i =1 ; i < count; i++ ){
    temp= temp->next;
  }
  
  Node* h2 = temp->next;
  temp->next =NULL;
  Node* temp2 = h2;
  while(temp2->next!= NULL){
    temp2 = temp2 ->next;
  }
  temp2->next =head;
  return h2;
}