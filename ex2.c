#include <stdio.h>

int main(void) {
  float altura = 1.7;
  float peso = 68.5;
  float IMC = peso / (altura*altura);
  printf("Resultado: %f / (%f*%f) = %f", peso, altura, altura, IMC);
  return 0;
}