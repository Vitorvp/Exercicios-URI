#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int quantidade;
    int tentativas;
    int advinha=0;
    int chutes=0;
    int loop_quantidade=0;
    int loop_tentativas=0;
    int menor=100;
    int armazena;
    int contagem = 0;

    scanf("%d", &quantidade);

while (loop_quantidade < quantidade){

    armazena = 0;
    menor = 100;
    loop_tentativas = 0;

    scanf("%d %d", &tentativas, &advinha);
    
    while (loop_tentativas < tentativas){
        
        loop_tentativas = loop_tentativas + 1;

        scanf("%d", &chutes);

        if (chutes == advinha && armazena == 0){
            //printf("%d\n", loop_tentativas);
            armazena = loop_tentativas;

        }else if (abs(chutes - advinha) < (abs(menor - advinha))){
            menor = chutes;
            contagem = loop_tentativas;
        }else{
            menor;
        }     

    }

        //if (valida == 1){
        //printf("é igual %d\n", loop_tentativas);
        //}else{
        if (armazena == 0){
            printf("%d\n", contagem);
        }else{
            printf("%d\n", armazena);
        }
        printf("\na %d pessoa acertou\na %d pessoa chegou mais perto\n", armazena, contagem);
        }

        loop_quantidade =  loop_quantidade + 1;
        //valida = 0;

    }

}