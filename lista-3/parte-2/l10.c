#include <stdio.h>
void binario(int num,int *pi){
    int b=0;
    if(num==0) pi[0]=0;
    while(num != 0){
        pi[b] = num%2;
        num /= 2;
        b++;
    } 
}
int main(){
    int num,i;
    char bin;
    while(scanf("%d",&num) != EOF){
        int vetor[32]={2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2,2};
        binario(num,vetor);
        for(i=0;i<=31;i++){
            if(vetor[31-i]!=2){
                printf("%d",vetor[31-i]);
            }
        }
        printf("\n");
    }
    return 0;
}