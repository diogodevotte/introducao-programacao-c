#include <stdio.h>
int main (){
    int rep,n1,n2,i,j,k,v;
    scanf("%d",&rep);
    while(rep--){
        scanf("%d %d",&n1,&n2);
        v = (n2-n1+1)*5; k=0;
        char vet[v];
        for(i=n1;i<=n2;i++){
            char sep[5]={};
            sprintf(sep,"%d",i);
            j=0;
            while(sep[j]!=0){
                if(j==5) break;
                vet[k] = sep[j];
                j++;
                k++;
            }
        }
        for(i=0;i<k;i++){
            printf("%c",vet[i]);
        }
        for(i=0;i<k;i++){
            printf("%c",vet[k-i-1]);
        }
        printf("\n");
    }
    return 0;
}