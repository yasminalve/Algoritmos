//Yasmin Alves
//04.10.2019

#include <stdio.h>

/*9. Fa�a um programa que gere a seguinte s�rie: 10, 20, 30, 40, ..., 990, 1000*/

int main(void) {
  int i; 
  printf("%d", 10);
  for (i=20; i<=1000; i += 10) {
    printf(", %d", i); 
    
  }
  return 0;
}