#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 5.4
int main()
{
	//begin_inputs
int total_numeros, num_inicial;
printf("Este programa serve para ver os n primeiros numeros inteiros que sejam multiplos de 3, mas nao de 5.\n\n" );
printf("Insira quantos multiplos quer: " );
scanf("%d", &total_numeros );
printf("Poe um numero por queres comecar: ");
scanf("%d",& num_inicial);
	//end_inputs
  int  contador = 1;
  printf("total_numero: %d - num_inicial: %d - resultado: ", total_numeros, num_inicial);
   while (contador <= total_numeros )
    {
      if ((num_inicial % 3 ) == 0 && (num_inicial % 5 ) != 0)
      {
        printf("%d ", num_inicial );
        contador = ++contador;
        /*printf("contador %d ", contador );*/
      }
      num_inicial = num_inicial + 1;
    }
	return 0;
}
