#include <stdio.h>
#define DIM 10
void reuniao(int A[],int B[],int dim){
int i;
for(i=0; i<DIM;++i)
 if(A[i]==1 || B[i]==1)
  printf("%d ",i);
putchar('\n');
}

void intersect(int A[],int B[],int dim){
int i;
for(i=0; i<DIM;++i)
 if(A[i]==B[i] && A[i]==1)
  printf("%d ",i);
putchar('\n');
}

void A_min_B(int A[],int B[],int dim){
int i;
for(i=0; i<DIM;++i)
 if(A[i]==1 && B[i]==0)
  printf("%d ",i);
putchar('\n');
}



int main(){
int A[DIM],B[DIM],i;
printf("Introduza uma sequencia de 10 0s e 1s para o conjunto A ");
for(i=0; i<DIM;++i)
 scanf("%d",&A[i]);
printf("Introduza uma sequencia de 10 0s e 1s para o conjunto B");
for(i=0; i<DIM;++i)
 scanf("%d",&B[i]);
reuniao(A,B,DIM);
intersect(A,B,DIM);
A_min_B(A,B,DIM);
return 0;
}