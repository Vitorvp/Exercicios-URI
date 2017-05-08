#include <stdio.h>

int main(void){

    int horas1;
    int minutos1;
    int horas2;
    int minutos2;
    int horas;
    int minutos;

    scanf("%d %d %d %d", &horas1, &minutos1, &horas2, &minutos2);

    horas = ((24-horas1) - (24-horas2));
    minutos = ((60-minutos1)-(60-minutos2));

    if(horas < 0){
        horas = horas * -1;
    }

    if(minutos < 0){
        minutos = minutos * -1;
    }

    if(horas2 < horas1){
        horas = (24 - horas1) + horas2;
    }

    if (minutos2 < minutos1){
        minutos = 60 - ((((minutos2 * 60) - (minutos1 *60))/60)*-1);
        horas = horas - 1;
    }

    if (horas1+1 == horas2 && minutos1 > minutos2){
        horas = 0;
        minutos = 60 - (((minutos1 * 60) - (minutos2 *60))/60);
    }

    if (horas1 == horas2 && minutos1 == minutos2){
        horas = 24;
        minutos = 0;
    }
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);

}