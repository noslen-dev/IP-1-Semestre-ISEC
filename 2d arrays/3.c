#include <stdio.h>
#define L 3
#define C 5

int main(){
int i,j;
float arr[L][C]={{5.5,3.4,6.7,8.9,10},{5.5,3.4,6.7,8.9,10},{5.5,3.4,6.7,8.9,10}},media=0,maior=0;
for(j=0; j<C;++j,media=0){
  for(i=0; i<L;++i)
    media+=arr[i][j];
  printf("A media dos tempos realizados na sessao de treino %d e %.2f\n",j+1,media/3);
}
for(i=0; i<L;++i,maior=0){
  for(j=0; j<C;++j)
    if(arr[i][j]>maior)
      maior=arr[i][j];
  printf("O melhor tempo do atleta %d foi %.2f\n",i+1,maior);
  }

return 0;
}