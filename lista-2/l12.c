#include <stdio.h>
 
int main(){
 
    int rep,n,i,na,cont=1,test=0,x=0,y;
    scanf("%d",&rep);
    for(i=1;i<=rep;i++){
        scanf("%d",&n);
        if(i==1){
            na = n;
        } else if(na<n){
            cont++;
            na = n;
            if(cont!=0){
                test = cont;
            }
        } else if(na>n){
            cont = 1;
            x = cont;
            na = n;
        }
    }
    if(test==0 && x==0){
        test = 1;
        printf("O comprimento do segmento crescente maximo e: %d\n",test);
    }
    else if(test!=0){
            printf("O comprimento do segmento crescente maximo e: %d\n",test);
        } else {
             printf("O comprimento do segmento crescente maximo e: %d\n",x);
        }
 
    return 0;
}