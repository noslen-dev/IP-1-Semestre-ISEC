#include <stdio.h>

float hora_kil(int n, float tmp){
float minutos,hora;
minutos=(tmp-(int)tmp)*100;
tmp=(int)tmp+minutos/60;
hora=n/tmp;
return hora;
}



int main(){
int n_func,n_traj,i,j,n;
float velocidade,media=0,tmp;
printf("Numero de funcionarios ");
scanf("%d",&n_func);
for(i=1;i<=n_func;++i){
    printf("Funcionario %d \n",i);
    media=0;
    do{
        printf("NUmero de trajetos ");
        scanf("%d",&n_traj);
    }while(n_traj<0||n_traj>6);
    for(j=1;j<=n_traj;++j){
        printf("Trajeto %d\n",j);
        printf("Quilometros percorridos e tempo decorrido ");
        scanf("%d%f",&n,&tmp);
        velocidade=hora_kil(n,tmp);
        media+=velocidade;
        if(velocidade<30)
         printf("Abaixo do limite minimo %f\n",velocidade);
        if(velocidade>100)
         printf("Acima do limite maximo %f\n",velocidade);
        else
         printf("velocidade no trajeto=%f\n",velocidade);
    }
    media/=n_traj;
    printf("Velocidade media no trajeto %f\n",media);
}

return 0;
}