#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[32];
    double valor;
} Merc;

typedef struct{
    char nome[32];
    int quant;
} Quant;

Merc le_mercadorias(void){
    Merc P;
    scanf("%s%lf",P.nome,&P.valor);
    return P;
}

Quant le_quant(void){
    Quant P;
    scanf("%s%d",P.nome,&P.quant);
    return P;
}

double soma_comp(Merc *P,Quant *D,int m,int n){
    int i,j,cont;
    double soma=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cont = strcmp(P[i].nome,D[j].nome);
            if(cont==0){
                soma += P[i].valor*D[j].quant;
            }
        }
    }
    return soma;
}

int main(){
    int rep,m,i,n;
    double soma;
    Merc *P;
    Quant *D;

    scanf("%d",&rep);
    while(rep--){
        scanf("%d",&m);
        P = (Merc*)malloc(m*sizeof(Merc));
        for(i=0;i<m;i++){
            P[i] = le_mercadorias();
        }

        scanf("%d",&n);
        D = (Quant*)malloc(n*sizeof(Quant));
        for(i=0;i<n;i++){
            D[i] = le_quant();
        }

        soma = soma_comp(P,D,m,n);
        printf("R$ %.2lf\n",soma);
    }
    free(P);
    free(D);
    return 0;
}