#include <stdio.h>
 
int main(){
    int n,i,res,soma=0,j,k=1;
 
    scanf("%d",&n);
 
    for(i=1;i<=n;i++){
        res = i*i*i;
        printf("%d*%d*%d = ",i,i,i);
 
        for(j=k;soma != res;j++){
            if(j%2 != 0){
                soma = soma + j;
                printf("%d",j);
                if(soma != res){
                    printf("+");
                } else {
                    k = (j+1);
                    soma = 0;
                    res = 0;
                    printf("\n");
                }
            }
            
        }
 
    }
 
    return 0;
}