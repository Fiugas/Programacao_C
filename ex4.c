#include <stdio.h>
int main()
{
  int f;
  int numero1, numero2, numero3;
  printf("Escolha uma opção\n");
  printf("1-Soma de dois numeros\n");
  printf("2-Verificador se e maior que 100\n");
  scanf("%d",&f );
  switch (f)
  {
    case 1:
    printf("Insira o primeiro numero:");
    scanf("%d", &numero1);
    printf("Insira o segundo numero:");
    scanf("%d", &numero2);
  printf("%d + %d = %d", numero1, numero2, numero1+numero2 ); break;
    case 2:
    printf("Maior que 100\n");
  printf("Intruduz 3 numeros\n");
  scanf("%d%d%d",&numero1,&numero2,&numero3);
    //end_inputs
  if (numero1+numero2+numero3>= 100)
   {
    printf("A soma e maior que 100\n");
  }
    else
    printf("A soma e menor que 100\n"); break;
  }
}
