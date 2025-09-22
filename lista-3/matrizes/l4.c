#include <stdio.h>
int main(){
    float mt[2][2],nmt[2][2];
    int i,j,k=0,l=0;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%f",&mt[i][j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(j==0){
                nmt[i][j] = mt[i][j]*mt[0][0] + mt[i][j+1]*mt[1][0];
            }
            if(j==1){
                nmt[i][j] = mt[i][j-1]*mt[0][1] + mt[i][j]*mt[1][1];
            }
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            if(j==0){
                printf("%.3f",nmt[i][j]);
            } else {
                printf(" %.3f",nmt[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}