#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 5.6
int main()
{
	//begin_inputs
int altura;
printf("\nEste programa apresenta um triangulo de Floyd consoante a altura vai aparecer numero abaixo formando um triangulo.\n\n");
printf("Insira a altura do triangulo: ");
scanf("%d", &altura );
	//end_inputs
  int auxiliar = 1;
  for ( int coluna = 1; coluna <= altura; coluna++)
  {
    for (int fileiras = 1;  fileiras <= coluna; fileiras++)
    {
      printf("%2d ", auxiliar);
      auxiliar++;
    }
    printf("\n");
  }
	return 0;
}
