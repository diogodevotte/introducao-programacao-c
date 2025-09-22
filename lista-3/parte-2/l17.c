#include <stdio.h>
int main(){
    char lant;
    int i,mai,ali,soma;
    while(1){
        char linha[5100]={};
        fgets(linha,5100,stdin);
        if(linha[0]==0) break;
        lant = linha[0]; ali = 0; soma = 0;
        for(i=0;linha[i]!='\n';i++){
            if(linha[i]==32){
                if(linha[i+1]==lant || linha[i+1]==(lant-32) || linha[i+1]==(lant+32)){
                    if(ali==0){
                        ali++;
                    }
                } else {
                    lant = linha[i+1];
                    soma += ali;
                    ali = 0;
                }
            }
        }
        soma += ali;
        printf("%d\n",soma);
    }
    return 0;
}