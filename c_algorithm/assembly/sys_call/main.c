
/*---------------------------------*/
/*   c + assembly sample program   */
/*---------------------------------*/

#include <stdio.h>    /* for scanf() */



extern void _asm_printf(char *str, int len);
extern void _asm_exit(void);
extern int _prime_num(int num);



int main() {
  int num, flag;

  
  _asm_printf("welcome to my code\n", 19);
  _asm_printf("This sentence is not used <stdio.h>'s printf()\n\n", 48);

  
  /* prime number judgment */
  _asm_printf("Input: ", 7);
  scanf("%d", &num);
  
  flag = _prime_num(num);
  if(flag == 1) {
    _asm_printf("This is not prime number\n", 25);
  }else{
    _asm_printf("This is prime number\n", 21);
  }
  
  _asm_exit();
}
