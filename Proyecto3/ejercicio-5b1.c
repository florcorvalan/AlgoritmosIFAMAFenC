//5b1

#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int main(void) {
  
  int x,y,i;
  
  printf("Ingrese el valor de las variables:");
  scanf("%d %d %d", &x, &y, &i);

  i=0;
  
 while (x >= y){
   x=x-y;
   i=i+1;
   printf("x= %d, y=%d, i=%d\n",x,y,i);
 }
  


  return 0;
}

/* Input: 
(x → 13, y → 3, i → 0) 

Luego de la iter.1: 
(x → 10, y → 3, i → 1) 


Luego de la iter.2: 
(x → 7, y → 3, i → 2) 
 

Luego de la iter.3: 
(x → 4, y → 3, i → 3) 

 
Luego de la iter.4: 
(x → 1, y → 3, i → 4) */