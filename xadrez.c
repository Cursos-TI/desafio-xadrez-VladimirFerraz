#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    int b = 1;
    int t = 1;
    int r = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    
    printf("---- Bispo ----\n\n");
    do { 
        printf("Superior Direita\n");
        b++;
    } while(b <= 5);
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("**** Torre ****\n\n");
    while (t <= 5) {
        printf("Direita\n");
        t++;                
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    printf("#### Rainha ####\n\n");
    for(r = 1; r <= 8; r++){
        printf("Esquerda\n");
    }
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("#### Cavalo ####\n\n");
    
    int c, c1;

    c = 1;

        while(c <= 2){
            printf("Baixo\n");
            c++;
            }   for(c1 = 1; c1 <= 1; c1++){
                    printf("Esquerda\n\n");
            }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

            //função recursiva para o movimento do Bispo.
# include <stdio.h>

int main(){

    printf("\n**** Bispo ****\n");

    for(int b = 1; b <= 5; b++ ){
        printf("Superior ");
        for(int b1 = 1; b1 <= 1; b1++ ){
            printf("Direita\n");
        }
    }

    return 0;
    
}
            //função aninhada para o movimento do Bispo.
# include <stdio.h>

int main(){

    printf("\n**** Bispo ****\n");

    for(int b = 1; b <= 5; b++ ){
        printf("Superior ");
        for(int b1 = 1; b1 <= 1; b1++ ){
            printf("Direita\n");
        }
    }

    return 0;
    
}
            //função recursiva para o movimento do Rainha.
# include <stdio.h>

void Rainha(int r){

    if(r > 0){
        printf("Esquerda \n");
        Rainha(r - 1);
    }
}

int main(){

    printf("\n**** Rainha ****\n");
    Rainha(9);
    
}
            //função recursiva para o movimento do Torre.
#include <stdio.h>

void Torre(int t){

    if(t > 0){
        printf("Direita \n");
        Torre(t - 1);
    }
}

int main(){

    printf("\n**** Torre ****\n");
    Torre(5);

    return 0;
}


    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
# include <stdio.h>

int main (){

    int i, j;

    printf("\n**** Cavalo ****\n");
    
    for(i = 0; i <= 4; i++){
        if(i == 1) break; 
            printf("Direita\n");
        for(j = 0; j <= 3; j++){
            if(j == 2) break;
                printf("Cima\n");
        }
    }
    return 0;
}


    return 0;
}
