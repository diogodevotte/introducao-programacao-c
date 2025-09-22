#include <stdio.h>

void transp_mt(int mt[][1000],int tmt[][1000],int tam){
    int i,j;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            tmt[j][i] = mt[i][j];
        }
    }
}

int soma_dg(int mt[][1000],int tam){
    int i,j,soma=0;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            if(i==j){
                soma += mt[i][j];
            }
        }
    }
    return soma;
}

void mult_mt(int mt[][1000],int soma,int tam){
    int i,j;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            mt[i][j] = mt[i][j]*soma;
        }
    }
}

void soma_mt(int mt[][1000],int tmt[][1000],int tam){
    int i,j;
    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            mt[i][j] = mt[i][j]+tmt[i][j];
        }
    }
}

int main(){
    int mt[1000][1000],tmt[1000][1000],tam,i,j,soma;

    scanf("%d",&tam);

    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            scanf("%d",&mt[i][j]);
        }
    }

    transp_mt(mt,tmt,tam);
    soma = soma_dg(mt,tam);
    mult_mt(mt,soma,tam);
    soma_mt(mt,tmt,tam);

    for(i=0;i<tam;i++){
        for(j=0;j<tam;j++){
            printf("%d",mt[i][j]);
            if(j!=(tam-1)){
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}