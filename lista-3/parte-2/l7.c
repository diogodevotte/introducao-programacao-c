#include <stdio.h>
int main (){
    int m,n,soma,i;
    while(1){
        scanf("%d %d",&m,&n);
        if(m==0 && n==0) break;
        soma = m + n;
        char num[11]={};
        sprintf(num,"%d",soma);
        for(i=0;i<11;i++){
            if(num[i]!=0 && num[i]!='0')
            printf("%c",num[i]);
        }
        printf("\n");
    }
    return 0;
}