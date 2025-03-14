#include <stdio.h>

int main(){
  int num1, num2, soma;
  
  printf("Escreva o primeiro numero: ");
  scanf("%d", &num1);
  
  printf("Escreva o primeiro numero: ");
  scanf("%d", &num2);
  
  soma = num1 + num2;
  
  if(soma > 10){
      printf("A soma dos dois numeros e: %d", soma);
  }else{
      printf("A soma e menor que 10!");
  }
  
    return 0;
}
