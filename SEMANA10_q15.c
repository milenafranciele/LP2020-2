#include <stdio.h>

int main(void){
  int n, i, j, matriz[100][100];
  
  scanf("%i", &n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(i==j){
        matriz[i][j]=1;
      }else{
        matriz[i][j]=0;
      }
    }
  }
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
       printf("%i ", matriz[i][j]);
    }
    printf("\n");
  }

}