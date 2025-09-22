#include <stdio.h>

int main (){
    int n,i,cont=0;
    scanf("%d",&n);
    int vetor[n];
    for(i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<n;i++){
        if(vetor[i]%2 == 0){
            printf("%d ",vetor[i]);
            cont++;
        }
    }
    printf("%d\n",cont);
    return 0;
}