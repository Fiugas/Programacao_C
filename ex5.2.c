#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 5.2
int main()
{
	//begin_inputs
int A;
int B;
printf("Este programa apresenta o produto entre dois numeros\n\n");
printf("Escreva um numero: ");
scanf("%d",&A);
printf("Escreva um numero: ");
scanf("%d", &B );
	//end_inputs
int acumulador = 1;
if (A > B)
{
 printf("entrada invalida" );
}
  else
  {
    for ( int contador = A; contador <= B; contador++ )
    {
      acumulador = acumulador * contador;
    }
    printf("A: %d - B: %d - produto: %d",A,B,acumulador );
  }
  return 0;
}
