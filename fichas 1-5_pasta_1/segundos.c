#include<stdio.h>

int main(){
int horas,minutos,seg;
float currente,valor;
printf("Digite um numero de segundos: ");
scanf("%f",&currente);
valor=currente;
horas=currente/3600;
currente=currente-3600*horas;
minutos=currente/60;
currente=currente-60*minutos;
seg=currente;
printf("%f segundos sao %d horas; %d minutos e %d segundos",valor,horas,minutos,seg);
return 0;
}




