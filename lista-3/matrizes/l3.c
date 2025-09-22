#include <stdio.h>
#define N 1000
int main(){
    int mt[N][N]={},n,i,j,k;
    scanf("%d",&n);
    k = n-1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mt[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(j==k){
                printf("%d\n",mt[i][j]);
                k--;
            }
        }
    }
    return 0;
}