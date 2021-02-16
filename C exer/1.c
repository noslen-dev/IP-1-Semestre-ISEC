#include <stdio.h>
#define DIM 10

int main(){
int arr[DIM],i;
printf("Introduza 10 numeros\n");
for(i=0; i<DIM ;++i){
    printf("\n%d elemento ",i+1);
    scanf("%d",&arr[i]);
}
for(i=0; i<DIM ;++i)
 printf("%d ",arr[i]);


return 0;
}