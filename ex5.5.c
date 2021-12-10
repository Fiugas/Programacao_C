#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 5.5
int main()
{
	//begin_inputs
int numero;
printf("Este programa calcula a soma do numero indroduzido.\n\n");
printf("Insira um numero: ");
scanf("%d", &numero );
	//end_inputs
  int divisao_inteira, reserva = numero, soma=0;
  if (numero <= 0)
  {
    printf("numero invalido");
  }
    else
    {
      do
      {
        divisao_inteira = reserva % 10;
        soma = soma + divisao_inteira;
        reserva = reserva /10 ;
      }
      while( reserva > 0);
      printf("numero: %d - soma dos digitos: %d", numero, soma );
    }

	return 0;
}
