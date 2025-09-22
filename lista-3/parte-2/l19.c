#include <stdio.h>
int main(){
    char vetA[10000]={},vetB[10000]={};
    int i,cont,rep;
    scanf("%d",&rep);
    while(rep--){
        scanf("%s%s",vetA,vetB);
        cont=0;
        for(i=0;vetA[i]!=0;i++){
            while(vetA[i]!=vetB[i]){
                if((vetA[i]+1)>122){
                    vetA[i] = 'a';
                    cont++;
                } else {
                    vetA[i] += 1;
                    cont++;
                }
            }
        }
        printf("%d\n",cont);
    }
    return 0;
}