#include <stdio.h>

int main(){
int n_noites;
float total=0;
printf("Digite o numero de noites que o cliente ficara ");
scanf("%d",&n_noites);
for(int i=1; i<=n_noites;++i){
 total+=50.0/i;
 printf("%d noite custa %.2f\n",i, 50.0/i);
}
printf("A cobranca a efetuar e de %.2f euros ",total);


return 0;
}