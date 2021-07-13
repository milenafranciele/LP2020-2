#include <stdio.h>

int main (void){
  int dia, mes, ano, placa;

  scanf("%i", &dia);
  scanf("%i", &mes);
  scanf("%i", &ano);

  if(ano<2021){
    printf ("NO PRAZO");
  }else{
    scanf("%i", &placa);
    if(placa==1 || placa==2 || placa==3){
    if(dia<=30 && mes<=4 && ano<=2021){
      printf("NO PRAZO");
    }else{
      printf("ATRASADO");
    }
  }

  if(placa==4 || placa==5 || placa==6){
    if(dia<=31 && mes<=5 && ano<=2021){
      printf("NO PRAZO");
    }else{
      printf("ATRASADO");
    }
  }

  if(placa==7 || placa==8){
    if(dia<=30 && mes<=6 && ano<=2021){
      printf("NO PRAZO");
    }else{
      printf("ATRASADO");
    }
  }

  if(placa==9 || placa==0){
    if(dia<=31 && mes<=7 && ano<=2021){
      printf("NO PRAZO");
    }else{
      printf("ATRASADO");
    }
  }
  }
  

return 0;
}