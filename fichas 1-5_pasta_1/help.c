#include <stdio.h>

float kil_per_hor(int n_k, float tmp){
float min,resul;
min=tmp-(int)tmp;
min=min*100;
tmp=(int)tmp+min/60;
resul=n_k/tmp;
return resul;
}

int main(){
int n_k;
float tmp,vel;
 printf("\nTrajeto %d ",j);
        printf("\nQuilometros percorridos e tempo decorrido ");
        scanf("%d%f",&n_k,&tmp);
        vel=kil_per_hor(n_k,tmp);


return 0;
}