#include <stdio.h>

     // Cadastro das variáveis.

int main() {
  char estado1 = 'A', estado2 = 'B';
  char codigodacarta1 [4] = "01", codigodacarta2[4] = "02";
  char nomedacidade1 [20] = "São Paulo", nomedacidade2 [20] = "Rio de Janeiro";
  int populacao1 = 20, populacao2 = 15;
  float area1 = 32.22, area2 = 25.2;
  float pib1 = 22.22, pib2 = 11.11;
  int pontoturistico1 = 10, pontoturistico2 = 20;

     // Cadastro do printf e scanf das cartas.
     // Entrar com os códigos A01 enter e depois B02 enter.
    printf("Entre com o Código da carta 1: \n");
    scanf("%s", &codigodacarta1);
    printf("Estado: %c\nCódigo da carta: %s\nNome da Cidade: %s\nPopulação: %d Bilhões de pessoas\nArea: %.2f Km²\nPIB: %.2f Bilhões de reais\nPontos Turísticos: %d\n", estado1, codigodacarta1, nomedacidade1, populacao1, area1, pib1, pontoturistico1);
    
    printf("Entre com o Código da carta 2: \n");
    scanf("%s", &codigodacarta2);
    printf("Estado: %c\nCódigo da carta: %s\nNome da Cidade: %s\nPopulação: %d Bilhões de pessoas\nArea: %.2f Km²\nPIB: %.2f Bilhões de reais\nPontos Turísticos: %d\n", estado2, codigodacarta2, nomedacidade2, populacao2, area2, pib2, pontoturistico2);

     

    

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

