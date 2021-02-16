#include<stdio.h>

int main(){
int dia,mes,ano;
printf("Introduza a data: ");
scanf("%d/%d/%d",&dia,&mes,&ano);
printf("Data introduzida: %c%d%c%d%c%d",ano<10 ?'0':'\0',ano, mes<10?'0':'\0',mes, dia<10?'0':'\0',dia);
return 0;
}

