#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 6.3
int letra (char c);
char minuscula (char c);
int main()
{
	//begin_inputs
char caractere;
printf("Este programa informa se um caractere introduzido pelo utilizador e letra ou numero e se for letra sera convertida em minuscula.\n\n");
printf("Introduza um caractere: ");
scanf("%c", &caractere);
  //end_inputs
  int true_false;
  char caractere2;
  true_false = letra (caractere);
  caractere2 = minuscula (caractere);
  if (true_false == 1)
  {
    printf("caractere %c : letra - minuscula: %c", caractere, caractere2  );
  }
  else
  printf("caractere %c : nao letra",caractere );
	return 0;
}
int letra ( char c)
{
  if (c >= 65 && c <= 90)
  {
    return 1;
  }
  else if ( c >= 97 && c <= 122)
  {
    return 1;
  }
  else
    return 0;
}
char minuscula (char c)
{
  char caractere;
  if (c >= 65 && c <= 90)
  {
    caractere = c + 32;
    return caractere;
  }
  else
  return c;
}
