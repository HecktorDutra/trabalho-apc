#include <stdio.h>
#include <stdlib.h>

int main() {
  int opcao = 0;
  int quantidade_ham = 0, quantidade_beb = 0, quantidade_acomp = 0;
  char hamburguer[17], bebidas[17], acompanhamentos[21];

  while (opcao != 5) {
  int deu_certo = system("clear");
    printf("\x1b[32m---MENU DE PEDIDOS----\n\x1b[0m");
    printf("1  -  Hamburguers\n");
    printf("2  -  Bebidas\n");
    printf("3  -  Acompanhamentos\n");
    printf("4  -  Fechar Pedido\n");
    printf("5  -  Sair\n");
    printf("\x1b[31mEscolha uma opção => \x1b[0m");
    deu_certo = scanf("%i", &opcao);
    while (getchar() != '\n')
      ;

    switch (opcao) {
    case 1:
      while (opcao != 1 && opcao != 5) {
        deu_certo = system("clear");
        printf("\x1b[32m---MENU DE HAMBURGUES---\n\x1b[0m");
        printf("X SALADA...    $12,99\n");
        printf("X BURGUER...   $14,00\n");
        printf("X BACON...     $14,00\n");
        printf("X TUDO...      $16,00\n");
        printf("X TUDO DUPLO...$18,00\n");
        printf("1  -  Voltar\n");
        printf("\x1b[31mEscolha uma opção => \x1b[0m");
        deu_certo = scanf("%s", hamburguer);
        printf("QUAL A QUANTIDADE?  ");
        deu_certo = scanf("%i", &quantidade_ham);
        while (getchar() != '\n')
          ;
      }
      break;

    case 2:
      while (opcao != 1 && opcao != 5) {
        deu_certo = system("clear");
        printf("\x1b[32m---MENU DE BEBIDAS---\n\x1b[0m");
        printf("Coca-Cola lt...      $4,00\n");
        printf("Coca-Cola Zero lt... $5,00\n");
        printf("Guarana lt...        $4,00 \n");
        printf("Suco de Laranja lt...$5,00\n");
        printf("Agua c/ gas 500ml... $4,00\n");
        printf("Agua s/ gas 500ml... $3,00\n");
        printf("1  -  Voltar\n");
        printf("\x1b[31mEscolha uma opção => \x1b[0m");
        deu_certo = scanf("%s", bebidas);
        printf("QUAL A QUANTIDADE? ");
        deu_certo = scanf("%i", &quantidade_beb);
        while (getchar() != '\n')
          ;
      }
      break;

    case 3:
      while (opcao != 1 && opcao != 5) {
       deu_certo = system("clear");
        printf("\x1b[32m---MENU DE ACOMPANHAMENTOS---\n\x1b[0m");
        printf("Batata frita pequena...   $12,00\n");
        printf("Batata frita grange...    $15,00\n");
        printf("Batata c/ cheddar e bacon.$17,00\n");
        printf("Cebola frita...           $12,00\n");
        printf("Chicken de frango...      $15,00\n");
        printf("1  -  Voltar\n");
        printf("\x1b[31mEscolha uma opção => \x1b[0m");
        deu_certo = scanf("%s", acompanhamentos);
        printf("QUAL A QUANTIDADE? ");
        deu_certo = scanf("%i", &quantidade_acomp);
        while (getchar() != '\n')
          ;
      }
      break;

    case 4:
      printf("\x1b[32m---NOTA FISCAL---\n\x1b[0m");
      printf("QNT     PEDIDO\n");
      printf("%d      %s\n", quantidade_ham, hamburguer);
      printf("%d      %s\n", quantidade_beb, bebidas);
      printf("%d      %s\n", quantidade_acomp, acompanhamentos);
      break;

    case 5:
      printf("Até Logo!\n");
      break;

    default:
      printf("Opção Invalida! Pressione ENTER p/ prosseguir...\n");
      while (getchar() != '\n')
        ;
      break;
    }
  }
  return 0;
}