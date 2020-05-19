#include <stdio.h>
#include <stdlib.h>


/* singly linked list */

/*-----------------------------*/
/*  how to detect memory leak  */
/*-----------------------------*/
/* compile with the following options         */
/* -fsanitize=address -fno-omit-frame-pointer */



typedef struct Node_ {
  int data;
  struct Node_ *next_node;
}Node;



void init_node(Node *node, int data);
void create_list(Node *node, int data);
void show_list(Node *node);
void free_list(Node *node);



int main() {
  int num, data;
  Node *root;

  printf("Num of Data: ");
  scanf("%d", &num);

  for(int i = 0; i < num; i++) {
    printf("Input num: ");
    scanf("%d", &data);

    /* allocate new node */
    if(i == 0) {
      root = (Node *)malloc(sizeof(Node));    
      init_node(root, data);
    }else{
      create_list(root, data);
    }
  }

  show_list(root);

  free_list(root);
}



void init_node(Node *node, int data) {
  node->data = data;
  node->next_node = NULL;
}



void create_list(Node *node, int data) {
  if(node->next_node == NULL) {
    node->next_node = (Node *)malloc(sizeof(Node));
    init_node(node->next_node, data);
  }else{
    create_list(node->next_node, data);
  }
}



void show_list(Node *node) {
  while(node != NULL) {
    printf("%d\n", node->data);
    node = node->next_node;
  }
}



void free_list(Node *node) {
  if(node == NULL) return;
  free_list(node->next_node);
  free(node);
}
