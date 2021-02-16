#include<stdio.h>

int main(){
int horas,minutos;
printf("Digute as horas e os minutos no formato HH:MM ");
scanf("%d:%d",&horas,&minutos);
switch(horas){
case 13:
horas=1;
break;
case 14:
horas=2;
break;
case 15:
horas=3;
break;
case 16:
horas=4;
break;
case 17:
horas=5;
break;
case 18:
horas=6;
break;
case 19:
horas=7;
break;
case 20:
horas=8;
break;
case 21:
horas=9;
break;
case 22:
horas=10;
break;
case 23:
horas=11;
break;
case 24:
horas=0;
break;
}

printf("A horas no formato AM-PM sao %c%d:%dPM",horas==0 ? '0':'\0' ,horas,minutos);

return 0;
}