#include<stdio.h>

int main(){
float f,c;
printf("Digite a temperatura em Fahrenheit ");
scanf("%f",&f);
printf("%.2f Fahrenheit = %.2f Celsius\n",f,(5/9.0)*(f-32));
return 0;   
}