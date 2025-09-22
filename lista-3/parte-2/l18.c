#include <stdio.h>
int main(){
    int n,k,i,atrsd=0,nhora=0;
    scanf("%d %d",&n,&k);
    int vetor[n];
    for(i=0;i<n;i++){
        scanf("%d",&vetor[i]);
    }
    for(i=0;i<n;i++){
        if(vetor[i]>0){
            atrsd++;
        } else {
            nhora++;
        }
    }
    if(nhora>=k){
        printf("NAO\n");
        for(i=0;i<n;i++){
            if(vetor[n-i-1]<=0){
                printf("%d\n",(n-i));
            }
        }
    } else {
        printf("SIM\n");
    }
    return 0;
}