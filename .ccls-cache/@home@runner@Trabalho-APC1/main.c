#include <stdio.h>
#include <stdlib.h>
int main() {

  int opcao = 0;

  while (opcao != 4) {
    int deu_certo = system("clear");
    printf("\x1b[32mMENU DE PEDIDOS\n\x1b[0m");
    printf("1 - Hamburguers\n");
    printf("2 - Bebidas\n");
    printf("3 - Acompanhamentos\n");
    printf("0 - Sair\n");
    printf("\x1b[31mEscolha uma opção => \x1b[0m");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n');

    if (!deu_certo) {
      opcao = 0;
    }
    
    switch (opcao) {  
        while (opcao != 0){
        case 1: {
        int hamburguer;
        int quantidade;
        deu_certo = system("clear");
        printf("\x1b[32mMENU DE HAMBURGUES\n\x1b[0m");
        printf("1 - X SALADA\n");
        printf("2 - X BURGUER\n");
        printf("3 - X BACON\n");
        printf("4 - X TUDO\n");
        printf("5 - X TUDO DUPLO\n");
        printf("0 - Sair\n");
        printf("\x1b[31mEscolha uma opção => \x1b[0m");
        deu_certo = scanf("%i", &hamburguer);
        printf("QUAL A QUANTIDADE?  ");
        deu_certo = scanf("%i", &quantidade);
        
        break;
       }

        case 2: {
        int bebidas;
        int quantidade;
        deu_certo = system("clear");
        printf("\x1b[32mMENU DE BEBIDAS\n\x1b[0m");
        printf("1 - Refrigerantes\n");
        printf("2 - Sucos\n");
        printf("3 - Aguas\n");
        printf("0 - Sair\n");
        printf("\x1b[31mEscolha uma opção => \x1b[0m");
        deu_certo = scanf("%i", &bebidas);
        while (getchar() != '\n');
        getchar();
        break;
        
          switch (opcao){
          case 1: {          
          int refrigerantes;
          printf("1 - Coca-Cola\n");
          printf("2 - Coca-Cola Sem Açúcar\n");
          printf("3 - Fanta Guarana\n");
          printf("4 - Fanta Laranja\n");
          printf("0 - SAIR\n");
          deu_certo = scanf("%i", &refrigerantes);
          printf("QUAL A QUANTIDADE?");
          deu_certo = scanf("%i", &quantidade);
          getchar();
          break;
          
    
          case 2: {
          int sucos;
          printf("1 - Suco de Uva\n");
          printf("2 - Suco de Laranja\n");
          printf("3 - Sair\n");
          printf("\x1b[31mEscolha uma opção => \x1b[0m");
          deu_certo = scanf("%i", &sucos);
          while (getchar() != '\n');
          printf("QUAL A QUANTIDADE?");
          deu_certo = scanf("%i", &quantidade);
          getchar();
          break;
          }
            
          case 3: {
          int aguas;
          printf("1 - Agua com Gas\n");
          printf("2 - Agua sem Gas\n");
          printf("3 - Agua natural\n");
          printf("4 - Sair\n");
          printf("\xb1[31mEscolha uma opção => \xb1[0m");
          deu_certo = scanf("%i", &sucos);
          while (getchar() != '\n');
          printf("QUAL A QUANTIDADE?");
          deu_certo = scanf("%i", &quantidade);
          getchar();
          break;
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