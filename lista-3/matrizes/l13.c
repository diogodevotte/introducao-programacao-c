#include <stdio.h>

void transp_mt(int mt[][10],int tmt[][10],int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            tmt[j][i] = mt[i][j];
        }
    }
}

int main(){
    int mt[10][10],tmt[10][10],n,i,j;

    scanf("%d",&n);

    if(n<1 || n>10){
        printf("dimensao invalida\n");
        return 0;
    }

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mt[i][j]);
        }
    }

    transp_mt(mt,tmt,n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(mt[i][j]!=tmt[i][j] || mt[i][j]!=mt[n-1-j][n-1-i]){
                printf("nao bissimetrica\n");
                return 0;
            }
        }
    }
    printf("bissimetrica\n");
    return 0;
}