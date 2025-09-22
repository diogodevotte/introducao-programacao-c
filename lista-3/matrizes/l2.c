#include <stdio.h>
#define N 1000
int main(){
    int mt[N][N]={},n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mt[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                printf("%d\n",mt[i][j]);
            }
        }
    }
    return 0;
}