#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int m;
    double m3;
} Consu;

Consu le_consumo(void){
    Consu P;
    scanf("%d %lf",&P.m,&P.m3);
    return P;
}

double consu_md_cidade(Consu *P,int n){
    int i,p=0;
    double m3=0,md;
    for(i=0;i<n;i++){
        m3 += P[i].m3;
        p += P[i].m;
    }
    md = m3/p;
    md = (int)(md * 100) / 100.0;
    return md;
}   

void consu_md_pessoa(Consu *P,int n){
    int i,j,im;
    Consu X;

    for(i=0;i<n;i++){
        P[i].m3 = (int)P[i].m3 / P[i].m;
    }

    for(i=0;i<(n-1);i++){
        im = i;
        for(j=(i+1);j<n;j++){
            if(P[j].m3 < P[im].m3){
                im = j;
            }
            if(P[j].m3 == P[im].m3){
                if(P[j].m > P[im].m){
                    im = j;
                }
            }
        }
        X = P[i];
        P[i] = P[im];
        P[im] = X;
    }
}

void print_consumo(Consu *P,int n,double md,int k){
    int i, j;
    printf("Cidade# %d:\n", k);

    for (i = 0; i < n; i++) {
        if (P[i].m == -1) continue;

        int total_pessoas = P[i].m;
        double consumo_medio = P[i].m3;

        for (j = i + 1; j < n; j++) {
            if (P[j].m3 == consumo_medio) {
                total_pessoas += P[j].m;
                P[j].m = -1;
            }
        }
        printf("%d-%.0lf ", total_pessoas, consumo_medio);
    }
    printf("\nConsumo medio: %.2lf m3.\n", md);
}

int main(){
    int n,i,k=1;
    Consu *P=NULL;
    double md;

    while(1){
        scanf("%d",&n);
        if(n==0) break;
        if(k!=1) printf("\n");
        P = (Consu*)malloc(n*sizeof(Consu));

        for(i=0;i<n;i++){
            P[i] = le_consumo();
        }

        md = consu_md_cidade(P,n);
        consu_md_pessoa(P,n);
        print_consumo(P,n,md,k);
        k++;
        free(P);
    }
    return 0;
}