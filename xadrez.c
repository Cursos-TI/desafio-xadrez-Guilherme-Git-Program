#include <stdio.h>
 
void movimentotorre(int n){

    if (n <= 4) { 
        printf("Direita\n");
        movimentotorre(n + 1);
    }
}

void movimentobispo(int n){
    int movB;
    if (n <= 4) { 
        printf("Cima\n");
    for ( movB = 0; movB < 1; movB++) { 
        printf("Direita\n"); }
        movimentobispo(n + 1);
    }
}

void movimentorainha(int n){

    if (n <= 7) { 
        printf("Esquerda\n"); 
        movimentorainha(n + 1);
    }
}

void movimentocavalo(int n){
    int movC;

    if (n < 1) { 
    for ( movC = 0; movC < 2; movC++) { 
        printf("Cima\n"); }
        printf("Direita\n");
        movimentocavalo(n + 1); 
    }
}

int main() {
    int torre = 0, bispo = 0, rainha = 0, cavalo = 0, movC = 0, movB = 0;

    printf("Movimento da Torre:\n");
    movimentotorre(torre);
    
    printf("\nMovimento do Bispo:\n");
    movimentobispo(bispo);
    
    printf("\nMovimento da Rainha:\n");
    movimentorainha(rainha);
    
    printf("\nMovimento do Cavalo:\n");
    movimentocavalo(cavalo);

    return 0;
}