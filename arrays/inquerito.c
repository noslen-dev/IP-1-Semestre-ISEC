#include <stdio.h>
#define N 100

int validacao(char ch){
    int res;
    switch(ch){
        case 'S' : case 'N' :case 'I' :case 'X' :case 'A' :
        res=1; break;
        default:res=0;
    }
    return res;
}



void int_c(char VC[], int VI[], int n){
int i,j,aux;
for(i=j=0; i<5;++i,++j){
    for(aux=0; aux<VI[i];++aux)
     putchar(VC[j]);
    putchar('\n');
 }
}

int main(){
int num,i,s_cnt=0,n_cnt=0,i_cnt=0,a_cnt=0,x_cnt=0,maior,VI[5];
char VC[5]={'S','N','I','A','X'}, arr[N];
do{
printf("Indique um total de inqueritos ");
scanf("%d",&num);
}while(num<=0);
for(i=1;i<=num;++i){
    printf("--->%d Inquerito\n",i);
    do{
        printf("Opcao escolhida(S/N/I/A/X) " );
        fflush(stdin);
        scanf("%c",&arr[i-1]);
    }while(!validacao(arr[i-1]));
    switch(arr[i-1]){
        case 'S': ++s_cnt; break;
        case 'N': ++n_cnt; break;
        case 'I': ++i_cnt; break;
        case 'A': ++a_cnt; break;
        case 'X': ++x_cnt; break;
    }
}
VI[0]=s_cnt;
VI[1]=n_cnt;
VI[2]=i_cnt;
VI[3]=a_cnt;
VI[4]=x_cnt;
maior=VI[0];
for(i=0; i<5;++i)
 if(VI[i]>maior)
  maior=VI[i];
if(maior==VI[0])
 printf("Segundo a sondagem a opcao vencedora sera a SIM\n");
if(maior==VI[1])
 printf("Segundo a sondagem a opcao vencedora sera a NAO\n");
if(maior==VI[2])
 printf("Segundo a sondagem a opcao vencedora sera a INDECISO\n");
if(maior==VI[3])
 printf("Segundo a sondagem a opcao vencedora sera a VOU ME ABSTECER\n");
if(maior==VI[4])
 printf("Segundo a sondagem a opcao vencedora sera a MAIS DE UM(X)\n");
printf("\nResultados das varias opcoes:\n");
int_c(VC,VI,5);

return 0;
}