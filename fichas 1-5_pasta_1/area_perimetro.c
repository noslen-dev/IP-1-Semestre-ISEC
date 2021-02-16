#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
double r;
printf("Introduza o raio da circunferencia ");
scanf("%lf",&r);
printf("O perimetro da circunferencia e: %.2lf e a area da circunferencia e: %.2lf",2*3.14*r,r*r*3.14);
return 0;    
}

