#include <stdio.h>
#define N 5

void int_c(char VC[], int VI[], int n){
int i,j;
for(i=0; i<n;++i){
    for(j=0; j<VI[i];++j)
     putchar(VC[i]);
    putchar('\n');
 }
}


int main(){
char VC[]={'a','e','i','o','u'};
int VI[]={5,5,1,1,2};
int_c(VC,VI,5);

return 0;
}