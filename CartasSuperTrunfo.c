#include <stdio.h>

     

int main() {

// Cadastro das variáveis.

  char estado1 = 'A', estado2 = 'B';
  char codigodacarta1 [4] = "01", codigodacarta2[4] = "02";
  char nomedacidade1 [20] = "São Paulo", nomedacidade2 [20] = "Rio de Janeiro";
  int populacao1 = 5250, populacao2 = 2150;
  float area1 = 88.22, area2 = 77.5;
  float pib1 = 11111.22, pib2 = 33333.11;
  int pontoturistico1 = 10, pontoturistico2 = 20;


     //Dencidade populacional e Pib percapita.

  float dencidadepopulacional1 = populacao1 / area1, pibpercapita1 = pib1 / populacao1;  
  float dencidadepopulacional2 = populacao2 / area2, pibpercapita2 = pib2 / populacao2;

     // Cadastro do printf das cartas.

    printf("Estado: %c\nCódigo da carta: %c%s\nNome da Cidade: %s\nPopulação: %d Bilhões de pessoas\nArea: %.2f Km²\nPIB: %.2f Bilhões de reais\nPontos Turísticos: %d\n", estado1, estado1, codigodacarta1, nomedacidade1, populacao1, area1, pib1, pontoturistico1);
    printf("Dencidade Populacional: %.1f Pessoas po Km²\nPIB Per capita: %.1f PIB por pessoa\n", dencidadepopulacional1, pibpercapita1);
    printf("\n");

    
    printf("Estado: %c\nCódigo da carta: %c%s\nNome da Cidade: %s\nPopulação: %d Bilhões de pessoas\nArea: %.2f Km²\nPIB: %.2f Bilhões de reais\nPontos Turísticos: %d\n", estado2, estado2, codigodacarta2, nomedacidade2, populacao2, area2, pib2, pontoturistico2);
    printf("Dencidade Populacional: %.1f Pessoas por Km²\nPIB Per capita: %.1f PIB por pessoa\n", dencidadepopulacional2, pibpercapita2);
    printf("\n");
    
    
   // Comparação de cartas.


   printf("*** Comparação de carta ***\n");
   
   printf("\n");

     // Caso a carta tenha uma area km² > sera a vencedora.
     // Mas caso a outra carta tenha a Dencidade da População < a carta sera vencedora.

     
    if (area1 > area2)if (dencidadepopulacional1 < dencidadepopulacional2){
      printf("Carta 1: %s:%f Area em KM²\n", nomedacidade1, area1);
      printf("Carta 2: %s:%f Area em Km²\n", nomedacidade2, area1);
      printf("Carta 1 %s Venceu\n",nomedacidade1);
    } else {
      printf("Carta 1: %s: %f Area em Km²\n", nomedacidade1, area1);
      printf("Carta 2: %s: %f Area em Km²\n", nomedacidade2, area2);
      printf("Carta 2 %s Venceu\n", nomedacidade2);
    }

      printf("\n");

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

