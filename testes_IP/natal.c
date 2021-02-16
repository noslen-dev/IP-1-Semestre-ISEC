#include <stdio.h>
int pai_natal(int np){
    int caixas;
    if(np<10)
     caixas=1;
    else
     if(np%10==0)
      caixas=np/10;
     else
      caixas=np/10+1;
    return caixas;
}





int main(){
int np,caixas,total=0,maior=0,i=1;
float media=0;
do{
    do{
        printf("Numero de Pai Natais da encomenda %d ",i);
        scanf("%d",&np);
    }while(np<0);
    if(np!=0){
        caixas=pai_natal(np);
        printf("Numero de caixas necessario %d \n",caixas);
        total+=caixas;
        if(caixas>maior)
         maior=caixas;
        media+=caixas;
        ++i;
    }
}while(np!=0);
printf("Resumo das encomendas : \n");
printf("Numero total de caixas %d \n",total);
printf("A maior encomenda necessita de %d caixas \n",maior);
printf("Media de caixas por encomenda %.2f \n",media/(i-1));
return 0;
}