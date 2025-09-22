#include <stdio.h>
int main(){
    double mt[2][2],det;
    int i,j;
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            scanf("%lf",&mt[i][j]);
        }
    }
    det = mt[0][0]*mt[1][1] - mt[0][1]*mt[1][0];
    printf("%.2lf\n",det);
    return 0;
}