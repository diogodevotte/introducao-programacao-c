#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int cdg;
    double vcred;
    char *name;
} Curso;

typedef struct{
    char *name;
    int cdg;
    int cred;
} Aluno;

Curso le_cursos(char *buffer){
    Curso C;
    int i;
    scanf("%d%*c",&C.cdg);
    scanf("%lf%*c",&C.vcred);

    scanf("%[^\n]%*c",buffer);
    for(i=0;buffer[i]!=0;i++);
    buffer[i] = '\0';

    C.name = (char*)malloc((i+1)*sizeof(char));
    strcpy(C.name,buffer);

    return C;
}

Aluno le_alunos(char *buffer){
    Aluno A;
    int i;

    scanf("%[^\n]%*c",buffer);
    for(i=0;buffer[i]!=0;i++);
    buffer[i] = '\0';

    A.name = (char*)malloc((i+1)*sizeof(char));
    strcpy(A.name,buffer);

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
    char *buffer;
    Curso *cs=NULL;
    Aluno *al=NULL;

    scanf("%d%*c",&n);
    cs = (Curso*)malloc(n*sizeof(Curso));
    for(i=0;i<n;i++){
        buffer = (char*)calloc(1000,sizeof(char));
        cs[i] = le_cursos(buffer);
        free(buffer);
    }

    scanf("%d%*c",&m);
    al = (Aluno*)malloc(m*sizeof(Aluno));
    for(i=0;i<m;i++){
        buffer = (char*)calloc(1000,sizeof(char));
        al[i] = le_alunos(buffer);
        free(buffer);
    }

    print_curso(cs,al,m,n);

    free(al);
    free(cs);
    return 0;
}