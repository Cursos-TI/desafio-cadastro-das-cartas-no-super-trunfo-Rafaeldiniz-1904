#include <stdio.h>
#include <stdlib.h>
#include <time.h>
     

int main(){ 

  // Cadastro das variáveis.

  
  char estado1 = 'A', estado2 = 'B';
  char codigodacarta1 [4] = "01", codigodacarta2[4] = "02";
  char nomedacidade1 [20] = "São Paulo", nomedacidade2 [20] = "Rio de Janeiro";
  int populacao1 = 3150, populacao2 = 2150;
  float area1 = 88.22, area2 = 77.5;
  float pib1 = 11111.22, pib2 = 33333.11;
  int pontosturisticos1 = 20, pontosturisticos2 = 15;
  

  //Cadastro da Variavel Dencidade Populacional e PIB per capita

  float dencidadepopulacional1 = populacao1 / area1, pibpercapita1 = pib1 / populacao1;  
  float dencidadepopulacional2 = populacao2 / area2, pibpercapita2 = pib2 / populacao2;

  // Criando printf da carta 01

  printf("Carta 01:\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %c%s\n", estado1, codigodacarta1);
  printf("Nome da Cidade: %s\n", nomedacidade1);
  printf("\n");
  printf("$$$ ESCOLHA UMA DAS OPÇÕES $$$\n");
  printf("\n");
  printf("1.População: %d\n", populacao1);
  printf("2.Área: %f\n", area1);
  printf("3.PIB: %f\n", pib1);
  printf("4.Números de Pontos Turisticos: %d\n", pontosturisticos1);
  printf("5.Dencidade Populacional: %f\n", dencidadepopulacional1);
  printf("6.PIB Per capita: %f\n", pibpercapita1);
  printf("\n");
  printf("FAÇA SUA ESCOLHA: ");
  scanf("%d", &opcao1);

  //Criando printf da carta 02

  printf("Carta 02:\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %c%s\n", estado2, codigodacarta2);
  printf("Nome da Cidade: %s\n", nomedacidade2);
  printf("\n");
  printf("$$$ ESCOLHA UMA DAS OPÇÕES $$$\n");
  printf("\n");
  printf("1.População: %d\n", populacao2);
  printf("2.Área: %f\n", area2);
  printf("3.PIB: %f\n", pib2);
  printf("4.Números de Pontos Turisticos: %d\n", pontosturisticos2);
  printf("5.Dencidade Populacional: %f\n", dencidadepopulacional2);
  printf("6.PIB Per capita: %f\n", pibpercapita2);
  printf("\n");
  printf("FAÇA SUA ESCOLHA: ");
  scanf("%d", &opcao1);
  printf("\n");

  //Comparação das cartas




  return 0;
}

  

  
  
  
  
  
  
  
   // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

