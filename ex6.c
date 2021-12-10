#include <stdio.h>

int main()
{
  int astericos;
  printf("Definas quantos astericos que quer: ");
  scanf("%d", &astericos );

  while (astericos > 0 )
  {
    printf("*");
    astericos = astericos - 1;
  }
}
