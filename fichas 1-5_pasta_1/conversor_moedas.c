#include <stdio.h>

int main(){
int moeda5,moeda2,moeda05,moeda01;
float currente,valor;
printf("Introduza uma quantia em euros: ");
scanf("%f",&currente);
valor=currente;
moeda5=currente/0.5;
currente=currente-0.5*moeda5;
moeda2=currente/0.2;
currente=currente-moeda2*0.2;
moeda05=currente/0.05;
currente=currente-moeda05*0.05;
moeda01=currente/0.01+0.02;
printf("%f euros sao %d moedas de 0.5 euros; %d moedas de 0.2 euros; %d moedas de 0.05 euros e %d moedas de 0.01 euros"
,valor,moeda5,moeda2,moeda05,moeda01);
return 0;
}