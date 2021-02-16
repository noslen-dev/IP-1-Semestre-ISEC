#include<stdio.h>
#include<math.h>
int main(){
float c1,c2,h;
double hip,area;
printf("Digite os valores dos dois catetos: ");
scanf("%f%f",&c1,&c2);
hip=pow(c1*c1+c2*c2,0.5);
area=(c1*c2)/2;
printf("O valor da area e : %.2lf e o valor da hipotenusa e: %.2lf",area, hip);
return 0;
}