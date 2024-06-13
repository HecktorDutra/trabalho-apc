#include <stdio.h>
#include <stdlib.h>
int main() {

  int opcao = 1;

  while (opcao !=0) {
    int deu_certo = system("clear");
    printf("\x1b[32mMENU DE PEDIDOS\n\x1b[0m");
    printf("1 - Hamburguers\n");
    printf("2 - Bebidas\n");
    printf("3 - Acompanhamentos\n");
    printf("4 - Finalizar Pedido\n");
    printf("0 - Sair\n");
    printf("\x1b[31mEscolha uma opção => \x1b[0m");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n');

    if (!deu_certo) {
      opcao = 1;
    }

    switch (opcao) {  
        while (opcao !=0){
        case 1: {
        int hamburguer;
        deu_certo = system("clear");
        printf("\x1b[32mMENU DE HAMBURGUES\n\x1b[0m");
        printf("1 - X SALADA\n");
        printf("2 - X BURGUER\n");
        printf("3 - X BACON\n");
        printf("4 - X TUDO\n");
        printf("5 - X TUDO DUPLO\n");
        printf("0 - Voltar\n");
        printf("\x1b[31mEscolha uma opção => \x1b[0m");
        deu_certo = scanf("%i", &hamburguer);
        break;
       }
          
        
        case 2: {
        while (opcao !=0){
        int bebidas;
        deu_certo = system("clear");
        printf("\x1b[32mMENU DE BEBIDAS\n\x1b[0m");     
          printf("1 - Coca-Cola\n");
          printf("2 - Coca-Cola Sem Açúcar\n");
          printf("3 - Fanta Guarana\n");
          printf("4 - Fanta Laranja\n");
          printf("5 - Suco de Uva\n");
          printf("6 - Suco de Laranja\n");
          printf("7 - Agua com Gas\n");
          printf("8 - Agua sem Gas\n");
          printf("0 - Voltar\n");
          printf("\x1b[31mEscolha uma opção => \x1b[0m");
          int deu_certo_bebidas = scanf("%i", &bebidas);
          //while (getchar() != '\n');
          break;
          default :{
          printf("Opção Invalida! Pressione ENTER p/ prosseguir...\n");
          getchar();
          }
          }
          
         case 0: {
          printf("Até Logo!\n");
          break;
          default:
          printf("Opção Invalida! Pressione ENTER p/ prosseguir...\n");
          getchar();
           }
        }
        }
    }
  }
  return 0;
}