#include <stdio.h>
int main(){
    char linha[51]={};
    int i,lx,mai;
    while(fgets(linha,51,stdin)!=NULL){
        lx=0; mai=0;
        for(i=0;i<51;i++){
            if(linha[i]==32){
                continue;
            } else if (lx==0){
                if(linha[i]>=97){
                    linha[i] -= 32;
                }
                lx++; mai++;
            } else {
                if(mai==1 && linha[i]>=65 && linha[i]<=90){
                    linha[i] += 32;
                    mai--;
                } else if(mai==0 && linha[i]>=97){
                    linha[i] -= 32;
                    mai++;
                } else if (mai==1){
                    mai--;
                } else {
                    mai++;
                }
            }
        }
        for(i=0;linha[i] != 0;i++){
            printf("%c",linha[i]);
        }
    }
    return 0;
}