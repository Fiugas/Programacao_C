#include <stdio.h>
#include <string.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 8.5

int binarioParaDecimal(char binario[]);
void le_string(char str[], int tamanho);
void le_string(char str[], int tamanho)
{
  fgets(str, tamanho, stdin);
  str[strlen(str)-1] = 0;
  return;
}

int main()
{
	//begin_inputs
char str[22];
printf("Este programa coverte de binario para decimal.\n\n");
printf("Escreva um numero binario para ser covertido ate 20 numeros\n" );
printf("Insira um numero binario:");
le_string(str,22);
	//end_inputs
  int = int true_false;
  true_false = binarioParaDecimal(char binario[]);
  if (true_false != 0) {
    printf("binario: %s - decimal: %d",str, binarioParaDecimal(str) );
  }else
  printf("binario: %s - entrada invalida",str );
	return 0;
}
int binarioParaDecimal(char binario[])
{
  for (int ll = 0; binario[ll] != ; ll++)
  {
    if (/* condition */) {
      /* code */
    }
  }
}
