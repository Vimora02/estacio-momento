#include <stdio.h>
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

   printf("Insira a área total de seu estado(use . ao invés de , para separar):");
   scanf("%f", &ar1);

   printf("Insira o PIB de seu estado(use . ao invés de , para separar):");
   scanf("%f", &pib1);

   printf("Insira o número de pontos turísticos de seu estado:");
   scanf("%d", &turi1);


   printf("Carta 1:\n ");
   printf("Estado: %c \n", estado1);
   printf("Código: %s\n", codigo1);
   printf("Nome da cidade: %s\n", cid1);
   printf("População: %d \n", pop1);
   printf("Área: %.2f Km²\n", ar1);
   printf("PIB: %.2f\n",pib1);
   printf("Número de pontos turísticos: %d\n", turi1);


   //segunda carta

   printf("Insira as informações da segunda carta \n");

   printf("Insira a letra que represente de seu estado:");
   scanf(" %c", &estado2);

   printf("Insira o código que represente de seu estado:");
   scanf("%s", codigo2);

   printf("Insira o nome completo de sua cidade(use _ ao invés de espaço para separar nomes compostos):");
   scanf("%s", cid2);

   printf("Insira a população de seu estado:");
   scanf("%d", &pop2);

   printf("Insira a área total de seu estado(use . ao invés de , para separar):");
   scanf("%f", &ar2);

   printf("Insira o PIB de seu estado(use . ao invés de , para separar):");
   scanf("%f", &pib2);

   printf("Insira o número de pontos turísticos de seu estado:");
   scanf("%d", &turi2);


   printf("Carta 2:\n ");
   printf("Estado: %c \n", estado2);
   printf("Código: %s\n", codigo2);
   printf("Nome da cidade: %s\n", cid2);
   printf("População: %d\n", pop2);
   printf("Área: %.2f Km²\n", ar2);
   printf("PIB: %.2f\n",pib2);
   printf("Número de pontos turísticos: %d", turi2);


   return 0;
}