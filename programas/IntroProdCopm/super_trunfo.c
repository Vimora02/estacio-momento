#include <stdio.h>
#include <stdbool.h>
#include <string.h>
int main(){
   char codigo1[3], codigo2[3], cid1[26], cid2[26], estado1, estado2;
   int pop1, pop2, opcao, escolha, escolha2,turi1, turi2, soma1 = 0, soma2 = 0;
   float pibcapita1, pibcapita2, poder1, poder2, dp1, dp2, ar1, ar2, pib1, pib2;


  printf("Menu Principal\n");
  printf("1. Iniciar Jogo\n");
  printf("2. Ver Regras\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

   switch (opcao) {
   //Código para começar o jogo
   case 1 :
   printf("Iniciando jogo:\n");
   //primeira carta
   printf("Insira as informações da primeira carta \n");

   printf("Insira a letra que represente de seu estado:");
   scanf(" %c", &estado1);

   printf("Insira o código que represente de seu estado:");
   scanf("%s", codigo1);

   printf("Insira o nome completo de sua cidade:");
   scanf("%s", cid1);

   printf("Insira a população de seu estado:");
   scanf("%d", &pop1);

   printf("Insira a área total de seu estado:");
   scanf("%f", &ar1);

   printf("Insira o PIB de seu estado:");
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

   printf("Insira o nome completo de sua cidade:");
   scanf("%s", cid2);

   printf("Insira a população de seu estado:");
   scanf("%d", &pop2);

   printf("Insira a área total de seu estado:");
   scanf("%f", &ar2);

   printf("Insira o PIB de seu estado:");
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
   printf("O jogdor poderá escolher 2 atributos para serem comparados.\n");
   printf("Selecione qual o primeiro atributo a ser comparado:\n");
   printf("1.População\n");
   printf("2.Área\n");
   printf("3.PIB\n");
   printf("4.Pontos Turísticos\n");
   printf("5.Densidade Pupulacional\n");
   printf("6.PIB per Capita\n");
   printf("7.Poder\n");
   scanf("%d",&escolha);

   //Fazer com que a primeira opção não apareça novamente para o jogador
   if(escolha == 1){
    printf("Selecione qual o segundo atributo da  a ser comparado:\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos Turísticos\n");
    printf("5.Densidade Pupulacional\n");
    printf("6.PIB per Capita\n");
    printf("7.Poder\n");
    scanf("%d",&escolha2);
    }
 
    else if (escolha == 2){
    printf("Selecione qual o segundo atributo a ser comparado:\n");
    printf("1.População\n");
    printf("3.PIB\n");
    printf("4.Pontos Turísticos\n");
    printf("5.Densidade Pupulacional\n");
    printf("6.PIB per Capita\n");
    printf("7.Poder\n");
    scanf("%d",&escolha2);
    }
 
    else if (escolha == 3)
    {
    printf("Selecione qual o segundo atributo a ser comparado:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("4.Pontos Turísticos\n");
    printf("5.Densidade Pupulacional\n");
    printf("6.PIB per Capita\n");
    printf("7.Poder\n");
    scanf("%d",&escolha2);
    }
    
    else if (escolha == 4)
    {
    printf("Selecione qual o segundo atributo a ser comparado:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("5.Densidade Pupulacional\n");
    printf("6.PIB per Capita\n");
    printf("7.Poder\n");
    scanf("%d",&escolha2);
    }
 
    else if (escolha == 5)
    {
    printf("Selecione qual o segundo atributo a ser comparado:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos Turísticos\n");
    printf("6.PIB per Capita\n");
    printf("7.Poder\n");
    scanf("%d",&escolha2);
    }
 
    else if (escolha == 6)
    {
    printf("Selecione qual o segundo atributo a ser comparado:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos Turísticos\n");
    printf("5.Densidade Pupulacional\n");
    printf("7.Poder\n");
    scanf("%d",&escolha2);
    }
 
    else if (escolha == 7)
    {
    printf("Selecione qual o segundo atributo a ser comparado:\n");
    printf("1.População\n");
    printf("2.Área\n");
    printf("3.PIB\n");
    printf("4.Pontos Turísticos\n");
    printf("5.Densidade Pupulacional\n");
    printf("6.PIB per Capita\n");
    scanf("%d",&escolha2);
    }
    if (escolha == escolha2)
    {
        printf("Não se pode selecionar o mesmo atributo 2 vezes.");
    }
   else{ 
   //Primeira comparação
   switch (escolha)
   {
   case 1:
   printf("Atributo: População:\n");
   printf("Carta %s: %d\n",cid1, pop1);
   printf("Carta %s: %d\n",cid2, pop2);
   printf("Resultado: %s\n", pop1 > pop2 ? "Carta 1 venceu\n" : pop1 < pop2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=pop1+soma1;
   soma2=pop2+soma2;
   break;

   case 2:
   printf("Atributo: Área:\n");
   printf("Carta %s: %.2f Km²\n",cid1, ar1);
   printf("Carta %s: %.2f Km²\n",cid2, ar2);
   printf("Resultado: %s\n", ar1 > ar2 ? "Carta 1 venceu\n" : ar1 < ar2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=ar1+soma1;
   soma2=ar2+soma2;
   break;

   case 3:
   printf("Atributo: PIB:\n");
   printf("Carta %s: %.2f bilhões de reais\n",cid1, pib1);
   printf("Carta %s: %.2f bilhões de reais\n",cid2, pib2);
   printf("Resultado: %s\n", pib1 > pib2 ? "Carta 1 venceu\n" : pib1 < pib2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=pib1+soma1;
   soma2=pib2+soma2;
   break;
   
   case 4:
   printf("Atributo: Pontos turísticos:\n");
   printf("Carta %s: %d\n",cid1, turi1);
   printf("Carta %s: %d\n",cid2, turi2);
   printf("Resultado: %s\n", turi1 > turi2 ? "Carta 1 venceu\n" : turi1 < turi2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=turi1+soma1;
   soma2=turi2+soma2;
   break;

   case 5:
   printf("Atributo: Densidade pupulacional:\n");
   printf("Carta %s: %.2f\n",cid1, dp1);
   printf("Carta %s: %.2f\n",cid2, dp2);
   printf("Resultado: %s\n", dp1 < dp2 ? "Carta 1 venceu\n" : dp1 > dp2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=dp2+soma1;
   soma2=dp2+soma2;
   break;

   case 6:
   printf("Atributo: PIB per capita:\n");
   printf("Carta %s: %.2f\n",cid1, pibcapita1);
   printf("Carta %s: %.2f\n",cid2, pibcapita2);
   printf("Resultado: %s\n", pibcapita1 > pibcapita2 ? "Carta 1 venceu\n" : pibcapita1 < pibcapita2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=pibcapita1+soma1;
   soma2=pibcapita2+soma2;
   break;

   case 7:
   printf("Atributo: Poder:\n");
   printf("Carta %s: %.2f\n",cid1, poder1);
   printf("Carta %s: %.2f\n",cid2, poder2);
   printf("Resultado: %s\n", poder1 > poder2 ? "Carta 1 venceu\n" : poder1 < poder2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=poder1+soma1;
   soma2=poder2+soma2;
   break;

   default:
   printf("Opção inválida, tente novamente\n");
   break;
   
   break;
   }

   //Segunda comparação
   switch (escolha2)
   {
   case 1:
   printf("Atributo: População:\n");
   printf("Carta %s: %d\n",cid1, pop1);
   printf("Carta %s: %d\n",cid2, pop2);
   printf("Resultado: %s\n", pop1 > pop2 ? "Carta 1 venceu\n" : pop1 < pop2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=pop1+soma1;
   soma2=pop2+soma2;
   break;

   case 2:
   printf("Atributo: Área:\n");
   printf("Carta %s: %.2f Km²\n",cid1, ar1);
   printf("Carta %s: %.2f Km²\n",cid2, ar2);
   printf("Resultado: %s\n", ar1 > ar2 ? "Carta 1 venceu\n" : ar1 < ar2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=ar1+soma1;
   soma2=ar2+soma2;
   break;

   case 3:
   printf("Atributo: PIB:\n");
   printf("Carta %s: %.2f bilhões de reais\n",cid1, pib1);
   printf("Carta %s: %.2f bilhões de reais\n",cid2, pib2);
   printf("Resultado: %s\n", pib1 > pib2 ? "Carta 1 venceu\n" : pib1 < pib2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=pib1+soma1;
   soma2=pib2+soma2;
   break;
   
   case 4:
   printf("Atributo: Pontos turísticos:\n");
   printf("Carta %s: %d\n",cid1, turi1);
   printf("Carta %s: %d\n",cid2, turi2);
   printf("Resultado: %s\n", turi1 > turi2 ? "Carta 1 venceu\n" : turi1 < turi2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=turi1+soma1;
   soma2=turi2+soma2;
   break;

   case 5:
   printf("Atributo: Densidade pupulacional:\n");
   printf("Carta %s: %.2f\n",cid1, dp1);
   printf("Carta %s: %.2f\n",cid2, dp2);
   printf("Resultado: %s\n", dp1 < dp2 ? "Carta 1 venceu\n" : dp1 > dp2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=dp2+soma1;
   soma2=dp2+soma2;
   break;

   case 6:
   printf("Atributo: PIB per capita:\n");
   printf("Carta %s: %.2f\n",cid1, pibcapita1);
   printf("Carta %s: %.2f\n",cid2, pibcapita2);
   printf("Resultado: %s\n", pibcapita1 > pibcapita2 ? "Carta 1 venceu\n" : pibcapita1 < pibcapita2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=pibcapita1+soma1;
   soma2=pibcapita2+soma2;
   break;

   case 7:
   printf("Atributo: Poder:\n");
   printf("Carta %s: %.2f\n",cid1, poder1);
   printf("Carta %s: %.2f\n",cid2, poder2);
   printf("Resultado: %s\n", poder1 > poder2 ? "Carta 1 venceu\n" : poder1 < poder2 ? "Carta 2 venceu\n" : "Empate\n");
   printf("\n");
   soma1=poder1+soma1;
   soma2=poder2+soma2;
   break;

   default:
   printf("Opção inválida, tente novamente\n");
   break;

   break;
   }
   printf("A soma dos valores da carta %s(1) é: %d\n",cid1, soma1);
   printf("A soma dos valores da carta %s(2) é: %d\n",cid2, soma2);
   printf("Resultado: %s", soma1>soma2? "A carta 1 venceu a rodada \n" : soma1<soma2 ? "A carta 2 venceu a rodada\n" : "Empate\n");
}

   break;
   //Regras do jogo
   case 2:
   printf("Esse jogo é chamado supertrunfo, com o simples objetivo de inserir os aspéctos de 2 cartas e as comparar\n");
   printf("O jogo te dará a oportunidade de inserir as informações de cada carta, porém pessamos que siga as seguintes regras:\n");
   printf("1. Caso o nome completo de sua cidade possua mais de uma palavra, é necessário que escreva toda ela sem espaço, ou separada por'_'\n");
   printf("2. Quando inserir números grandes como 12 milhões, lembre-se de escrever ele por completo 12000000\n");
   break;

   // Sair do jogo
   case 3:
   printf("Saindo do jogo\n");
   break;
   //caso o jogador insira uma opção inválida
   default:
   printf("Opção inválida. Tente novamente.\n");
   break;

   break;
}
   return 0;
}
