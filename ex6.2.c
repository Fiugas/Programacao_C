#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 6.2
int testaTriangulo(float lado1, float lado2, float lado3);
int main()
{
	//begin_inputs
float ladoA, ladoB, ladoC;
printf("Este programa verifique se tres numeros reais podem representar os lados de um triangulo.\n\n");
printf("Insira tres medidas para o triangulo: ");
scanf("%f%f%f", &ladoA, &ladoB, &ladoC);
	//end_inputs
int triangulo;
triangulo = testaTriangulo(ladoA,ladoB,ladoC);
if (triangulo == 1)
{
  printf("\nCom os lados %.1f, %.1f e %.1f podemos formar um triangulo", ladoA, ladoB, ladoC);
}
else
printf("\nCom os lados %.1f, %.1f e %.1f nao podemos formar um triangulo", ladoA, ladoB, ladoC);
	return 0;
}
int testaTriangulo(float lado1, float lado2, float lado3)
{
  if (lado1 < (lado2 + lado3) && lado2 < (lado1 + lado3) && lado3 < (lado1 + lado2))
  {
    return 1;
  }
  else
  return 0;
}
