#include <stdio.h>
#include <stdlib.h>

int main(void){

    int A;
    int B;
    int C;

    scanf("%d %d %d", &A, &B, &C);

    int maiorab = (A+B+abs(A-B)) / 2;
    int maior = (maiorab + C + abs(maiorab-C)) / 2;
    int medio;
    int valorm;

    int teste; 
        if (maiorab!=B){
            printf("%d\n", B);
            medio=B;
            }else if (maiorab<maior){
            medio=A;
            printf("%d\n", A);               
            }

        valorm = ((A+B+C) - (medio + maior));

        printf("%d\n%d", valorm, maior);

}