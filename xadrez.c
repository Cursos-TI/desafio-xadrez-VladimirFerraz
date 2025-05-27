#include <stdio.h>

void Rainha(int r){

    if(r > 0){
        printf("Esquerda \n");
        Rainha(r - 1);
    }
}
void Torre(int t){

    if(t > 0){
        printf("Direita \n");
        Torre(t - 1);
    }
}

void Bispo(int b){

    if(b > 0){
        printf("Superior Direita \n");
        Bispo(b - 1);
    }
}

int main() {
    
    int b = 1;
    int t = 1;
    int r = 1;

    printf("---- Bispo ----\n\n");
    do { 
        printf("Superior Direita\n");
        b++;
    } while(b <= 5);
    printf("\n");

    printf("**** Torre ****\n\n");
    while (t <= 5) {
        printf("Direita\n");
        t++;                
    }
    printf("\n");

    printf("#### Rainha ####\n\n");
    for(r = 1; r <= 8; r++){
        printf("Esquerda\n");
    }
    printf("\n");

    printf("#### Cavalo ####\n\n");
    
    int c, c1, c2;

    c = 1;

        while(c <= 1){
            printf("Baixo\n");
            c++;
                for(c1 = 0; c1 <= 0; c1++){
                printf("Baixo\n");    
                }
                    for(c2 = 0; c2 <= 0; c2++){
                        printf("Esquerdo\n");
                    }
            }
    

    printf("\n**** Bispo ****\n");
    
    int b1, b2;

        for(b1 = 1; b1 <= 5; b1++ ){
            printf("Superior ");
            for(b2 = 1; b2 <= 1; b2++ ){
                printf("Direita\n");
            }
        }
    
    printf("\n**** Rainha ****\n");
    Rainha(9);

    printf("\n**** Torre ****\n");
    Torre(5);

    printf("\n**** Bispo ****\n");
    Bispo(5);

    int i, j, k;

    printf("\n**** Cavalo ****\n");
    
    for(i = 0; i <= 1; i++){
        if(i == 1) continue;;
            printf("Baixo\n");
            for(j = 0; j <= 1; j++){
                if(j == 1) continue;
                    printf("Baixo\n");
                    for(k = 0; k <= 1; k++){
                        if(k == 1) break;
                        printf("Esquerda\n");
                    }
            }
    }    


}                    

      
        
    
