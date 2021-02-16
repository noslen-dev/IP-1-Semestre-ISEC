#include <stdio.h>

int dias(int recup, int novos, int ativos){
float dias_ate=(float)ativos/(recup-novos);
int resul=ativos/(recup-novos);
if(dias_ate-(int)dias_ate != 0)
 ++resul;
return resul;

}



int main(){
int recup,novos,ativos,dias_ate,maior=0;
do{
    do{
        printf("Indique valores de casos recuperados por dia, novos casos por dia e total de infecoes ativas: ");
        scanf("%d%d%d",&recup,&novos,&ativos);
    }while(recup<0 || novos <0 || ativos<0 || recup<novos);
    if(ativos!=0){
        dias_ate=dias(recup,novos,ativos);
        printf("Dias : %d\n",dias_ate);
        if(dias_ate>maior)
         maior=dias_ate;
         }
    }while(ativos!=0);
printf("Covid-19 vai acabar por completo em %d dias",maior);


return 0;
}