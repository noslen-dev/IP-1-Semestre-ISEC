#include <stdio.h>
int sala_func(int n_alunos, int max){
    int n_salas;
    if(max>n_alunos)
     n_salas=1;
    if(n_alunos%max!=0)
     n_salas=n_alunos/max+1;
    else
     n_salas=n_alunos/max;
    return n_salas;
}





int main(){
int maior=0,i=1,salas,n_alunos;
do{
    do{
    printf("\nNumero de alunos inscritos na UC %d ",i);
    scanf("%d",&n_alunos);
   }while(n_alunos<0);
   if(n_alunos!=0){
       salas=sala_func(n_alunos,50);
       printf("\nNumero de salas necessarias pra a UC%d: %d",i,salas);
       if(salas>maior)
        maior=salas;
       ++i;
   }
}while(n_alunos>0);
printf("\nMaior numero de salas por exame %d",maior);


return 0;
}