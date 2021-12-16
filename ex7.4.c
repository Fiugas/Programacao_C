#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 7.4


void desloca_direita(int a[], int tam);
void imprime(int a[], int tam);

int main()
{
	//begin_inputs
  int meuVector[] = {4, 2, 0, 3, 1};
  const int tamanho = 5;
  printf("Este programa \n\n");
	//end_inputs

  imprime(meuVector,tamanho);

  	return 0;
  }

  void desloca_direita(int a[], int tam)
  {
      int auxiliar =a[tam - 1],ll;
      for (int ll = tam -1; ll > 0; ll--) {
        a[ll] = a[ll -1];

      }
      a[0]= auxiliar;
  }

void imprime(int a[], int tam)
{
  printf("antes : ");
  for (int kk = 0; kk < tam; kk++)
  {
    printf(" %d ", a[kk] );
  }
  printf("\ndepois: " );
  desloca_direita(a,tam);
  for ( int kk = 0; kk < tam; kk++)
  {
      printf(" %d ", a[kk] );
  }

}
