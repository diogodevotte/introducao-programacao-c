#include <stdio.h>

int somaDivisores(int num){
    int soma=1,i;
    for(i=2;i<num;i++){
        if(num%i==0){
            soma = soma + i;
            printf(" + %d",i);
        }
    }
    return soma;
}
int main(){
    int num,soma;
    scanf("%d",&num);
    printf("%d = 1",num);
    soma = somaDivisores(num);
    printf(" = %d",soma);
    if(num==soma){
        printf(" (NUMERO PERFEITO)\n");
    } else {
        printf(" (NUMERO NAO E PERFEITO)\n");
    }
    return 0;
}