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

   printf("Atributo: População:\n");
   printf("Carta 1: %d\n", pop1);
   printf("Carta 2: %d\n", pop2);
   if (pop1 > pop2)
   {
    printf("Carta 1: %s venceu\n", cid1);
   }
   else if (pop1 < pop2)
   {
    printf("Carta 2: %s venceu\n", cid2);
   }
   else{
    printf("Empate entre as duas cartas\n");
   }

   printf("\n");


   printf("Atributo: Área:\n");
   printf("Carta 1: %.2f Km²\n", ar1);
   printf("Carta 2: %.2f Km²\n", ar2);
   if (ar1 > ar2)
   {
    printf("Carta 1: %s venceu\n", cid1);
   }
   else if (ar1 < ar2)
   {
    printf("Carta 2: %s venceu\n", cid2);
   }
   else{
    printf("Empate entre as duas cartas\n");
   }
   
   printf("\n");

   printf("Atributo: PIB:\n");
   printf("Carta 1: %.2f bilhões de reais\n", pib1);
   printf("Carta 2: %.2f\n", pib2);
   if (pib1 > pib2)
   {
    printf("Carta 1: %s venceu\n", cid1);
   }
   else if (pib1 < pib2)
   {
    printf("Carta 2: %s venceu\n", cid2);
   }
   else{
    printf("Empate entre as duas cartas\n");
   }

   printf("\n");

   printf("Atributo: Pontos turísticos:\n");
   printf("Carta 1: %d\n", turi1);
   printf("Carta 2: %d\n", turi2);
   if (turi1 > turi2)
   {
    printf("Carta 1: %s venceu\n", cid1);
   }
   else if (turi1 < turi2)
   {
    printf("Carta 2: %s venceu\n", cid2);
   }
   else{
    printf("Empate entre as duas cartas\n");
   }

   printf("\n");

   printf("Atributo: Densidade pupulacional:\n");
   printf("Carta 1: %.2f\n", dp1);
   printf("Carta 2: %.2f\n", dp2);
   if (dp1 > dp2)
   {
    printf("Carta 2: %s venceu\n", cid2);
   }
   else if (dp1 < dp2)
   {
    printf("Carta 1: %s venceu\n", cid1);
   }
   else{
    printf("Empate entre as duas cartas\n");
   }

   printf("\n");

   printf("Atributo: PIB per capita:\n");
   printf("Carta 1: %.2f\n", pibcapita1);
   printf("Carta 2: %.2f\n", pibcapita2);
   if (pibcapita1 > pibcapita2)
   {
    printf("Carta 1: %s venceu\n", cid1);
   }
   else if (pibcapita1 < pibcapita2)
   {
    printf("Carta 2: %s venceu\n", cid2);
   }
   else{
    printf("Empate entre as duas cartas\n");
   }

   printf("\n");

   printf("Atributo: Poder:\n");
   printf("Carta 1: %.2f\n", poder1);
   printf("Carta 2: %.2f\n", poder2);
   if (poder1 > poder2)
   {
    printf("Carta 1: %s venceu\n", cid1);
   }
   else if (poder1 < poder2)
   {
    printf("Carta 2: %s venceu\n", cid2);
   }
   else{
    printf("Empate entre as duas cartas\n");
   }
   return 0;
}