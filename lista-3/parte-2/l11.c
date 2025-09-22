#include <stdio.h>
int main() {
    int v,i,j,freq,fant=0,num;
    scanf("%d",&v);
    int vetor[v];
    for(i=0;i<v;i++){
        scanf("%d",&vetor[i]);
    }
    for(j=0;j<v;j++){
        freq = 0;
        for(i=0;i<v;i++){
            if(vetor[j]==vetor[i]){
                freq++;
                if(freq>fant){
                fant = freq;
                num = vetor[i];
                } else if(freq==fant){
                    if(vetor[i]<num){
                        num = vetor[i];
                    }
                }
            }
        }
    }
    printf("%d\n",num);
    printf("%d\n",fant);
    return 0;
}