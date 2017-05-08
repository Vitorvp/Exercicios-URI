#include <stdio.h>

int main(void){

    int partes;
    int total;
    int inicio=1;
    int loop=1;
    int contador=1;

    scanf("%d %d", &partes, &total);

    while (1){
        
        if (loop <= total){

        while (inicio <= partes) {
            printf("%d", contador);
            inicio = inicio + 1;
            contador = contador + 1;
            loop = loop + 1;
            if (inicio <= partes){
                printf(" ");
            }
            }
            printf("\n");

    }else{
        break;
    }

    inicio = 1;

    }
}
