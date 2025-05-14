#include <stdio.h>
 
int main(){
int t = 1, b = 1;
//movimentação da torre
printf("Torre:\n");
while (t <= 5){
    printf("Direita\n");
    t++;
}
//movimentação do bispo
printf("Bispo:\n");
do{
    printf("Cima Direita\n");
    b++;
} while (b<=5);

//movimentação da rainha
printf("Rainha:\n");
for (int r = 1; r <= 8; r++){
    printf("Esquerda\n");
}
//movimentação do cavalo
printf("Cavalo:\n");
for (int c = 1; c <= 1; c++){
    int c2 = 1;
    while (c2 <= 2){
        printf("Baixo\n");
        c2++;
    }
    printf("Esquerda\n");
}
return 0;
}