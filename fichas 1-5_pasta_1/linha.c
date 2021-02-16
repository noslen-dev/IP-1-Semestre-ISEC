#include <stdio.h>
void linha(int n){
for(int i=1; i<=n;++i)
 putchar('*');
}


int main(){
int n;
printf("Digite o lado do quadrado ");
scanf("%d",&n);
for(int i=0; i<n; ++i){
  linha(n);
  putchar('\n');
}


return 0;
}