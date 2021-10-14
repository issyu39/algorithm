
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  char item;
  struct node *next;
} NODE;

NODE* newnode(){
   NODE *p;
   p = (NODE *)malloc(sizeof(NODE));
   p->next = NULL;
   return p;
}

void add(NODE *p, char c){
  while(p->next != NULL){
    p = p->next;
  }
  p->item = c;
  p->next = newnode();
}

void show(NODE* p){
  while(p->next != NULL){
    printf("%c\n",p->item);
    p = p->next;
  }
}

int main(void) {
  NODE *pointer;
  pointer = newnode();
  add(pointer,'a');
  add(pointer,'b');
  add(pointer,'c');
  show(pointer);
}
