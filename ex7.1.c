#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 7.1
int main()
{
	//begin_inputs
const int tamanho = 10;
int dados[tamanho];
int contador;
printf("Este programa faz a media dos numeros intruduzidos.\n\n");
printf("Introduza 10 numeros a sua escolha.\n");
for (contador = 0; contador < tamanho; contador++)
{
  printf("Introduza uma numero: ");
  scanf("%d", &dados[contador]);
}
	//end_inputs
  float divisao;
  int ll;
  float acumulador = 0;
  printf("numeros introduzidos: ");

  for (ll = 0; ll < tamanho; ll++)
  {
  printf("%d ", dados[ll]);
  acumulador =acumulador + dados[ll];
  }
  divisao = acumulador / tamanho;

  printf("- media: %.1f",divisao);


	return 0;
}
