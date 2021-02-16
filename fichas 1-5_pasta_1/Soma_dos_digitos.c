#include<stdio.h>

int main(){
float num,num1,num2,num3;
double num_aux;
printf("Digite um numero ");
scanf("%f",&num);
num_aux=num/10.0;
num1=(num_aux-(int)num_aux)*10;
num_aux=num/100.0;
num2=(num_aux-(int)num_aux)*10;
num_aux=num/1000.0;
num3=num_aux*10;
printf("%d",(int)num1+(int)num2+(int)num3);
return 0;    
}