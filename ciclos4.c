#include <stdio.h>
int main()
{
  int a;
  for (a = 2; a < 6; a++)
  {
    if (a <4)
    {
      printf("b");
      continue;
    }
    printf("c");
  }
  return 0;
}
