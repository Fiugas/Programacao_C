#include <stdio.h>
//@cikey 2ec04005815a9deb1e74cd9ef4848bee
//@sid 2021155919
//@aid 7.5
int main()
{
	//begin_inputs
  float dados[][2]={ {78, 1.78},
                      {92, 1.80},
                      {60, 1.72},
                      {93, 1.60},
                      {50, 1.75},
                      {80, 1.59} };
   const int num_pessoas = 6;
   printf("Este programa calcula o Indice de Massa Corporal.\n\n");
	//end_inputs
printf("Peso  Alt     IMC   Classificacao");
for (int ll = 0; ll < num_pessoas; ll++)
{
  float imc = dados[ll][0] / (dados[ll][1] * dados[ll][1]);
  printf("\n%.1f %.2f - %.2f - ", dados[ll][0],dados[ll][1],imc );
   if (imc <= 18.5)
   {
     printf("abaixo peso ideal");
   }else if (18.5 < imc && imc <25)
      {
        printf("peso normal");
      }else if (25 <= imc && imc < 30)
        {
          printf("acima peso ideal");
        }else if (30 <= imc && imc < 35)
          {
            printf("obesidade grau I");
          }else if (35 <= imc && imc < 40)
            {
              printf("obesidade grau II");
            }else if (imc >= 40)
              {
                printf("obesidade grau III");
              }
}

	return 0;
}
