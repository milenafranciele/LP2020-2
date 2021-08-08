 #include <stdio.h>

 int main(void){
  int num, i;

  scanf("%i", &num);

  for(i=1; i<=num; i++){
    if(i%4==0){
      printf("PIN");
    }
    else{
      printf("%i", i);
    }

    if(i<num){
      printf(",");
    }
  }   
  
 }