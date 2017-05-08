#include <stdio.h>

int main(void){

    int entrada;
    int loop=0;
    int primeiro=1;
    int segundo=2;
    int terceiro=2;

    scanf("%d", &entrada);

    while (loop < entrada){

        primeiro = primeiro;
        segundo = primeiro * primeiro;
        terceiro = segundo * primeiro;

        printf("%d %d %d\n", primeiro, segundo, terceiro);

        primeiro = primeiro;
        segundo = segundo + 1;
        terceiro = terceiro + 1;

        printf("%d %d %d\n", primeiro, segundo, terceiro);

        primeiro = primeiro +1;

        loop = loop + 1;
    }

}