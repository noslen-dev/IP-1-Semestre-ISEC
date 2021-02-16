#include<stdio.h>

int main(){
float freq_1,freq_2,trab,nota_final;
printf("Introduza a nota obtida na primeira frequencia, na segunda e no trabalho pratico ");
scanf("%f%f%f",&freq_1,&freq_2,&trab);
freq_1=0.4*freq_1;
freq_2=0.4*freq_2;
trab=(trab*200/1000)*0.2;
nota_final=freq_1+freq_2+trab;
printf("A nota final do aluno e %.2f valores",nota_final);
return 0;
}