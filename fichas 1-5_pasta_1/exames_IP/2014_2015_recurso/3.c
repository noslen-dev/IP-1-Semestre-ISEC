#include <stdio.h>

int NCarac(char st[], char vecCar[],  int vecInt[], int tam){
int i,j;
for(i=0; i<tam; ++i)
  vecInt[i]=0;
for(i=0; i<tam; ++i)
  for(j=0; st[j]!='\0';++j)
    if(st[j]==vecCar[i])
      ++vecInt[i];
return j;
}


int main(){
int nrcarac, vecInt[5],i;
char st[50]="hoje esta a chover!";
char vecCar[5]= {'a', 'e', 'i', 'o', 'u'};
nrcarac = NCarac (st,vecCar,vecInt, 5);
printf("%d\n",nrcarac);
for(i=0; i<5; ++i)
  printf("%d ",vecInt[i]);
return 0;
}