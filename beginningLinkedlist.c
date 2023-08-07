#include<stdio.h>
#include<stdlib.h>

struct Node{
  struct Node * next;
  int data;
};

struct Node * beginingTraversal(struct Node * head , int data){
    struct Node * ptr = malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
}
void linkedList(struct Node * ptr){
  while(ptr!=NULL){
  printf("Elements are %d\n",ptr->data);
  ptr = ptr->next;
  
  }
}
int main(){
  struct Node * head;
  struct Node * second;
  struct Node * third;

  head = malloc(sizeof(struct Node));
  second = malloc(sizeof(struct Node));
  third = malloc(sizeof(struct Node));

  head->data = 7;
  head->next = second;

  second->data = 11;
  second->next = third;

  third->data = 22;
  third->next = NULL;

  linkedList(head);
  head = beginingTraversal(head , 66);
  linkedList(head);  
  return 0;
}
