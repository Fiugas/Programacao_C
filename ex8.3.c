#include <stdio.h>
#include <string.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 8.3

int meu_strlen(char string[]);
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
  printf("Este programa le o tamanho da string.\n\n");
  printf("Escreva algo no maximo 20 letras\n" );
  printf("Insira uma palavra:");
  le_string(str,22);

	//end_inputs

  printf("string: %s\n", str);
  printf("tamanho(strlen): %d\n",strlen(str));
  printf("tamanho(minha funcao): %d",meu_strlen(str));

	return 0;
}
 int meu_strlen(char string[])
{
  int kk=0;
  for (int ll = 0; string[ll] != 0; ll++) {
    kk +=1;
  }
  return kk;
}
