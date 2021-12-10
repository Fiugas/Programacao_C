#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 5.3
int main()
{
	//begin_inputs
int numero;
printf("Este programa serve para ver os multiplos positivos inteiros compreendidos entre 1 a 50\n\n");
printf("Insira um numero:");
scanf("%d",&numero);
	//end_inputs
int  contador;
printf("numero: %d - multiplos: ", numero );
  for ( contador = 1; contador <= 50; contador++ )
  {
    if ((contador % numero) == 0)
    {
      printf("%d ", contador );
    }
  }
	return 0;
}
