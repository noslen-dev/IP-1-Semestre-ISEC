// O da stora
#include <stdio.h>
#define JG 2
#define JR 2
void main()
{
int faltasc[JG][JR], faltass[JG][JR],jg,jr, cont=0,somac=0, somas=0, mediac1, mediain;
//obter faltas
for (jg=0;jg<JG;jg++)
{
for (jr=0;jr<JR;jr++)
{
do {
printf("Introduza as faltas cometidas para o jogador %d na jornada %d ", jg+1, jr+1);
scanf("%d",&faltasc[jg][jr]);
printf("Introduza as faltas sofridas para o jogador %d na jornada %d ", jg+1, jr+1);
scanf("%d",&faltass[jg][jr]);
} while(faltasc[jg][jr]<0 || faltass[jg][jr]<0);
}
}
//ver diferença de faltas
for (jg=0;jg<JG;jg++)
{
for (jr=0;jr<JR;jr++)
{
somac=somac+faltasc[jg][jr];
somas=somas+faltass[jg][jr];
}
if (somac-somas>3)
cont++;
somac=0;
somas=0;
}
printf ("O número de jogadores com a diferença superior a 3 e de %d\n",cont);
//calcular media de faltas cometidas da 1ª jornada
somac=0;
for (jg=0;jg<JG;jg++)
somac=somac+faltasc[jg][0];
mediac1=somac/JG;
printf ("Media da 1a jornada = %d\n", mediac1);
//calcular jornadas com media de faltas cometidas superior à da 1ª jornada
somac=0;
for (jr=1;jr<JR;jr++)
{
for(jg=0;jg<JG;jg++)
somac=somac+faltasc[jg][jr];
mediain=somac/JG;
if (mediain>mediac1)
printf ("Na jornada %d a media %d e superior a media da 1a jornada\n", jr+1, mediain);
somac=0;
}
}