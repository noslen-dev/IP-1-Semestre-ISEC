#include <stdio.h>
#define DIM 5


int main(){
int arr[DIM],i;
float media=0;
printf("Introduza 5 numeros ");
for(i=0; i<DIM;++i){
 scanf("%d",&arr[i]);
 media+=arr[i];
}
media/=DIM;
for(i=0; i<DIM;++i)
 if(arr[i]<media)
  arr[i]=0;
printf("a media e %.2f\n",media);
for(i=0; i<DIM;++i)
 printf("%d ",arr[i]);
return 0;
}