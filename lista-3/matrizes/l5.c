#include <stdio.h>
int main(){
    int mt[6][6]={},i,j,k=0,m=-1,cont=0,soma=0,maior,prim=0;
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            scanf("%d",&mt[i][j]);
        }
    }
    while(1){
        soma = 0;
        prim++;
        while(cont<3){
            cont++;m++;
            soma += mt[k][m] + mt[k+2][m];
            if(cont==2){
                soma += mt[k+1][m];
            }
        }
        if((m-2)<=3){
            cont = 0;
            m -= 2;
            if(prim==1){
                maior = soma;
            } else if(soma>maior){
                maior = soma;
            } 
        } else {
            m = 0;
            k++;
            cont = 0;
            if(k>3){
                break;
            }
        }
    }
    printf("%d\n",maior);
    return 0;
}