#include <stdio.h>
#define N 100
int main(){
    int mt[N][N]={},alt,larg,bord,vbord,i,j;
    scanf("%d %d %d %d",&larg,&alt,&bord,&vbord);
    printf("P2\n");
    printf("%d %d\n",larg,alt);
    printf("255\n");
    for(i=0;i<alt;i++){
        for(j=0;j<larg;j++){
            if(bord!=0){
                if(i<bord || j<bord || i>(alt-1-bord) || j>(larg-1-bord)){
                    mt[i][j] = vbord;
                }
                if(larg==(j-1)){
                    printf("%d",mt[i][j]);
                } else {
                printf("%d ",mt[i][j]);
                }
            }
        }
        printf("\n");
    }
    return 0;
}