#include <stdio.h>

int main(){
    int n,f1,f2,i,k,soma=0,cont=0,f=0,na,x=0;

    scanf("%d %d %d",&n,&f1,&f2);

    if(n>2){
    for(i=0;i<n;i++){
        scanf("%d",&k);
        if(i==0){
            if(k==f1){
                printf("OK\n");
            } else {
                printf("Nao e Fibonacci\n");
                i = n;
                break;
            }
        } 
        if(i==1){
            if(k==f2){
                printf("OK\n");
            } else {
                printf("Nao e Fibonacci\n");
                i = n;
                break;
            }
        }
        if(cont<2){
            soma = soma + k;
            cont++;
            na = k;
        } else if (soma==k){
            printf("OK\n");
            soma = k + na;
            na = k;
            f++;
        } else {
            printf("Nao e Fibonacci\n");
            x++;
            break;
        }
    }
    }   
    if(f!=0 && x==0){
        printf("A serie informada e de Fibonacci\n");
    }
    return 0;
}