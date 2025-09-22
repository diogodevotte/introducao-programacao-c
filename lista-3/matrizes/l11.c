#include <stdio.h>
int main(){
    int mt[10][10]={},nl,nc,i,j,k,l,dif,prim=0;
    scanf("%d %d",&nl,&nc);
    if(nl>10 || nl<1 || nc>10 || nl<1){
        printf("dimensao invalida\n");
        return 0;
    }
    for(i=0;i<nl;i++){
        for(j=0;j<nc;j++){
            scanf("%d",&mt[i][j]);
        }
    }
    for(i=0;i<nl;i++){
        for(j=0;j<nc;j++){
            dif=0;
            for(k=0;k<nl;k++){
                for(l=0;l<nc;l++){
                    if(mt[i][j]==mt[k][l]) dif++;
                }
            }
            if(prim==0 && dif==1){
                printf("%d",mt[i][j]);
                prim++;
            } else if(dif==1){
                printf(",%d",mt[i][j]);
            }
        }
    }
    if(prim==0){
        printf("sem elementos unicos");
    }
    printf("\n");
    return 0;
}