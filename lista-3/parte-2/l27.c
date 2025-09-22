#include <stdio.h>
int main(){
    int rep,i,j,soma,vet[9],sub,n,p;
    scanf("%d",&rep);
    while(rep--){
        soma=0,p=0;
        for(i=0;i<9;i++){
            scanf("%d",&vet[i]);
            soma += vet[i];
        }
        sub = soma - 100;
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(vet[i]>vet[j]){
                    n = vet[j];
                    vet[j] = vet[i];
                    vet[i] = n;
                }
            }
        }
        for(i=0;i<9;i++){
            if(p==1) break;
            for(j=0;j<9;j++){
                if(vet[i]+vet[j]==sub){
                    vet[i]=-1; vet[j]=-1; 
                    p++; break;
                }
            }
        }
        for(i=0;i<9;i++){
            if(vet[8-i]!=-1)
            printf("%d\n",vet[8-i]);
        }
    }
    return 0;
}