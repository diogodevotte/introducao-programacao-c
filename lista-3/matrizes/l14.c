#include <stdio.h>
int main(){
    int mt[1000][1000],n,i,j,vl,cont;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mt[i][j]);
        }
    }
    do{
        cont = 0;
        for(j=0;j<n;j++){
            for(i=0;i<(n-1);i++){
                if(mt[i][j]>mt[i+1][j]){
                    vl = mt[i+1][j];
                    mt[i+1][j] = mt[i][j];
                    mt[i][j] = vl;
                    cont++;
                }
            }
        }
    } while(cont!=0);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d",mt[i][j]);
            if(j!=(n-1)){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}