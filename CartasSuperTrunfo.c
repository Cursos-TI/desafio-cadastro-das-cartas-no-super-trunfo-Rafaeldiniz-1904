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
  // Variavel de inicialização
  int inicio;
  int carta;
  int opcao;
  // Inicialização do jogo
  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &inicio);
 // inicio do jogo
  switch (inicio) {
    case 1:
      printf("### Escolha sua Carta ###\n");
      printf("Carta 1\n");
      printf("Carta 2\n");
      printf("Opção 1 ou 2: ");
      scanf("%d", &carta);
      break;
    case 2:
    printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }
  // Criando printf da carta 01
switch (carta){
  case 1:
  printf("Carta 01:\n");
  printf("Estado: %c\n", estado1);
  printf("Código da Carta: %c%s\n", estado1, codigodacarta1);
  printf("Nome da Cidade: %s\n", nomedacidade1);
  printf("1.População: %d\n", populacao1);
  printf("2.Área: %f\n", area1);
  printf("3.PIB: %f\n", pib1);
  printf("4.Números de Pontos Turisticos: %d\n", pontosturisticos1);
  printf("5.Dencidade Populacional: %f\n", dencidadepopulacional1);
  printf("6.PIB Per capita: %f\n", pibpercapita1);
  printf("### ESCOLHA UMA DAS OPÇÕES ###\n");
  printf("Escolha de 1 a 6: ");
  scanf("%d", &opcao);
  printf("\n");
  switch (opcao){
  case 1:
  if(populacao1 == populacao2){
    printf("empate\n");
  } else if (populacao1 > populacao2){
  printf("%s: População: %d\n%s: População: %d\n", nomedacidade1, populacao1, nomedacidade2, populacao2);
  printf("Atributo escolhido: População\n");
  printf("%s Venceu!\n", nomedacidade1);
  } else if (populacao1 < populacao2){
  printf("%s: População: %d\n%s: População: %d\n", nomedacidade1, populacao1, nomedacidade2, populacao2);
  printf("Atributo escolhido: População\n");
  printf("%s Venceu!\n", nomedacidade2);
  }
  break;
  case 2:
  if(area1 == area2){
    printf("empate\n");
  } else if (area1 > area2){
  printf("%s: Àrea: %f\n%s: Àrea: %f\n", nomedacidade1, area1, nomedacidade2, area2);
  printf("Atributo escolhido: Àrea\n");
  printf("%s Venceu!\n", nomedacidade1);
  } else if (area1 < area2){
  printf("%s: Àrea: %f\n%s: Àrea: %f\n", nomedacidade1, area1, nomedacidade2, area2);
  printf("Atributo escolhido: Àrea\n");
  printf("%s Venceu!\n", nomedacidade2);
  }
  break;
  case 3:
  if(pib1 == pib2){
    printf("empate\n");
  } else if (pib1 > pib2){
  printf("%s: PIB: %f\n%s: PIB: %f\n", nomedacidade1, pib1, nomedacidade2, pib2);
  printf("Atributo escolhido: PIB\n");
  printf("%s Venceu!\n", nomedacidade1);
  } else if (pib1 < pib2){
  printf("%s: PIB: %f\n%s: PIB: %f\n", nomedacidade1, pib1, nomedacidade2, pib2);
  printf("Atributo escolhido: PIB\n");
  printf("%s Venceu!\n", nomedacidade2);
  }
  break;
  case 4:
  printf("Números de Pontos Turisticos: %d\n", pontosturisticos1);
  break;
  case 5:
  printf("Dencidade Populacional: %f\n", dencidadepopulacional1);
  break;
  case 6:
  printf("PIB Per capita: %f\n", pibpercapita1);
  break;
  default:
  printf("Opção inválida\n");
}
break;
case 2:
  //Criando printf da carta 02
  printf("Carta 02:\n");
  printf("Estado: %c\n", estado2);
  printf("Código da Carta: %c%s\n", estado2, codigodacarta2);
  printf("Nome da Cidade: %s\n", nomedacidade2);
  printf("1.População: %d\n", populacao2);
  printf("2.Área: %f\n", area2);
  printf("3.PIB: %f\n", pib2);
  printf("4.Números de Pontos Turisticos: %d\n", pontosturisticos2);
  printf("5.Dencidade Populacional: %f\n", dencidadepopulacional2);
  printf("6.PIB Per capita: %f\n", pibpercapita2);
  printf("### ESCOLHA UMA DAS OPÇÕES ###\n");
  printf("Escolha de 1 a 6: ");
  scanf("%d", &opcao);
  printf("\n");
  switch (opcao){
    case 1:
    if(populacao1 == populacao2){
      printf("empate\n");
    } else if (populacao1 > populacao2){
    printf("%s: População: %d\n%s: População: %d\n", nomedacidade1, populacao1, nomedacidade2, populacao2);
    printf("Atributo escolhido: População\n");
    printf("%s Venceu!\n", nomedacidade1);
    } else if (populacao1 < populacao2){
    printf("%s: População: %d\n%s: População: %d\n", nomedacidade1, populacao1, nomedacidade2, populacao2);
    printf("Atributo escolhido: População\n");
    printf("%s Venceu!\n", nomedacidade2);
    }
    break;
    case 2:
    if(area1 == area2){
      printf("empate\n");
    } else if (area1 > area2){
    printf("%s: Àrea: %f\n%s: Àrea: %f\n", nomedacidade1, area1, nomedacidade2, area2);
    printf("Atributo escolhido: Àrea\n");
    printf("%s Venceu!\n", nomedacidade1);
    } else if (area1 < area2){
    printf("%s: Àrea: %f\n%s: Àrea: %f\n", nomedacidade1, area1, nomedacidade2, area2);
    printf("Atributo escolhido: Àrea\n");
    printf("%s Venceu!\n", nomedacidade2);
    }
    break;
    case 3:
    if(pib1 == pib2){
    printf("empate\n");
    } else if (pib1 > pib2){
    printf("%s: PIB: %f\n%s: PIB: %f\n", nomedacidade1, pib1, nomedacidade2, pib2);
    printf("Atributo escolhido: PIB\n");
    printf("%s Venceu!\n", nomedacidade1);
    } else if (pib1 < pib2){
    printf("%s: PIB: %f\n%s: PIB: %f\n", nomedacidade1, pib1, nomedacidade2, pib2);
    printf("Atributo escolhido: PIB\n");
    printf("%s Venceu!\n", nomedacidade2);
    }
    break;
    case 4:
    printf("Números de Pontos Turisticos: %d\n", pontosturisticos2);
    break;
    case 5:
    printf("Dencidade Populacional: %f\n", dencidadepopulacional2);
    break;
    case 6:
    printf("PIB Per capita: %f\n", pibpercapita2);
    break;
    default:
    printf("Opção inválida\n");
  }
  break;
  default:
  printf("Opção inválida\n");
}
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

