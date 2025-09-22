#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double nume,deno;
} Fc;

void le_fracao(char *linha,Fc *p,int *vet){
    int i=0,k=0,t=0,j=0;

    while(linha[i]!=0){
        k=0; j=0;
        char nume[10]={},deno[10]={};
        while(linha[i]!='/'){
            nume[k] = linha[i];
            k++; i++;
            p[t].nume = atof(nume);
        }

        if(linha[i]=='/'){
            i++;
            while(linha[i]!=' ' && linha[i]!='\0'){
                deno[j] = linha[i];
                j++; i++;
                p[t].deno = atof(deno);
            }
        }

        while(linha[i]==' '){
            i++;
        }

        t++;
    }
}

void compara_fc(Fc* p,int m){
    int i,j,cont=0;
    double x,y;
    for(i=0;i<m;i++){
        x = p[i].nume/p[i].deno;
        for(j=(i+1);j<m;j++){
            y = p[j].nume/p[j].deno;
            if(x==y){
                printf("%.0lf/%.0lf equivalente a %.0lf/%.0lf\n",p[i].nume,p[i].deno,p[j].nume,p[j].deno);
                cont++;
            }
        }
    }
    if(cont==0){
        printf("Nao ha fracoes equivalentes na sequencia\n");
    }
}

int qtd_fracoes(char *linha,int *vet){
    int i,m=0,j=0;
    for(i=0;linha[i]!=0;i++){
        if(linha[i]=='/'){
            m++;
            vet[j] = i;
            j++;
        }
    }
    return m;
}

int main(){
    int rep,m,x=1,vet[50]={},i;
    Fc *p=NULL;

    scanf("%d%*c",&rep);
    while(rep--){
        char linha[500]={};
        scanf("%[^\n]%*c",linha);
        m = qtd_fracoes(linha,vet);

        p = (Fc*)malloc(m*sizeof(Fc));
        
        le_fracao(linha,p,vet);

        printf("Caso de teste %d\n",x);
        x++;
        compara_fc(p,m);

        free(p);
    }

    return 0;
}