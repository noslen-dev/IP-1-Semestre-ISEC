#include<stdio.h>/*programa k devolve onumero inteiro mais proximo da media de dois numeros reais*/
int int_aprox(float a, float b){ 
float media=(a+b)/2;
return media-(int)media>=0.5 ? media+1 : media;
}

int main(){
printf("%d",int_aprox(9.5,7));

return 0;
}