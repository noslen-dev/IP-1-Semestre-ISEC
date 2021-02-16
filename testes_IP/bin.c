#include <stdio.h>

int binary(int num){
int logic=1;
for(; logic&& num>0;num/=10)
 if(num%10!=0 && num%10!=1)
  logic=0;
return logic;

}



int main(){
int num,n_cnt=0,b_cnt=0,maior=0,bin,i,aux,cp;
do{
    do{
        printf("Numero ");
        scanf("%d",&num);
    }while(num<0);
    cp=num;
    bin=binary(num);
    if(bin){
        n_cnt=0;
        ++b_cnt;
        for(i=0; num>0; ++i, num/=10);
        if(i>maior){
            maior=i;
            aux=cp;
        }
    }
    else
        ++n_cnt;
    }while(n_cnt!=3);
printf("Foram introduzidos %d numeros binarios e o maior deles foi %d ",b_cnt,aux);
return 0;
}