#include <stdio.h>

float preco(int distancia, float tmp, int equipa, float custo, float custo_kilo){
    float total;
    total=(tmp*equipa*custo)+(distancia*custo_kilo);
    return total;
}


int main(){
int distancia,equipa,n_servicos,i=1;
float tmp,custo,custo_kilo,total,menor,somador=0;
do{
    printf("Numero de servicos ");
    scanf("%d",&n_servicos);
}while(n_servicos<0 || n_servicos>6);
for(i=1; i<=n_servicos;++i){
    printf("\nCliente %d",i);
    printf("\nDistancia,tempo,custo/hora,custo/km ");
    scanf("\n%d%f%d%f%f",&distancia,&tmp,&equipa,&custo,&custo_kilo);
    total=preco(distancia,tmp,equipa,custo,custo_kilo);
    printf("\nCusto do servico=%.2f",total);
    somador+=total;
    if(i==1)
     menor=total;
    else
     if(total<menor)
      menor=total;
}
printf("\nCusto total dos servicos %.2f\n",somador);
printf("Menor custo %.2f",menor);
return 0;
}