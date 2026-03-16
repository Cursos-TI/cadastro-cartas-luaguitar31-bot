#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // estrutura da carta 1

  char estado_1 [20];// local onde será adicionado o nome do estado
  char código_1 [10];// local para adicionar o código da carta tipo:A01, A02...
  char cidade_1 [30];// nome da cidade
  int população_1 ;// quantidade de habitantes da cidade
  float áreakm²_1 ;// adicionar o perímetro da cidade
  float pib_1;// quantidade do produto interno bruto 
  int pontos_turísticos_1 ;// número de pontos turísticos




// estrutura da carta 2

  char estado_2 [20];// local onde será adicionado o nome do estado
  char código_2 [10];// local para adicionar o código da carta tipo:A01, A02...
  char cidade_2 [30];// nome da cidade
  int população_2 ;// quantidade de habitantes da cidade
  float áreakm²_2 ;// adicionar o perímetro da cidade
  float pib_2;// quantidade do produto interno bruto 
  int pontos_turísticos_2;// número de pontos turísticos


  // Área para entrada de dados


       // Entrada de dados da carta 1

  printf("Preencha os dados da primeira carta:\n\n");
  printf("Digite o nome do estado: ");
  scanf("%s", &estado_1);
  printf("Digite o código da carta: ");
  scanf("%s",&código_1);
  printf("Digite o nome da cidade: ");
  scanf("%s", &cidade_1);
  printf("Digite a quantidade da população ,sem uso de ponto ou vírgula:" );
  scanf("%d",&população_1);
  printf("Qual o Produto Interno Bruto da cidade? " );
  scanf("%f", &pib_1);
  printf("Qual a quantidade de pontos turísticos na cidade? ");
  scanf("%d",&pontos_turísticos_1);

  // área para exibição dos dados da carta 1

  printf("\nVamos conferir os dados?\n");
  printf("\nO nome do estado é: %s\n",estado_1);
  printf("O código da carta: %s\n", código_1);
  printf("Nome da cidade: %s\n",cidade_1);
  printf("População: %d\n", população_1);
  printf("PIB: %f\n",pib_1);
  printf("Pontos turísticos: %d\n\n\n", pontos_turísticos_1);

  printf("Agora iremos preencher os dados da segunda carta!\n\n");



  // Entrada de dados da carta 2

  printf("Preencha os dados da segunda carta\n\n");
  printf("Digite o nome do estado: ");
  scanf("%s", &estado_2);
  printf("Digite o código da carta: ");
  scanf("%s",&código_2);
  printf("Digite o nome da cidade: ");
  scanf("%s", &cidade_2);
  printf("Digite a quantidade da população ,sem o uso de ponto ou vírgula: ");
  scanf("%d",&população_2);
  printf("Qual o Produto Interno Bruto da cidade? ");
  scanf("%f", &pib_2);
  printf("Qual a quantidade de pontos turísticos na cidade? ");
  scanf("%d",&pontos_turísticos_2);



   // área para exibição dos dados da carta 2

  printf("\nVamos conferir os dados?\n\n");
  printf("O nome do estado é: %s\n",estado_2);
  printf("O código da carta: %s\n", código_2);
  printf("Nome da cidade: %s\n",cidade_2);
  printf("População: %d\n", população_2);
  printf("PIB: %f\n",pib_2);
  printf("Pontos turísticos: %d\n\n\n", pontos_turísticos_2);



// final da execuçao do programa nível novato.

return 0;
} 
