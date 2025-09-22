#include <stdio.h>

int main() {
    int num,fat,i=2,n,res,prim=0,soma=1,control=0;

    do{
        scanf("%d",&num);
        fat = num;
        if(num>1){
            control++;
            do{
                res = fat % i;
                if(res == 0){
                    fat = fat / i;
                    prim++;
                } else {
                    i++;
                    continue;
                }
                soma = soma * i;
                if(prim==1){
                    if(num==i){
                        printf("%d = %d\n",num,i);
                    } else {
                    printf("%d = %d",num,i);
                    }
                } else if(soma==num){
                    printf(" x %d\n",i);
                } else {
                    printf(" x %d",i);
                }
            } while (fat != 1);
        } else {
            printf("Fatoracao nao e possivel para o numero %d!\n",num);
        }
    } while (control==0);
    return 0;
}