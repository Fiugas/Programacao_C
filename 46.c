#include <stdio.h>
//@cikey f6d45e0ffd91a7c7e7db59fa637e4d9a
//@sid 2021154569
//@aid 4.6
int main()
{
	//begin_inputs
  int dia_semana, idade;
	//end_inputs
  float preco;
  preco = 10;
  scanf("%d",&dia_semana);
  scanf("%d",&idade);
  if (dia_semana <= 0 || dia_semana > 7)
    printf("dia invalido");
  else{
      switch (dia_semana) {
        case 1:
          if (idade <= 12 || idade >= 65) {
            preco = preco*0.60;
            preco = preco*0.5;
            printf("dia da semana: domingo - idade:%d - preco do ingresso: %.2f euros", idade , preco);
          }
          else{
            if (idade >= 13 && idade <= 20){
              preco = preco*0.75;
              preco = preco*0.50;
              printf("dia da semana: domingo - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
            else{
              preco = preco *0.5;
              printf("dia da semana: domingo - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
          };break;

        case 2:
          if (idade <= 12 || idade >= 65) {
            preco = preco - (preco * 0.40);
            printf("dia da semana: segunda-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
          }
          else{
            if (idade >= 13 && idade <= 20){
              preco = preco - (preco * 0.25);
              printf("dia da semana: segunda-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
            else
              preco = 10;
              printf("dia da semana: segunda-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
        };break;
        case 3:
          if (idade <= 12 || idade >= 65) {
            preco = preco - (preco * 0.40);
            printf("dia da semana: terca-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
          }
          else{
            if (idade >= 13 && idade <= 20){
              preco = preco - (preco * 0.25);
              printf("dia da semana: terca-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
            else{
              preco = 10;
              printf("dia da semana: terca-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
        };break;
        case 4:
          if (idade <= 12 || idade >= 65) {
            preco = preco*0.5;
            preco = preco*0.60;
            printf("dia da semana: quarta-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
          }
          else{
            if (idade >= 13 && idade <= 20){
              preco = preco*0.50;
              preco = preco*0.75;
              printf("dia da semana: quarta-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
            else{
              preco = preco *0.5;
              printf("dia da semana: quarta-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
        };break;
        case 5:
          if (idade <= 12 || idade >= 65) {
            preco = preco*0.5;
            preco = preco*0.60;
            printf("dia da semana: quinta-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
          }
          else{
            if (idade >= 13 && idade <= 20){
              preco = preco*0.50;
              preco = preco*0.75;
              printf("dia da semana: quinta-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
            else{
              preco = preco *0.5;
              printf("dia da semana: quinta-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
        };break;
        case 6:
          if (idade <= 12 || idade >= 65) {
            preco = preco - (preco * 0.40);
            printf("dia da semana: sexta-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
          }
          else{
            if (idade >= 13 && idade <= 20){
              preco = preco - (preco * 0.25);
              printf("dia da semana: sexta-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
            else{
              preco = 10;
              printf("dia da semana: sexta-feira - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
        };break;
        case 7:
          if (idade <= 12 || idade >= 65) {
            preco = preco - (preco * 0.40);
            printf("dia da semana: sabado - idade:%d - preco do ingresso: %.2f euros", idade , preco);
          }
          else{
            if (idade >= 13 && idade <= 20){
              preco = preco - (preco * 0.25);
              printf("dia da semana: sabado - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
            else{
              preco = 10;
              printf("dia da semana: sabado - idade:%d - preco do ingresso: %.2f euros", idade , preco);
            }
          }
        }


      }
      return 0;
    }

//desconto de 40% a idosos com mais de 65 anos e crianças com menos de 12
//jovens entre 13 e 20 há um desconto de 25%
//quartas quintas e domingos é aplicado um desconto de 50%
//preço normal 10euro
//s inválidos de dia da semana ou  idade devem resultar nas mensagens “dia inválido” ou “idade inválida”, respetivamente.
