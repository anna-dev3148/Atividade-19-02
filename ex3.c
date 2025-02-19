#include <stdio.h>

int main(void) {
  float altura;
  float peso;
  float IMC ;
  printf("Digite seu peso: ");
  scanf ("%f" , &peso);
  
  printf("Digite seu altura: ");
  scanf ("%f" , &altura);
  
   IMC = peso / (altura*altura);
   printf("Seu IMC será: %f", IMC);
  return 0;
}