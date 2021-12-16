#include <stdio.h>
#include <string.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 8.1

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
  char str1[22];
  char str2[22];
  printf("Este programa troca uma string com outra .\n\n");
  printf("Escreva algo no maximo 20 letras\n" );
  printf("primeiro string: ");
  le_string(str1, 22);
  printf("segundo string: ");
  le_string(str2,22);
	//end_inputs
  char troca1[22];
  char troca2[22];
  strcpy(troca2, str1);
  strcpy(troca1, str2);
printf("primeiro string: %s - segundo string: %s\n",str1,str2 );
printf("apos a troca:\n");
printf("primeiro string: %s - segundo string: %s",troca1,troca2 );
	return 0;
}
