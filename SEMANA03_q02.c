#include <stdio.h>

int main(void){
  int a,b,c, primeiro, segundo, terceiro;

  scanf("%i", &a);
  scanf("%i", &b);
  scanf("%i", &c);

  if(a>b && a>c){
    if(a>b+c){
      printf("Candidato A");
    }else{
      printf("SEGUNDO TURNO");
    }
  }

  if(b>a && b>c){
    if(b>a+c){
      printf("Candidato B");
    }else{
      printf("SEGUNDO TURNO");
    }
  }

  if(c>a && c>b){
    if(c>a+b){
      printf("Candidato C");
    }else{
      printf("SEGUNDO TURNO");
    }
  }

return 0;
}