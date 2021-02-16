#include<stdio.h>
#include<math.h>
int main(){
int a,b,c;
printf("Digite tres numeros ");
scanf("%d%d%d",&a,&b,&c);
if(c==sqrt(a*a+b*b) || a==sqrt(c*c+b*b) || b==sqrt(c*c+c*c))
 if(a==b && a==c)
  printf("O triangulo e um triangulo equilatero");
 else
  if(a!=b && a!=c && c!=b)
   printf("O trinagulo e escaleno");
  else
   printf("O triangulo e isosceles");
else
 printf("Os tres valores digitados nao formam um triangulo");
return 0;
}