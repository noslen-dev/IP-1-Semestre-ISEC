#include <stdio.h>
int classifica(float car, float dur, float tra){
    int class;
    if(car<70 && dur>50 && tra>80)
    class=3;
    else
     if(car<70 && dur>50 && tra<80)
      class=2;
     else
      if(car>70 && dur<50 && tra>80)
       class=1;
      else
       class=0;
    return class;
}


int main(){
    float car,dur,tra;
    int i,num_test,class_ref,class,abaixo=0,acima=0;
    printf("Numero de testes ");
    scanf("%d",&num_test);
    printf("classificacao de referencia ");
    scanf("%d",&class_ref);
    for(i=1; i<=num_test;++i){
        printf("\nteste %c%d",i<=9? '\0':'0',i);
        do{
            printf("\nRT DU e CC ");
            scanf("%f%f%f",&car,&dur,&tra);
        }while(car<10 || dur<10 || tra<10 || car>120 || dur>120 || tra>120);
        class=classifica(car,dur,tra);
        if(class>class_ref)
         acima+=1;
        if(class<class_ref)
         abaixo+=1;
        printf("\nClassificacao do metal %d\n",class);
    }
    printf("Numero de testes acima da classificacao de referencia %d\n",acima);
    printf("Numero de testes abaixo da classificacao de referencia %d",abaixo);
return 0;
}