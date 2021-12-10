#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 7.2
int main()
{
	//begin_inputs
const int num_alunos = 7;
int notas[]={18,10,11,8,7,19,5};
printf("Este programa faz a media dos alunos e indica a maior e a menor nota .\n\n");
	//end_inputs
  float divisao;
  int ll;
  float acumulador = 0;
  int maior = notas[0] ;
  int menor = notas[0] ;
  printf("notas: ");

  for (ll = 0; ll < num_alunos; ll++)
  {
  printf("%d ", notas[ll]);
  acumulador =acumulador + notas[ll];
    if (maior < notas[ll])
    {
      maior = notas[ll];
  }
    if (menor > notas[ll])
    {
      menor = notas[ll];
    }
  }
  divisao = acumulador / num_alunos;

  printf("\nmedia: %.1f - ",divisao);
  printf("maior: %d - " , maior);
  printf("menor: %d", menor );


	return 0;
}
