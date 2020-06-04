#include <stdio.h>


struct Data {
  int id;
  char *name;
};


int main() {
  struct Data list[4] = {{0, "Kameda"},
			 {1, "Ono"},
			 {2, "Iwashita"},
			 {3, "Aida"}};

  for(int i = 0; i < 4; i++) {
    printf("%s\n", list[i].name);
  }
}
