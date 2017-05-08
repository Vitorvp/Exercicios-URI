#include <stdio.h>

int main(void){

    int inicio;
    int fim;
    int valor_dia=24;
    int contagem=1;

    scanf("%d %d", &inicio, &fim);
   
        if (inicio<fim){              
                contagem = (valor_dia - inicio) - (valor_dia - fim);
        printf("O JOGO DUROU %d HORA(S)\n", contagem);

            }else{

                contagem = (valor_dia - inicio) + fim;
        printf("O JOGO DUROU %d HORA(S)\n", contagem);
        }    
}