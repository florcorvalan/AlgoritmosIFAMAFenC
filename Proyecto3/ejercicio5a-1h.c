//5a
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int main(void) {
  
  int i;
  
  printf("Ingrese el valor de i:");
  scanf("%d", &i);
  
 while (i != 0){
   assert(i>=0);
   i=i-1;
   printf("i= %d\n",i);
 }
  


  return 0;
}