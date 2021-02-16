#include <stdio.h>

float media_cvv(int cvv){
int i,copy=cvv;
float media=0;
for(i=0; cvv>0; cvv/=10,++i)
 media+=cvv%10;
media/=i;
return media;
}

int main(){
int cvv,total=0,sup_5=0;
float media=0;
do{
    printf("Introduza o CVV: ");
    scanf("%d",&cvv);
    if(cvv>=0){
     media=media_cvv(cvv);
     ++total;
     if(media>=5)
      ++sup_5;
   }
}while(cvv>=0);

printf("Numero total de cvvs inseridos %d\n",total);
printf("NUmero de cvvs em que a media foi maior ou igual a 5 :%d",sup_5);

return 0;
}