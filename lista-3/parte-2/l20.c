#include <stdio.h>
int main(){
    int v,i;
    scanf("%d",&v);
    int vet[v];
    for(i=0;i<v;i++){
        scanf("%d",&vet[i]);
    }
    for(i=0;i<v;i++){
        if(i==0){
            printf("%d\n",vet[i]);
        } else if(vet[i-1]!=vet[i]){
            printf("%d\n",vet[i]);
        }
    }
    return 0;
}