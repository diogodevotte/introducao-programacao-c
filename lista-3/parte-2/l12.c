#include <stdio.h>
int main (){
    int v,i,j,n;
    float md;
    scanf("%d",&v);
    int vetor[v];
    for(i=0;i<v;i++){
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<v;i++){
        for(j=0;j<v;j++){
            if(vetor[i]>vetor[j]){
                n = vetor[j];
                vetor[j] = vetor[i];
                vetor[i] = n;
            }
        }
    }
    if(v%2==0){
        i = vetor[(v/2)-1];
        j = vetor[(v+1)/2];
        md = (i+j)/2.0;
    } else {
        md = vetor[((v+1)/2)-1];
    }
    printf("%.2f\n",md);
    return 0;
}