#include <stdio.h>
 
int main(){
int t = 1, b = 1;
//movimentação da torre
while (t <= 5){
    printf("Direita\n");
    t++;
}
//movimentação do bispo
do{
    printf("Cima Direita\n");
    b++;
} while (b<=5);

//movimentação da rainha
for (int r = 1; r <= 8; r++){
    printf("Esquerda\n");
}

return 0;
}