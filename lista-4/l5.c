#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int cdg;
    double vcred;
    char name[100+1];
} Curso;

typedef struct{
    char name[500+1];
    int cdg;
    int cred;
} Aluno;

Curso le_cursos(void){
    Curso C;
    scanf("%d%*c",&C.cdg);
    scanf("%lf%*c",&C.vcred);
    scanf("%[^\n]%*c",C.name);
    return C;
}

Aluno le_alunos(void){
    Aluno A;
    scanf("%[^\n]%*c",A.name);
    scanf("%d%*c",&A.cdg);
    scanf("%d%*c",&A.cred);
    return A;
}

void print_curso(Curso *cs,Aluno *al,int m,int n){
    int i,j;
    double mensa;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(cs[j].cdg==al[i].cdg){
                mensa = al[i].cred*cs[j].vcred;
                printf("Aluno(a): %s Curso: %s Num. Creditos: %d Valor Credito: %.2lf Mensalidade: %.2lf\n",al[i].name,cs[j].name,al[i].cred,cs[j].vcred,mensa);
                break;
            }
        }
    }
}

int main(){
    int n,m,i;
    Curso *cs=NULL;
    Aluno *al=NULL;

    scanf("%d%*c",&n);
    cs = (Curso*)malloc(n*sizeof(Curso));
    for(i=0;i<n;i++){
        cs[i] = le_cursos();
    }

    scanf("%d%*c",&m);
    al = (Aluno*)malloc(m*sizeof(Aluno));
    for(i=0;i<m;i++){
        al[i] = le_alunos();
    }

    print_curso(cs,al,m,n);

    free(al);
    free(cs);
    return 0;
}