#include <stdio.h>
#include <stdlib.h>

int main (){
    int hora_inicial,minuto_inicial;
    int duracao_horas,duracao_minutos;
    int hora_final,minuto_final;

    printf("Digite a hora inicial (entre 0 e 23):");
    scanf("%d",&hora_inicial);
    printf("Digite os minutos iniciais (entre 0 e 59):");
    scanf("%d",&minuto_inicial);
    printf("Digite a duracao em horas :");
    scanf("%d",&duracao_horas);
    printf("Digite a duracao em minutos :");
    scanf("%d",&duracao_minutos);

    minuto_final=minuto_inicial+duracao_minutos;
    hora_final=hora_inicial+duracao_horas;
    if(minuto_final>=60){
        hora_final=hora_final+minuto_final/60;
        minuto_final=minuto_final%60;
    }
if(hora_final>=24){
    hora_final=hora_final%24;
}

printf("A hora de termino sera : %02d:%02d",hora_final,minuto_final);
return 0;
}
