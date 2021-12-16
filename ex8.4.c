#include <stdio.h>
#include <string.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 8.4

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
printf("Este programa conta a quantidade de numeros e caracteres de uma string.\n\n");
printf("Escreva algo ate 20 caracteres\n" );
printf("Insira uma palavra:");
le_string(str,22);
	//end_inputs
  int letra = 0;
  int numeros = 0;
  int outros = 0;
  for (int ll = 0; str[ll] != 0; ll++)
  {
    if (str[ll] >= 'A' && str[ll] <= 'Z' ||str[ll] >= 'a' && str[ll] <= 'z' )
    {
      letra +=1;
    }else if (str[ll] >= '0' && str[ll] <= '9')
      {
        numeros += 1;
      }else
        outros += 1;
  }
printf("string: %s\n", str);
printf("letras: %d - numeros: %d - outros: %d", letra, numeros, outros);
	return 0;
}
