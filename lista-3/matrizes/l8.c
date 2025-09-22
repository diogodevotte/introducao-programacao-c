#include <stdio.h>

int ehPermutacao( int matriz[500][500], int n, int *soma){
    int i,j,difzl,difzc;

    for(i=0;i<n;i++){
        difzl=0; difzc=0;
        for(j=0;j<n;j++){
            
            if(matriz[i][j]!=0){
                difzl++;
                if(matriz[i][j]!=1){
                    return 0;
                }
            }

            if(matriz[j][i]!=0){
                difzc++;
                if(matriz[j][i]!=1){
                    return 0;
                }
            }

        }

        if(difzl>1 || difzl==0 || difzc>1 || difzc==0){
            return 0;
        }

    }
    
    return 1;
}




int main(){
    int mt[500][500],n,i,j,soma,permt;

    scanf("%d",&n);

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mt[i][j]);
            soma += mt[i][j];
        }
    }

    permt = ehPermutacao(mt,n,&soma);

    if(permt==0){
        printf("%d\n",n);
        printf("NAO EH PERMUTACAO\n");
        printf("%d\n",soma);
    }else if(permt==1){
        printf("%d\n",n);
        printf("PERMUTACAO\n");
        printf("%d\n",soma);
    }

    return 0;
}