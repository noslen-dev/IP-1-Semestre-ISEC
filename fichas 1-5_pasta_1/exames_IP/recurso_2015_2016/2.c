#include <stdio.h>

int verifica(int h_entrada,int m_entrada,int h_saida,int m_saida){
if(h_saida-h_entrada<0)
  return 0;
else
  if(h_saida-h_entrada==0)
    if(m_saida-m_entrada<0)
      return 0;
return 1;    
}


float a_pagar(int horaEntrada, int minEntrada, int horaSaida, int minSaida){
float taxa;
int i,horas_tempo,min,tempo_estacionamento,p,time;
horas_tempo=(horaSaida-horaEntrada)*60;
min= minSaida>minEntrada? minSaida-minEntrada :minEntrada-minSaida;
tempo_estacionamento=horas_tempo-min;
for(p=time=0; time<tempo_estacionamento;time+=15,++p);
for(taxa=0,i=1;i<=p;++i)
  if(i==1)
    taxa+=0.35;
  else
    if(i>=2 && i<=8)
      taxa+=0.25;
    else
      taxa+=0.20;
if(taxa>4)
 taxa=4;
return taxa;
}

int main(){
int h_entrada,m_entrada,h_saida,m_saida;
do{
  printf("Entrada (formato hh:mm)");
  scanf("%d:%d",&h_entrada,&m_entrada);
}while(h_entrada<0 || h_entrada>23 || m_entrada<0 || m_entrada>59);

do{
  printf("Saida (formato hh:mm)");
  scanf("%d:%d",&h_saida,&m_saida);
}while(h_saida<0 || h_saida>23 || m_saida<0 || m_saida>59 || verifica(h_entrada, m_entrada, h_saida, m_saida)==0);
printf("Total a pagar:%.2f",a_pagar(h_entrada,m_entrada,h_saida,m_saida));
}