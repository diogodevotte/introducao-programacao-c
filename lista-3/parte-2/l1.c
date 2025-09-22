#include <stdio.h>
int main (){
    int v,m,b,i,cont;
    scanf("%d",&v);
    int vetor[v];
    for(i=0;i<v;i++){
        scanf("%d",&vetor[i]);
    }
    scanf("%d",&b);
    while(b--){
        scanf("%d",&m);
        cont = 0;
        for(i=0;i<v;i++){
            if(m == vetor[i]){
                printf("ACHEI\n");
                cont++;
                break;
            }
        }
        if(cont==0){
            printf("NAO ACHEI\n");
        }
    }
    return 0;
}