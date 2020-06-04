#include <stdio.h>
#include <string.h>


struct Data {
  int id;
  char *name;
};


int main() {
  struct Data list[4] = {{0, "Kameda"},
			 {1, "Ono"},
			 {2, "Iwashita"},
			 {3, "Aida"}};
  char key[20];
  int i;

  printf("Name: ");
  scanf("%s", key);

  for(i = 0; i < 4; i++) {
    if(strcmp(list[i].name, key) == 0) {
      printf("Index: %d\n", list[i].id);
      break;
    }
  }

  if(i == 4){
    printf("Not found.\n");
  }
  
  return 0;
}
