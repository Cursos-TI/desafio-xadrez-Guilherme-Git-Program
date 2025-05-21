#include <stdio.h>
 
int main() {
    int torre = 0, bispo = 0, rainha = 0, cavalo = 0, movC = 0;

    printf("Movimento da Torre:\n");
    while (torre <= 4) { printf("Direita\n");
    torre++; }
    
    printf("\nMovimento do Bispo:\n");
    do { printf("Cima Direita\n");
    bispo++; } while (bispo <= 4);
    
    printf("\nMovimento da Rainha:\n");
    for (rainha = 0; rainha <= 7; rainha++) { printf("Esquerda\n"); }
    
    printf("\nMovimento do Cavalo:\n");
    while (cavalo < 1) { 
    for ( movC = 0; movC < 2; movC++) { printf("Baixo\n"); }
    printf("Esquerda\n");
    cavalo++; }

    return 0;
}