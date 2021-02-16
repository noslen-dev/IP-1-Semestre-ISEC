#include <stdio.h>

int main(){
int nota1,nota2,faltas,apro_cnt=0,repro_cnt=0;
float media;
for(int i=1; i<=12; ++i){
 printf("Digite as notas do %d aluno ",i);
 scanf("%d%d",&nota1,&nota2);
 printf("Digite o numero de faltas do aluno ");
 scanf("%d",&faltas);
 if(faltas/50.0 >0.25){
  ++repro_cnt;
  continue;
 }
 if((nota1+nota2)/2.0 > 9.5){
     ++apro_cnt;
     media+=(nota1+nota2)/2.0;
 }
 
}
printf("Foram aprovados %d alunos, reprovaram %d alunos e media das notas foi %f",
apro_cnt,repro_cnt,media/apro_cnt);



return 0;
}