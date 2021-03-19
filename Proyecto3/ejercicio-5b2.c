//5b2
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

int main(void) {
  
  int x,i;
  int res;
  
  printf("Ingrese el valor de x:");
  scanf("%d", &x);

  printf("Ingrese el valor de i:");
  scanf("%d", &i);

  printf("Ingrese el valor de res:");
  scanf("%d", &res);

  i=2;
  res=true;
  
 while (i<x && res){
   res= res && x%i != 0;
   i=i+1;
   printf("x= %d, i=%d, res=%d\n",x,i,res);
 }
  


  return 0;
}

/*Input: 
(x → 5, y → 0, i → 0) 
 
Luego de la iter.1: 
(x → 5, i→ 3, res → 1) 

Luego de la iter.2: 
(x → 5, i → 4, i → 1) 

Luego de la iter.3: 
(x → 5, y → 5, i → 1) */