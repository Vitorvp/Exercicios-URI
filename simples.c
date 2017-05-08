#include <stdio.h>
#include <stdlib.h>

int main(void){

    int A;
    int B;
    int C;
    int maiorAB;
    int resto_maior;

    scanf("%d %d %d", &A, &B, &C);

    maiorAB = ((A+B+abs(A-B))/2);

    resto_maior = ((A + B) - maiorAB);

    if (C>resto_maior && C> maiorAB){
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", resto_maior, maiorAB, C, A, B, C);
    }

    if (C>resto_maior && C< maiorAB){
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", resto_maior, C, maiorAB, A, B, C);
    }

    if (C<resto_maior && C< maiorAB){
        printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", C, resto_maior, maiorAB, A, B, C);
    }

}