#include<stdio.h>
#include<math.h>

int main(){
float a,b,c,b1;
double aux,raiz1,raiz2,deno;
printf("Introduza o a, b e c ");
scanf("%f%f%f",&a,&b,&c);
if(a==0){
    printf("a=0, nao e uma equacao quadratica");
    return 0;
}
deno=2*a;
b1=-b;
aux=sqrt(b*b-4*a*c);
raiz1=(b1+aux)/deno;
raiz2=(b1-aux)/deno;
printf("As raizes sao %lf e %lf",raiz1,raiz2);
return 0;
}