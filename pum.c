#include <stdio.h>

int main(void){

    int pum=0;
    int A;
    int v1 = 1;
    int v2 = 2;
    int v3 =3;

    scanf("%d", &A);

while (pum < A){

    printf("%d %d %d PUM\n", v1, v2, v3);

    v1 = v1 + 4;
    v2 = v2 + 4;
    v3 = v3 + 4;

    pum = pum + 1;
    
    }
}