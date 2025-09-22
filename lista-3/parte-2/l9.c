#include <stdio.h>
#include <string.h>

int main (){
    int lnh,i,j,tam;
    char linha[1000]={};
    
    scanf("%d",&lnh);
    getchar();

    for(i=0;i<lnh;i++){
        fgets(linha,sizeof(linha),stdin);
        tam = strlen(linha);

    char linvertida[tam];

        for(j=0;linha[j] != '\0';j++){
            if(linha[j]>=65 && linha[j]<=90 || linha[j]>=97 && linha[j]<=122){
                linvertida[(tam-1)-j] = linha[j] + 3;
            } else {
                linvertida[(tam-1)-j] = linha[j];
            }
        }
        for(j=(tam+1)/2;j<tam;j++){
                linvertida[j] = linvertida[j] - 1;
        }
        for(j=0;j<tam;j++){
            if(j!=0)
            printf("%c",linvertida[j]);
        }
        printf("\n");
    }
    return 0;
}