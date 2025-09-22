#include <stdio.h>
#include <stdlib.h>

typedef struct{
    float a;
    int exp;
}Poli;

Poli le_polinomios(int *maior){
    Poli P;
    scanf("%f %d",&P.a,&P.exp);
    if(P.exp > (*maior)) *maior = P.exp;
    return P;
}

void print_polinomios(double *coef,int k){
    int i,prim=0;

    for(i=k;i>=0;i--){
        if(coef[i] == 0) continue;
        if(prim==0){
            if(i!=0){
                printf("%+.2lfX^%d",coef[i],i); 
            } else {
                printf("%+.2lf",coef[i]); 
            }
        } else {
            if(i!=0){
                printf("%+.2lfX^%d",coef[i],i); 
            } else {
                printf("%+.2lf",coef[i]); 
            }
        }
        prim++;
    }
    printf("\n");
}

void soma_polinomios(int n,Poli *p1,int m,Poli *p2,double *coef){
    int i;
    for(i=0;i<n;i++){
        coef[p1[i].exp] += p1[i].a;
    }
    for(i=0;i<m;i++){
        coef[p2[i].exp] += p2[i].a;
    }
}

void sub_polinomios(int n,Poli *p1,int m,Poli *p2,double *coef){
    int i;
    for(i=0;i<n;i++){
        coef[p1[i].exp] += p1[i].a;
    }
    for(i=0;i<m;i++){
        coef[p2[i].exp] -= p2[i].a;
    }
}

int main(){
    int rep,n,m,i,k,maior;
    char op;
    Poli *p1=NULL,*p2=NULL;
    double *coef=NULL;

    scanf("%d%*c",&rep);
    while(rep--){
        maior=0;
        scanf("%c%*c",&op);
        
        scanf("%d",&n);
        p1 = (Poli*)malloc(n*sizeof(Poli));
        for(i=0;i<n;i++){
            p1[i] = le_polinomios(&maior);
        }

        scanf("%d",&m);
        p2 = (Poli*)malloc(m*sizeof(Poli));
        for(i=0;i<m;i++){
            p2[i] = le_polinomios(&maior);
        }

        coef = (double*)calloc((maior+1),sizeof(double));

        if(op=='+'){
            soma_polinomios(n,p1,m,p2,coef);
        } else if(op=='-'){
            sub_polinomios(n,p1,m,p2,coef);
        }

        print_polinomios(coef,maior);
        getchar();
    
        free(p1);
        free(p2);
        free(coef);
    }
    return 0;
}