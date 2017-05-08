#include <stdio.h>

int main(void){

    int A;
    int B;
    int divisao;
    int divisao2;

    scanf("%d %d", &A, &B);

    divisao = A / B;
    divisao = divisao * B;

    divisao2 = B / A;
    divisao2 = divisao2 *A;

    if (divisao==A || divisao2==B)
        printf("Sao Multiplos\n");
        else
        printf("Nao sao Multiplos\n");
}