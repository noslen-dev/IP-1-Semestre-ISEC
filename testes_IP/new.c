#include <stdio.h>

int sumatorio(int num){
int i,soma=0;
for(i=2;num>0;++i,num/=10)
 soma+=(num%10)*i;
return soma;
}

int main(){
int control,num,s_func,validos=0,invalidos=0;
char ch;
do{
    printf("Numero CC: ");
    scanf("%d",&num);
    do{
        printf("Digito de controlo: ");
        scanf("%d",&control);
    }while(control<0 || control>9);
    s_func=sumatorio(num);
    if((s_func+control)%11==0){
        printf("CC com numero %d e valido\n",num);
        ++validos;
    }
    else{
        printf("CC com o numero %d nao e valido\n",num);
        ++invalidos;
    }
    printf("Deseja continuar? SIM s NAO n: ");
    fflush(stdin);
    scanf("%c",&ch);
}while(ch=='s' || ch=='S');
printf("\nForam introduzidos %d cartoes validos\n",validos);
printf("\nForam introduzidos %d cartoes invalidos\n",invalidos);
return 0;
}