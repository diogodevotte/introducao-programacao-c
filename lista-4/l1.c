#include <stdio.h>
#include <stdlib.h>

typedef struct{
    double nume,deno;
} Fc;

Fc le_fracao(void){
    Fc f;
    scanf("%lf/%lf",&f.nume,&f.deno);
    return f;
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


int main(){
    int rep,m,i,x=1;
    Fc *p=NULL;

    scanf("%d",&rep);
    while(rep--){
        scanf("%d",&m);
        p = (Fc*)malloc(m*sizeof(Fc));
        for(i=0;i<m;i++){
            p[i] = le_fracao();
        }
        printf("Caso de teste %d\n",x);
        x++;
        compara_fc(p,m);
    }
    free(p);

    return 0;
}