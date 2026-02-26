#include <stdio.h>

/*
    Desafio: Movimentando as Peças do Xadrez
    Nível: Novato

    Objetivo:
    Simular o movimento de três peças de xadrez:
    - Torre (usando FOR)
    - Bispo (usando WHILE)
    - Rainha (usando DO-WHILE)

    Cada peça utilizará uma estrutura de repetição diferente.
*/

int main() {

    // ===============================
    // MOVIMENTO DA TORRE (FOR)
    // ===============================

    /*
        A Torre move-se em linha reta.
        Neste caso, ela irá se mover 5 casas para a direita.
        Utilizamos a estrutura FOR.
    */

    int casasTorre = 5;

    printf("Movimento da Torre:\n");

    for(int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }


    // ===============================
    // MOVIMENTO DO BISPO (WHILE)
    // ===============================

    /*
        O Bispo move-se na diagonal.
        Ele irá se mover 5 casas para cima e à direita.
        Utilizamos a estrutura WHILE.
    */

    int casasBispo = 5;
    int contadorBispo = 0;

    printf("\nMovimento do Bispo:\n");

    while(contadorBispo < casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }


    // ===============================
    // MOVIMENTO DA RAINHA (DO-WHILE)
    // ===============================

    /*
        A Rainha move-se em todas as direções.
        Neste caso, ela irá se mover 8 casas para a esquerda.
        Utilizamos a estrutura DO-WHILE.
    */

    int casasRainha = 8;
    int contadorRainha = 0;

    printf("\nMovimento da Rainha:\n");

    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while(contadorRainha < casasRainha);


    return 0;
}
