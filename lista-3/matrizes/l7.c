#include <stdio.h>
void bord_mt(char mt[][99],int tam, char bord,char fund){
    int meio,i,j,cba,cbp,control;
    meio = (tam-1)/2;
    cba = meio-1; cbp = meio+1;
    for(i=0;i<tam;i++){
        control = 0;
        for(j=0;j<tam;j++){
            mt[i][j] = 32;
            if(i<=meio){
                if(i==0 && j==meio){
                    mt[i][j] = bord;
                } else if(i!=0){
                    if(j==cba){
                        mt[i][j] = bord;
                        cba -= 1;
                    } else if(j==cbp && control==0){
                        mt[i][j] = bord;
                        cbp += 1;
                        control = 1;
                    } else if (j>cba && j<cbp){
                        mt[i][j] = fund;
                    }
                }
            } else if (i>meio){
                if(i==(meio+1) && j==0){
                    cba += 2; cbp -= 2;
                }
                if(i==(tam-1) && j==meio){
                    mt[i][j] = bord;
                } else{
                    if(j==cba && control==0){
                        mt[i][j] = bord;
                        cba += 1;
                        control = 1;
                    } else if(j==cbp){
                        mt[i][j] = bord;
                        cbp -= 1;
                    } else if(j>=cba && j<cbp){
                        mt[i][j] = fund;
                    }
                }
            }
        }
    }
}
int main(){
    char mt[99][99]={},bord,fund;
    int i,j,tam;
    scanf("%d %c %c",&tam,&bord,&fund);
    if(tam%2==0){
        printf("Dimensao invalida!\n");
        return 0;
    }
    bord_mt(mt,tam,bord,fund);
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("%c ",mt[i][j]);
        }
        printf("\n");
    }
    return 0;