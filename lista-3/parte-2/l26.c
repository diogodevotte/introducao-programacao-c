#include <stdio.h>
int main(){
    int vetS[6]={},vetJ[6]={},i,j,rep,acerto,sena=0,quina=0,quadra=0;
    for(i=0;i<6;i++){
        scanf("%d",&vetS[i]);
    }
    scanf("%d",&rep);
    while(rep--){
        acerto=0;
        for(i=0;i<6;i++){
            scanf("%d",&vetJ[i]);
        }
        for(i=0;i<6;i++){
            for(j=0;j<6;j++){
                if(vetS[i]==vetJ[j]){
                    acerto++;
                }
            }
        }
        if(acerto==6)sena++;
        else if(acerto==5)quina++;
        else if(acerto==4)quadra++;
    }
    if(sena==0){
        printf("Nao houve acertador para sena\n");
    } else if(sena!=0){
        printf("Houve %d acertador(es) da sena\n",sena);
    }
    if(quina==0){
        printf("Nao houve acertador para quina\n");
    } else if(quina!=0){
        printf("Houve %d acertador(es) da quina\n",quina);
    }
    if(quadra==0){
        printf("Nao houve acertador para quadra\n");
    } else if(quadra!=0){
        printf("Houve %d acertador(es) da quadra\n",quadra);
    }
    return 0;
}