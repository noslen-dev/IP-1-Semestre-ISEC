#include <stdio.h>

float reg_temp(float temp[], int dim, float max[],float min[], int dia){
int i;
float maximo=temp[0], minimo=temp[0];
for(i=0; i<dim; ++i)
  if(temp[i]>maximo)
    maximo=temp[i];
max[dia]=maximo;
for(i=0; i<dim; ++i)
  if(temp[i]<minimo)
    minimo=temp[i];
min[dia]=minimo;
return max[dia]-min[dia];
}

int main(){
int i,j;
float resgistos[12], max[7],min[7],amplitude,amplitude_m=-1,media_m=0,media_min=0,var;
for(i=0; i<7; ++i){
  printf("Insira temperaturas do dia %d (2 em 2 horas): ",i+1);
  for(j=0; j<12; ++j)
    scanf("%f",&resgistos[j]);
    amplitude=reg_temp(resgistos,12,max,min,i);
    if(amplitude>amplitude_m)
      amplitude_m=amplitude;
}
printf("\nResumo das temperaturas da semana");
for(i=0; i<7;++i)
  printf("Dia 1 => Max: %.1f Min: %.1f \n",max[i],min[i]);
printf("Maxima amplitude termica = %.1f\n",amplitude_m);
for(i=0; i<7; ++i){
  media_m+=max[i];
  media_min+=min[i];
 }
media_m/=7;
media_min/=7;
printf("Media das temperaturas maximas=%1.f\n",media_m);
printf("\nMedia das temperaturas minimas=%1.f\n",media_min);
for(i=0, var=max[0]-max[1]; i<6;++i)
  if(max[i]-max[i+1]>var && max[i]-max[i+1]>0)
    var=max[i]-max[i+1];
printf("Maior variacao positiva entre temperaturas maximas consecutivas = %.2f",var);
return 0;
}
