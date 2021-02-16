#include <stdio.h>
int PontoNoRetangulo(float vInfEsq[], float vSupDir[], float ponto[]){
if(ponto[0]<vInfEsq[0] ||ponto[1]<vInfEsq[1] || ponto[0]>vSupDir[0] || ponto[1]>vSupDir[1])
  return 0;
return 1;
}

int main(){
int i,participantes=0, vencedor=0, euros=0, certo, maior=0,pontos=0;
char es, control;
float ponto[2],esq[2],dir[2];
esq[0]=2.0;
esq[1]=1.5;
dir[0]=4.0;
dir[1]=2.5;
do{
  fflush(stdin);
  printf("Insira participante (S/N)? ");
  scanf("%c",&control);
  if(control=='S'){
  ++participantes;
  printf("Participante %d ",participantes);
  printf("\nEstudante?(S/N): ");
  fflush(stdin);
  scanf("%c",&es);
  if(es=='S')
    euros+=5;
  else
    euros+=10;
  for(i=1; i<=2; ++i){
    do{
      printf("Coordenadas do lancamento %d: ",i);
      scanf("%f%f",&ponto[0],&ponto[1]);
    }while(ponto[0]<0 || ponto[0]>6 || ponto[1]<0 || ponto[1]>3);
    certo=PontoNoRetangulo(esq,dir,ponto);
  if(certo==1)
    ++pontos;
  }
  printf("Conseguiu %d pontos!\n",pontos);
  if(pontos>=maior){
    maior=pontos;
    vencedor=participantes;
  }
  pontos=0;
  }
 }while(control=='S');
printf("Total de participantes %d\n",participantes);
printf("Valor angariado %d\n",euros);
printf("N do participante vencedor %d",vencedor);
return 0;
}