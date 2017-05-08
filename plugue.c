#include <stdio.h>

int main(void){

    int A, B, C, D, E;
    int A2, B2, C2, D2, E2;

    scanf ("%d %d %d %d %d\n%d %d %d %d %d", &A, &B, &C, &D, &E, &A2, &B2, &C2, &D2, &E2);

    if (A != A2 && B != B2 && C != C2 && D != D2 && E != E2){
        printf("Y\n");
    }else{
        printf("N\n");
    }
}