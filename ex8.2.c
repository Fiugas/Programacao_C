#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 8.2
int main()
{
	//begin_inputs
  char str[20];
  printf("Este programa troca a minusculas por maiusculas.\n\n");
  printf("Escreva algo no maximo 20 letras\n" );
  printf("Escreva uma palavra: ");
  scanf("%s",str);
	//end_inputs
  printf("antes : %s\n", str);
  for (int ll = 0; str[ll] != 0; ll++)
  {
    if (str[ll]>= 97 && str[ll] <= 122)
    {
      str[ll] -= 32;
    }
  }
  printf("depois: %s",str );

	return 0;
}
