#include <stdio.h>

int main (void){
  int a, b, maior, menor, dif;
  
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

  dif=maior-menor;

  if(dif>=3){
    printf("%i %i %i %i %i %i", menor-1, menor,menor+1, maior-1, maior,maior+1);
    } 

  if(dif==2){
    printf("%i %i %i %i %i", menor-1, menor,menor+1, maior,maior+1);
  } 
  
  if(dif==1){
    printf("%i %i %i %i", menor-1, menor, maior,maior+1);
  } 
  return 0;

}