#include <stdio.h>

//movimentação da torre
void torre (int movimentotorre){
    if (movimentotorre <= 5){
    printf("Direita\n");
    torre(movimentotorre + 1);
    }
} 

//movimentação do bispo
void bispo (int movimentobispo){
    while (movimentobispo <= 5){
        printf("Cima ");
        int movimentohorizontal = 1;
        while (movimentohorizontal <=1){
            printf("Esquerda\n");
            movimentohorizontal++;
        }
        
        movimentobispo++;
    }
    
}

//movimentação da rainha
void rainha (int movimentorainha){

    if (movimentorainha <= 8)
    {
        printf("Esquerda\n");
        rainha(movimentorainha + 1);
    }
    
}

//movimentação do cavalo
void cavalo(){
for (int c = 1, c2 = 1; c <= 1; c++){
    while (c2 <= 2){
        printf("Baixo\n");
        c2++;
    }
    printf("Direita\n");
}
}
int main(){
int t = 1, b = 1, r =1;
//Chamada de cada função para mostrar o seu movimento
printf("Torre:\n");
torre(t);
printf("\n");

printf("Bispo:\n");
bispo(b);
printf("\n");

printf("Rainha:\n");
rainha(r);
printf("\n");

printf("Cavalo:\n");
cavalo();
printf("\n");

return 0;
}