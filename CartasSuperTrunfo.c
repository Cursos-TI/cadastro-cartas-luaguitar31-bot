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
  unsigned long int população_1 ;// quantidade de habitantes da cidade
  float áreakm²_1 ;// adicionar o perímetro da cidade
  float pib_1;// quantidade do produto interno bruto 
  int pontos_turísticos_1 ;// número de pontos turísticos
  float densidadePopulacional1;
  float Pibpercapta1;
  float superpoder1 = (float) população_1 + áreakm²_1 + pib_1 + (float) pontos_turísticos_1 
                       + Pibpercapta1 + (1.0f / densidadePopulacional1);

// estrutura da carta 2

  char estado_2 [20];// local onde será adicionado o nome do estado
  char código_2 [10];// local para adicionar o código da carta tipo:A01, A02...
  char cidade_2 [30];// nome da cidade
  unsigned long int população_2 ;// quantidade de habitantes da cidade
  float áreakm²_2 ;// adicionar o perímetro da cidade
  float pib_2;// quantidade do produto interno bruto 
  int pontos_turísticos_2;// número de pontos turísticos
  float densidadePopulacional2;
  float Pibpercapta2;
  float superpoder2 = (float) população_2 + áreakm²_2 + pib_2 + (float) pontos_turísticos_2 
                       + Pibpercapta2 + (1.0f / densidadePopulacional2);


  // Área para entrada de dados


       // Entrada de dados da carta 1

  printf("Preencha os dados da primeira carta:\n\n");
  printf("Digite o nome do estado: ");
  scanf("%s", &estado_1);
  printf("Digite o código da carta: ");
  scanf("%s",&código_1);
  printf("Digite o nome da cidade: ");
  scanf("%s", &cidade_1);
  printf("Digite a área em km²: ");
  scanf("%f", &áreakm²_1);
  printf("Digite a quantidade da população ,sem uso de ponto ou vírgula:" );
  scanf("%lu",&população_1);
  printf("Qual o Produto Interno Bruto da cidade? " );
  scanf("%f", &pib_1);
  printf("Qual a quantidade de pontos turísticos na cidade? ");
  scanf("%d",&pontos_turísticos_1);

    // Área destinada para os cálculos da carta 1 : densidade populacional e Pib per capta.

densidadePopulacional1 = (float)população_1 / áreakm²_1;
Pibpercapta1 =(float) pib_1 / população_1;

  // área para exibição dos dados da carta 1

  printf("\nVamos conferir os dados?\n");
  printf("\nO nome do estado é: %s\n",estado_1);
  printf("O código da carta: %s\n", código_1);
  printf("Nome da cidade: %s\n",cidade_1);
  printf("População: %lu\n", população_1);
  printf("PIB: %.2f\n",pib_1);
  printf("Pontos turísticos: %d\n", pontos_turísticos_1);
  printf ("A densidade populacional é:%.2f\n",densidadePopulacional1);
  printf("O Pib Per capta é:%.2f\n", Pibpercapta1);




  printf("Agora iremos preencher os dados da segunda carta!\n\n");



  // Entrada de dados da carta 2

  printf("Preencha os dados da segunda carta\n\n");
  printf("Digite o nome do estado: ");
  scanf("%s", &estado_2);
  printf("Digite o código da carta: ");
  scanf("%s",&código_2);
  printf("Digite o nome da cidade: ");
  scanf("%s", &cidade_2);
  printf("Digite a área em km²: ");
  scanf("%f", &áreakm²_2);
  printf("Digite a quantidade da população ,sem o uso de ponto ou vírgula: ");
  scanf("%lu",&população_2);
  printf("Qual o Produto Interno Bruto da cidade? ");
  scanf("%f", &pib_2);
  printf("Qual a quantidade de pontos turísticos na cidade? ");
  scanf("%d",&pontos_turísticos_2);


// Área destinada para os cálculos da carta 2 : densidade populacional e Pib per capta.

       densidadePopulacional2 = (float)população_2 / áreakm²_2;
       Pibpercapta2 =(float) pib_2 / população_2;

// área para exibição dos dados da carta 2

  printf("\nVamos conferir os dados?\n\n");
  printf("O nome do estado é: %s\n",estado_2);
  printf("O código da carta: %s\n", código_2);
  printf("Nome da cidade: %s\n",cidade_2);
  printf("População: %lu\n", população_2);
  printf("PIB: %f\n",pib_2);
  printf("Pontos turísticos: %d\n", pontos_turísticos_2);
  printf ("A densidade populacional é:%.2f\n",densidadePopulacional2);
  printf("O Pib Per capta é:%.2f\n\n", Pibpercapta2);

  // área para comparações


   /* Comparação de Cartas:
  População: Carta 1 venceu (1)
  Área: Carta 1 venceu (1)
  PIB: Carta 1 venceu (1)
  Pontos Turísticos: Carta 1 venceu (1)
  Densidade Populacional: Carta 2 venceu (0)
  PIB per Capita: Carta 1 venceu (1)
  Super Poder: Carta 1 venceu (1)*/


  short int resultadoPopulacao = população_1 > população_2;
  float resultadoArea = áreakm²_1 > áreakm²_2;
  float resultadoPib =  pib_1 >  pib_2 ;
  short int resultadoPontosTuristicos =  pontos_turísticos_1 > pontos_turísticos_2;
  float resultadoDensidadePopulacional = densidadePopulacional2 < densidadePopulacional1;
  float resultadoPibPerCapta =  Pibpercapta1 >  Pibpercapta2;
  float resultadoSuperPoder =  superpoder1 > superpoder2;




  printf("população: carta 1 venceu: %hd\n" ,resultadoPopulacao);
  printf("Área: Carta 1 venceu:%.0f\n",resultadoArea);
  printf("PIB: Carta 1 venceu:%.0f\n", resultadoPib);
  printf("Pontos Turísticos: Carta 1 venceu:%d\n", resultadoPontosTuristicos);
  printf("Densidade Populacional: Carta 2 venceu:%.0f\n", resultadoDensidadePopulacional);
  printf("PIB per Capita: Carta 1 venceu:%.0f\n", resultadoPibPerCapta);
  printf("Super Poder: Carta 1 venceu:%.0f\n", resultadoSuperPoder);












// final da execuçao do programa nível mestre.

return 0;
} 
