#include <stdio.h>
int indice_vet(char s,char *string){
    int ind=0,i=2;
    while(s != string[i]){
        i++; ind++;
        if(string[i]=='\n'){
            ind = -1; break;
        }
    }
    return ind;
}
int main(){
    char linha[500]={};
    int n,s;
    scanf("%d",&n);
    getchar();
    while(n--){
        fgets(linha,500,stdin);
        s = indice_vet(linha[0],linha);
        if(s!=-1){
            printf("Caractere %c encontrado no indice %d da string.\n",linha[0],s);
        } else {
            printf("Caractere %c nao encontrado.\n",linha[0]);
        }
    }
    return 0;
}