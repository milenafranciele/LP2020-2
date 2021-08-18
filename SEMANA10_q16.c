#include <stdio.h>
#include <string.h>

int main(void){
  char frase[]= "IFSULEDUCACAOPUBLICAGRATUITAEDEQUALIDADE", matriz[100][100];
  int i,j,n,c=0,tam;
  tam = strlen(frase);

  scanf("%i", &n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
     matriz[i][j]=frase[c];
     if(c<tam-1){
       c++;
     }else{
       c=0;
     }
    }
  }
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
       printf("%c ", matriz[i][j]);
    }
    printf("\n");
  }
}