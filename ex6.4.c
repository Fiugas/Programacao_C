#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 6.4
int fatorial(int num);
int main()
{
	//begin_inputs
int numero;
printf("Este programa calcula o fatorial de um numero.\n\n");
printf("Introduza um numero: ");
scanf("%d", &numero);
	//end_inputs
printf("Fatorial de %d: %d", numero, fatorial(numero) );

	return 0;
}
int fatorial (int num)
{
  int auxiliar = 1;
  for ( int i = 1; i <= num; i++)
  {
  auxiliar = auxiliar * i;

  }
  return auxiliar;
}
