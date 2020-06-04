#include <stdio.h>
#include <string.h>


struct Data {
  int id;
  char *name;
};


void search(struct Data list[], char *key) {
  for(int i = 0; i < 4; i++) {
    if(strcmp(list[i].name, key) == 0) {
      printf("Index: %d\n", list[i].id);
      return;
    }
  }
  printf("Not found\n");
  return;
}


int main() {
  struct Data list[4] = {{0, "Kameda"},
			 {1, "Ono"},
			 {2, "Iwashita"},
			 {3, "Aida"}};
  char key[20];

  printf("Name: ");
  scanf("%s", key);

  search(list, key);
  
  return 0;
}


