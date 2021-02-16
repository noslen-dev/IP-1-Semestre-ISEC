#include<stdio.h>

int main(){
float num,num_max,soma=0;
int cnt=1;
printf("Digite numeros ");
scanf("%f",&num);
soma+=num;
num_max=num;
do{
scanf("%f",&num);
if(num<=num_max)
 break;
num_max=num;
++cnt; 
soma+=num;
}while(1);
printf("A soma dos numeros introduzidos e: %.2f e a media e %.2f",soma,soma/cnt);
return 0;
}