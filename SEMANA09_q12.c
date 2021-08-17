#include <stdio.h>

int main(void){
  int vetor[1000], i, j, tamVetor, exc = 0;

  for(i=0; i<1000; i++){
    scanf("%i", &vetor[i]);
    if(vetor[i]<0){
      tamVetor=i;
      break;
    }
  }
  
  for (j=0; j<tamVetor; j++){
    if(vetor[j]>1000){
      exc = 1;
    }
  }

  if(exc==1){
    printf("DEU RUIM");
  }else{
    printf ("TURNO TRANQUILO");
  }
}