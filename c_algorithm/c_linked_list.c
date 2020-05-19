#include <stdio.h>
#include <stdlib.h>


/* circularly linked list */

/*-----------------------------*/
/*  how to detect memory leak  */
/*-----------------------------*/
/* compile with the following options         */
/* -fsanitize=address -fno-omit-frame-pointer */



typedef struct Node_ {
  int data;
  struct Node_ *next_node;
}Node;



void init_node(Node *node, Node *root, int data);
void create_list(Node *node, Node *root, int data);
void show_list(Node *node, int num);
void free_list(Node *node, Node *root);



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
      init_node(root, root, data);
    }else{
      create_list(root, root, data);
    }
  }

  show_list(root, num);

  free_list(root, root);
}



void init_node(Node *node, Node *root, int data) {
  node->data = data;
  node->next_node = root;
}



void create_list(Node *node, Node *root, int data) {
  if(node->next_node == root) {
    node->next_node = (Node *)malloc(sizeof(Node));
    init_node(node->next_node, root, data);
  }else{
    create_list(node->next_node, root, data);
  }
}



void show_list(Node *node, int num) {
  for(int i = 0; i < num * 2; i++) {
    printf("%d\n", node->data);
    node = node->next_node;
  }
} 



void free_list(Node *node, Node *root) {
  if(node->next_node == root) {
    printf("free %d\n", node->data);
    free(node);
    return;
  }
  free_list(node->next_node, root);
  free(node);
}
