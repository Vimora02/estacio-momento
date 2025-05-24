#include <stdio.h>

int matriz[10][10], x, navio1[3] = {3,3,3}, navio2[3] = {3,3,3}, navio3[3] = {3,3,3}, navio4[3] = {3,3,3}, linha, coluna;

void inicializaTabuleiro(){ // coloca todos os valores do tabuleiro para serem 0
    for (int a = 0; a <= 9; a++){
        for (int b = 0; b <= 9; b++){
            matriz[a][b] = 0;
        }}}
void imprimirtabuleiro(){//função para mostrar o tabuleiro atual para o jogador
    printf("Tabuleiro atual:\n");
    printf("   A B C D E F G H I J\n");
    for (int i = 0; i <= 9 ; i++){
        switch (i)
        {
        case 9:
            printf("%d ",i+1);
        for (int j = 0; j <= 9; j++){
            printf("%d ", matriz[i][j]);
    }
    printf("\n");
            break;
        
        default:
            printf("%d  ",i+1);
        for (int j = 0; j <= 9; j++){
            printf("%d ", matriz[i][j]);
    }
    printf("\n");
        break;
        }
}}

void colocabarco(){//função que define a posição do barco
    switch (x)
    {
    case 1://navio horizontal
        for (int i = 0; i < (sizeof(navio1) / sizeof(navio1[0])) ; i++){       
            if (matriz[linha - 1][(coluna - 1) + i] == 3){//checar se já tem um navio na posição inserida
                printf("Navios não podem se sobrepor, favor tentar novamente\n\n");
                break;
            }
            matriz[linha - 1][(coluna - 1) + i] = navio1[i];
        }
    break;

    case 2://navio vertical
        for (int i = 0; i < (sizeof(navio2) / sizeof(navio2[0])); i++){  
            if (matriz[(linha - 1) + i][coluna - 1] == navio2[i]){//checar se já tem um navio na posição inserida
                printf("Navios não podem se sobrepor, favor tentar novamente\n\n");
                break;
            }
            matriz[(linha - 1) + i][coluna - 1] = navio2[i];
        }
    break;
    
    case 3://primeiro navio diagonal
    for (int i = 0; i < (sizeof(navio3) / sizeof(navio3[0])) ; i++){
        if (matriz[(linha - 1) + i][(coluna - 1)+i] == navio3[i]){//checar se já tem um navio na posição inserida
                printf("Navios não podem se sobrepor, favor tentar novamente\n\n");
                break;}
        matriz[(linha - 1) + i][(coluna - 1) + i] = navio3[i];
    }
    break;

    case 4://segundo navio diagonal
    for (int i = 0; i < (sizeof(navio4) / sizeof(navio4[0])) ; i++){
        if (matriz[(linha - 1) + i][(coluna - 1)+i] == navio4[i]){//checar se já tem um navio na posição inserida
                printf("Navios não podem se sobrepor, favor tentar novamente\n\n");
                break;}
        matriz[(linha - 1) + i][(coluna - 1) + i] = navio4[i];
    }
    break;
}}

void poderes(int x , int y, int z){//função pra agrupar e colocar os poderes no tabuleiro
switch (x)
{
case 1://Poder de cone
   if (y > 8 || y < 1 || z < 3 || z > 8)
   {
    printf("As coordenadas inseridas para o cone, não estão dentro dos limites do tabuleiro, por favor tentar novamente.\n");
   }
    else{   
        for (int i = 0; i < 3; i++){
            for (int j = 0; j <= i; j++){ 
            matriz[(y - 1) + i][(z - 1) + j] = 1;  
            matriz[(y - 1) + i][(z - 1) - j] = 1;
        }}}
    break;

 case 2://Poder da cruz
    if (y > 8 || y < 3 || z < 3 || z > 8)
    {
        printf("As coordenadas inseridas para a cruz, não estão dentro dos limites do tabuleiro, por favor tentar novamente.\n");
    }
    else{
        for (int i = 0 ; i < 5; i++){
            matriz[(y - 3) + i][z - 1] = 1;
            matriz[y - 1][(z - 3) + i] = 1;
       }}

case 3://Poder do octaedro
  if (y > 9 || y < 2 || z < 2 || z > 9)
    {
        printf("As coordenadas inseridas para o octaedro, não estão dentro dos limites do tabuleiro, por favor tentar novamente.\n");
    }
    else{
        for (int i = 0 ; i < 3; i++){
            matriz[(y - 2) + i][z - 1] = 1;
            matriz[y - 1][(z - 2) + i] = 1;
       }}

break;
default:
printf("O poder selecionado não existe, favor tentar novamente.");
    break;
}}

int main(){
char c, cpoder;
int hab, linhapoder, colunapoder;
printf("Regras:\n");
printf("Esse jogo se chama batalha naval, com o objetivo de derrotar os navios rivais.\n");
printf("De começo, é necessário posicionar seus navios, para isso lembre-se que o primeiro navio é horizontal, o segundo vertical e os outros 2 são na diagonal para baixo e direita.\n");
printf("O navio tem 3 caracteres de comprimento, preste atenção nisso, pois o navio tem que estar completamente dentro do tabuleiro, e não podem se sobrepor.\n");
printf("Após o posicionamento dos barcos, também poderá ser possivel usar habilidades no tabuleiro\n");
inicializaTabuleiro();
imprimirtabuleiro();
printf("\n\n");

for (int i = 1; i < 5; i++){
    x = i;
    printf("Digite a linha onde o %d° navio começa(1 a 10):",i);
    scanf(" %d", &linha);
    printf("Digite a coluna onde o %d° navio começa(A até J, favor usar letras maiúsculas):",i);
    scanf(" %c", &c);
    coluna = (int) c - 64;//mudar para int para usar ascii
    if ((coluna < 1 || coluna > 8 || linha < 1 || linha > 10) && (x == 1)){//checar se o navio não vai pra fora do tabuleiro
        printf("O número inserido faz com que o %d° navio fique fora dos parametros do tabuleiro, tente novamente.\n\n",i);
        break;
    }
    else if ((linha < 1 || linha > 8 || coluna < 1 || coluna > 10) && (x == 2)){//checar se o navio não vai pra fora do tabuleiro
        printf("O número inserido faz com que o %d° navio fique fora dos parametros do tabuleiro, tente novamente.\n\n",i);
        break;
    }
    else if ((coluna < 1 || coluna > 8 || linha < 1 || linha > 10) && ((x == 3) || (x == 4))){//checar se o navio não vai pra fora do tabuleiro
        printf("O número inserido faz com que o %d° navio fique fora dos parametros do tabuleiro, tente novamente.\n\n",i);
        break;
    }
    else{
        colocabarco();
        printf("\n\n");
        imprimirtabuleiro();
}}
printf("Agora selecione qual habilidade usar:\n");
printf("1.Cone(3x5)\n");
printf("2.Cruz(5x5)\n");
printf("3.Octaedro(3x3)\n");
scanf(" %d",&hab);
printf("Pontos de origem:\n");
printf("Cone: topo do cone\n");
printf("Cruz: centro da cruz\n");
printf("Octaedro: centro do octaedro\n");
printf("Agora selecione qual a linha de origem da habilidade:");
scanf(" %d",&linhapoder);
printf("Agora selecione qual a coluna de origem da habilidade:");
scanf(" %c",&cpoder);
colunapoder = (int) cpoder - 64;
poderes(hab, linhapoder, colunapoder);
imprimirtabuleiro();
return 0;
}