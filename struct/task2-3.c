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
  struct Data tmp;

  for(int i = 0; i < 4; i++) {
    for(int j = i + 1; j < 4; j++) {
      if(strcmp(list[i].name, list[j].name) > 0) {
	tmp = list[i];
	list[i] = list[j];
	list[j] = tmp;
      }
    }
  }

  for(int i = 0; i < 4; i++) {
    printf("%d: %s\n", list[i].id, list[i].name);
  }
    
  return 0;
}
