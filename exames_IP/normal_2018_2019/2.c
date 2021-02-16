#include <stdio.h>
#define N 5
#define P 10
int determina_aprovados(float notas[], int pres[], int n_alunos, int min_pres, float aprovados[]){
int i,j,cnt=0;
printf("Lista dos alunos aprovados:\n");
for(i=j=0; i<n_alunos; ++i)
  if(notas[i]>=9.5 && pres[i]>=min_pres){
    aprovados[j++]=notas[i];
    ++cnt;
    printf("Aluno %d->%.2f\n",i+1,notas[i]);
  }
  printf("Total de aprovados: %d",cnt);
  return cnt;
}

int main(){
int i,pres[N],cnt;
float media=0,melhor,notas[N],aprovados[N];
printf("Insira as notas e as presencas dos %d alunos\n",N);
for(i=0; i<N ;++i)
  do{
    printf("Aluno %d: ",i+1);
    scanf("%f%d",&notas[i],&pres[i]);
    if(notas[i]<0 || notas[i]>20)
      printf("==> Nota fora do intervalo [0,20]!\n");
    if(pres[i]<0)
      printf("==> Numero de presencas invalido!\n");
  }while(notas[i]<0 || notas[i]>20 ||pres[i]<0);
  printf("-----------------------------------------\n");
  cnt=determina_aprovados(notas,pres,N,P,aprovados);
  printf("\n-----------------------------------------");
for(i=0;i<cnt;++i)
  media+=aprovados[i];
media/=cnt;
for(melhor=i=0; i<cnt; ++i)
  if(aprovados[i]>melhor)
    melhor=aprovados[i];
putchar('\n');
printf("Melhor nota: %.2f",melhor);
printf("\nMedia das notasdos aprovados: %.2f",media);
return 0;
}
