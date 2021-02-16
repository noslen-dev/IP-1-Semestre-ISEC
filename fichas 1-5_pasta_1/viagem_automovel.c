#include<stdio.h>

int main(){
float duracao_viagem,velocidade,litros,distancia;
printf("Digite a duracao da viagem e a velocidade ");
scanf("%f%f",&duracao_viagem,&velocidade);
distancia=velocidade*duracao_viagem;
litros=distancia*6.5/100;
printf("A distancia percorrida foi %.2fkm e gastou %.2f litros de combustivel",distancia,litros);
return 0;
}