#include <stdio.h>
int main(){
    int mt[6][6]={{0,63,210,190,-1,190},
                {63,0,160,150,95,10},
                {210,160,0,10,1,10},
                {190,150,10,0,10,20},
                {10,95,7,21,0,80},
                {190,2,-1,41,80,0}}; 

    int v,i,soma=0;

    scanf("%d",&v);

    int vet[v];

    for(i=0;i<v;i++){
        scanf("%d",&vet[i]);
    }

    i=0;
    while(1){
        soma += mt[vet[i]][vet[i+1]];
        if(mt[vet[i]][vet[i+1]]==-1){
            printf("rota invalida!\n");
            return 0;
        }
        if((i+1)==(v-1)) break;
        i++;
    }
    printf("%d\n",soma);

    return 0;
}