#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
    //separando as variáveis em grupos
   char estado1, estado2;
   char codigo1[3], codigo2[3];
   char cid1[26], cid2[26];
   int pop1, pop2;
   float ar1, ar2;
   float pib1, pib2;
   int turi1, turi2;
   float dp1, dp2;
   float pibcapita1, pibcapita2;
   float poder1, poder2;
   bool teste;

   //primeira carta
   printf("Insira as informações da primeira carta \n");

   printf("Insira a letra que represente de seu estado:");
   scanf("%c", &estado1);

   printf("Insira o código que represente de seu estado:");
   scanf("%s", codigo1);

   printf("Insira o nome completo de sua cidade(use _ ao invés de espaço para separar nomes compostos):");
   scanf("%s", cid1);

   printf("Insira a população de seu estado:");
   scanf("%d", &pop1);

   printf("Insira a área total de seu estado:");
   scanf("%f", &ar1);

   printf("Insira o PIB de seu estado(escreva o algarismo completo do número):");
   scanf("%f", &pib1);

   printf("Insira o número de pontos turísticos de seu estado:");
   scanf("%d", &turi1);

   printf("\n");

   dp1 = pop1 / ar1;

   pibcapita1 = pib1 / pop1;

   poder1 = pop1 + ar1 + pib1 + turi1 + pibcapita1 + (dp1 * -1);

   printf("Carta 1:\n ");
   printf("Estado: %c \n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Nome da cidade: %s\n", cid1);
   printf("População: %d \n", pop1);
   printf("Área: %.2f Km²\n", ar1);
   printf("PIB: %.2f bilhões de reais \n",pib1);
   printf("Número de pontos turísticos: %d\n", turi1);
   printf("Densidade populacional: %.2f hab/km² \n", dp1);
   printf("Pib per Capita: %.2f reais\n", pibcapita1);
   printf("\n");

   //segunda carta

   printf("Insira as informações da segunda carta \n");

   printf("Insira a letra que represente de seu estado:");
   scanf(" %c", &estado2);

   printf("Insira o código que represente de seu estado:");
   scanf("%s", codigo2);

   printf("Insira o nome completo de sua cidade(use _ ao invés de espaço para separar nomes compostos):");
   scanf("%s", cid2);

   printf("Insira a população de seu estado(escreva o algarismo completo do número):");
   scanf("%d", &pop2);

   printf("Insira a área total de seu estado:");
   scanf("%f", &ar2);

   printf("Insira o PIB de seu estado(escreva o algarismo completo do número):");
   scanf("%f", &pib2);

   printf("Insira o número de pontos turísticos de seu estado:");
   scanf("%d", &turi2);

   printf("\n");

   dp2 = pop2 / ar2;

   pibcapita2 = pib2 / pop2;

   poder2 = pop2 + ar2 + pib2 + turi2 + pibcapita2 + (dp2 * -1);


   printf("Carta 2:\n ");
   printf("Estado: %c \n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da cidade: %s\n", cid2);
   printf("População: %d\n", pop2);
   printf("Área: %.2f Km²\n", ar2);
   printf("PIB: %.2f bilhões de reais\n",pib2);
   printf("Número de pontos turísticos: %d\n", turi2);
   printf("Densidade populacional: %.2f hab/km² \n", dp2);
   printf("Pib per Capita: %.2f reais\n", pibcapita2);
   printf("\n");

   //Comparação de cartas


   printf("Comparação de cartas:\n");
   printf("\n");

   //Não consegui encontrar nenhum outro modo de fazer essa parte da questão sem ser com if ou a maneira que fiz
   teste = pop1 > pop2;
   printf("População: %s\n",teste? "Carta 1 venceu" : "Carta 2 venceu");

   teste = ar1 > ar2;
   printf("Área: %s\n", teste? "Carta 1 venceu" : "Carta 2 venceu");

   teste = pib1 > pib2;
   printf("PIB: %s\n", teste? "Carta 1 venceu" : "Carta 2 venceu");
   
   teste = turi1 > turi2;
   printf("Pontos turísticos: %s\n", teste? "Carta 1 venceu" : "Carta 2 venceu");

   teste = dp1 < dp2;
   printf("Densidade populacional: %s\n", teste? "Carta 1 venceu" : "Carta 2 venceu");

   teste = pibcapita1 > pibcapita2;
   printf("PIB per capita: %s\n", teste? "Carta 1 venceu" : "Carta 2 venceu");

   teste = poder1 > poder2;
   printf("Super poder: %s\n", teste? "Carta 1 venceu" : "Carta 2 venceu");

   /*Não consegui achar um jeito de comparar os resultados nas aulas apresentadas no curso, tive que procura por fora para achar
   Também achei confusa a parte de números grandes como população e etc, no final apenas escrevi para que o usuário escreva o número completo em algarismos
   */
   return 0;
}