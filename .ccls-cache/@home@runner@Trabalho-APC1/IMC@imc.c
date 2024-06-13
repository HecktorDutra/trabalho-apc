#include <stdio.h>
#include <stdlib.h>

int main() {

  char nome[11];
  
  printf("Qual o seu nome? ");
  int deu_certo = scanf("%s", nome);
  deu_certo = system("clear");
  printf("Ola %s \nBem Vindo(a) a Calculadora de IMC !!!\n", nome);
  
    int opcao = 0;

    while(opcao != 3) {
    printf("\n\x1b[32m--CALCULADORA DE IMC--\n\x1b[0m");
    printf("1 - Calcular o IMC\n");
    printf("2 - Sobre o IMC\n");
    printf("3 - Sair\n");
    printf("\x1b[31mEscolha uma opção => \x1b[0m");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n');
      
    if (!deu_certo) {
      opcao = 0;}
    switch (opcao) {
    case 1: {
     deu_certo = system("clear");

      float peso = 0.0f;
      float altura = 0.0f;

      printf("Entre com o seu peso em kg: \n");
      deu_certo = scanf("%*[^0123456789\n]%f", &peso);

      if(peso >= 0.0f && peso <= 1000.0f){

        printf("Entre com a sua altura em cm: \n");
        deu_certo = scanf("%f", &altura);

        if(altura >= 0.0f && altura <= 1000.0f){
        
          float imc = peso / (altura * altura) ;
          printf("Seu IMC é de %.2f\n", imc);

          if (imc < 18.5) {
            printf("Classificação: Abaixo do peso\n");
             printf("Pressione ENTER para voltar...");
              getchar();
            
          } else if (imc >= 18.5 && imc < 24.9) {
            printf("Classificação: Peso normal\n");
             printf("Pressione ENTER para voltar...");
              getchar();
           
          } else if (imc >= 25 && imc < 29.9) {
            printf("Classificação: Sobrepeso\n");
             printf("Pressione ENTER para voltar...");
              getchar();
           
          } else {
            printf("Classificação: Obesidade\n");
             printf("Pressione ENTER para voltar...");
              getchar();
         
          }
         
        } else {
          printf("Altura invalido! Entre com um valor valido!\n");
           printf("Pressione ENTER para voltar...");
            getchar();
   
        }
      } else {
        printf("Peso invalido! Entre com um valor valido!\n");
         printf("Pressione ENTER para voltar...");
          getchar();
      
      }
      break;
    }  
      case 2:
      deu_certo = system("clear");
        printf("O IMC (Índice de Massa Corporal) é uma medida de associação entre peso e altura. \n");
        printf("Ele é utilizado para avaliar se uma pessoa está com o peso adequado para a sua altura.\n");
        printf("O cálculo do IMC é feito dividindo o peso (em quilogramas) pela altura ao quadrado (em metros).\n");
        printf("A fórmula é: IMC = peso / (altura * altura)\n");
        printf("De acordo com o valor do IMC, a pessoa é classificada em uma faixa de peso.\n");
        printf("Por exemplo:\n");
        printf("- IMC abaixo de 18.5: Abaixo do peso\n");
        printf("- IMC entre 18.5 e 24.9: Peso normal\n");
        printf("- IMC entre 25.0 e 29.9: Sobrepeso\n");
        printf("- IMC acima de 30.0: Obesidade\n");
        printf("Pressione ENTER para voltar...");
        getchar();
        deu_certo = system("clear");
        break;
      
        case 3:
            printf("Até logo, %s!\n", nome);
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
            break;
         } 
       }
      return 0;   
  }
