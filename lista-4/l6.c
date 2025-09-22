#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int mt,d,m,a;
    char nome[200];
}Aluno;

Aluno le_alunos(void){
    Aluno al;
    scanf("%d %d %d %d %[^\n]%*c",&al.mt,&al.d,&al.m,&al.a,al.nome);
    return al;
}

void ordena_idades(Aluno *al,int n){
    int i,j,im;
    Aluno A;

    for(i=0;i<(n-1);i++){
        im = i;
        for(j=(i+1);j<n;j++){
            
            if(al[j].a > al[im].a){
                im = j;
            } else if(al[j].a == al[im].a){
                if(al[j].m > al[im].m){
                    im = j;
                } else if(al[j].m == al[im].m){
                    if(al[j].d > al[im].d){
                        im = j;
                    }
                }
            }
        }
        A = al[i];
        al[i] = al[im];
        al[im] = A;
    }
}

int main(){
    int n,i;
    Aluno *al=NULL;

    scanf("%d",&n);
    al = (Aluno*)malloc(n*sizeof(Aluno));

    for(i=0;i<n;i++){
        al[i] = le_alunos();
    }
    ordena_idades(al,n);
    for(i=0;i<n;i++){
        printf("Matric.: %d Nome: %s Data Nasc: %d/%d/%d\n",al[i].mt,al[i].nome,al[i].d,al[i].m,al[i].a);
    }

    free(al);
    return 0;
}