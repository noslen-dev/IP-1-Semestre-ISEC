#include <stdio.h>
#define ROW 2
#define COLUM 2
int soma(int arr[ROW][COLUM], int i){
int j,sum=0;
for(j=0;j<COLUM;++j)
  sum+=arr[i][j];
return sum;
}

int main(){
int sofridas[ROW][COLUM],cometidas[ROW][COLUM],i,j,cnt=0,epoca=0,jornadas[COLUM],index=0;
float media_1=0, sum=0;
for(i=0; i<ROW ;++i)
  for(j=0; j<COLUM ;++j){
    printf("Digite as faltas sofridas do jogador %d na %d jornada ",i+1,j+1);
    scanf("%d",&sofridas[i][j]);
  }
for(i=0; i<ROW ;++i)
  for(j=0; j<COLUM ;++j){
    printf("Digite as faltas cometidas do jogador %d na %d jornada ",i+1,j+1);
    scanf("%d",&cometidas[i][j]);
  }
for(i=0; i<ROW; ++i)
  for(j=0; j<COLUM; ++j)
    if(soma(cometidas,i)-soma(sofridas,i)>3)
      ++cnt;
for(i=0; i<ROW ;++i)
  media_1+=cometidas[i][0];
media_1/=ROW;
for(j=1; j<COLUM ;++j){
  for(i=sum=0; i<ROW; ++i)
    sum+=cometidas[i][j];
  sum/=ROW;
if(sum>media_1)
  jornadas[index++]=j+1;
}
printf("Existem %d jogadores cuja diferenca entre o numero de faltas cometidas e sofridas e superior a 3\n",cnt);
printf("Nas jornadas ");
for(i=0; i<index;++i)
 printf("%d ",jornadas[i]);
printf("o numero de faltas foi superior a da 1 epoca");
}