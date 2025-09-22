#include <stdio.h>
#include <stdlib.h>
char *ret_string(int n,char *pc){
    int i;
    char *vetor;
    if(n<=0){
        return NULL;
    }
    vetor = malloc(n+1);
    if(vetor){
        for(i=0;i<n;i++){
            if(pc[i]=='\n' || pc[i]=='\0'){
                break;
            } else {
                vetor[i] = pc[i];
            }
        }
        vetor[i]='\0';
        return vetor;
    } else {
        return NULL;
    }
}
int main(){
    int rep,n,i;
    char linha[500]={};

    scanf("%d",&rep);

    while(rep--){
        scanf("%d",&n);
        getchar();
        fgets(linha,500,stdin);
        char *p2 = ret_string(n,linha);
        if(p2!=NULL){
            printf("%s\n",p2);
        } else {
            printf("\n");
        }
        free(p2);
    }
    return 0;
}