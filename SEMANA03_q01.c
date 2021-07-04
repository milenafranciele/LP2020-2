#include <stdio.h>

int main (void){
  int a, b, maior, menor;
  
  scanf("%i", &a);
  scanf("%i", &b);
  
  if(a>b){
    maior=a; 
    menor=b;
  }
  if(b>a){
    maior=b;
    menor=a;
  }

  printf("%i %i %i %i %i %i", menor-1, menor,menor+1, maior-1, maior,maior+1);

  return 0;

}