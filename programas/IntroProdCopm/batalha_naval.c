#include <stdio.h>

int matriz[10][10], x, navio1[3] = {3,3,3}, navio2[3] = {3,3,3}, linha, coluna;

void inicializaTabuleiro(){ // coloca todos os valores do tabuleiro para serem 0
    for (int a = 0; a <= 9; a++){
        for (int b = 0; b <= 9; b++){
            matriz[a][b] = 0;
        }}}
void imprimirtabuleiro(){//função para mostras o tabuleiro atual para o jogador
    printf("Tabuleiro atual:\n");
    printf("  A B C D E F G H I J\n");
    for (int i = 0; i <= 9 ; i++){
        printf("%d ",i+1);
        for (int j = 0; j <= 9; j++){
            printf("%d ", matriz[i][j]);
    }
    printf("\n");
}}

void colocabarco(){//função que define a posição do barco
    if (x == 1){//navio horizontal
        for (int i = 0; i < (sizeof(navio1) / sizeof(navio1[0])) ; i++){       
            if (matriz[linha - 1][(coluna - 1) + i] == 3){//checar se já tem um navio na posição inserida
                printf("Navios não podem se sobrepor, favor tentar novamente\n\n");
                break;
            }
            matriz[linha - 1][(coluna - 1) + i] = navio1[i];
}}
    else if (x == 2){ // navio vertical
        for (int i = 0; i < (sizeof(navio2) / sizeof(navio2[0])); i++){  
            if (matriz[(linha - 1) + i][coluna - 1] == navio2[i]){//checar se já tem um navio na posição inserida
                printf("Navios não podem se sobrepor, favor tentar novamente\n\n");
                break;
            }
            matriz[(linha - 1) + i][coluna - 1] = navio2[i];
}}}

int main(){
char c;
printf("Regras:\n");
printf("Esse jogo se chama batalha naval, com o objetivo de derrotar os navios rivais.\n");
printf("De começo, é necessário posicionar seus navios, para isso lembre-se que o primeiro navio é horizontal, e vertical.\n");
printf("O navio tem 3 caracteres de comprimento, preste atenção nisso, pois o navio tem que estar completamente dentro do tabuleiro, e não podem se sobrepor.\n");
inicializaTabuleiro();
imprimirtabuleiro();
for (int i = 1; i < 3; i++){
    x = i;
    printf("Digite a linha onde o %d° navio começa(1 a 10):",i);
    scanf(" %d", &linha);
    printf("Digite a coluna onde o %d° navio começa(A até J, favor usar letras maiúsculas):",i);
    scanf(" %c", &c);
    coluna = (int) c - 64;//mudar para int para usar ascii
    if ((coluna < 1 || coluna > 8 || linha < 1 || linha > 10) && (x == 1)){
        printf("O número inserido faz com que o primeiro navio fique fora dos parametros do tabuleiro, tente novamente.\n\n");
        break;
    }
    else if ((linha < 1 || linha > 8 || coluna < 1 || coluna > 10) && (x == 2)){
        printf("O número inserido faz com que o segundo navio fique fora dos parametros do tabuleiro, tente novamente.\n\n");
        break;
    }
    else{
        colocabarco();
        printf("\n\n");
        imprimirtabuleiro();
}}
    return 0;
}