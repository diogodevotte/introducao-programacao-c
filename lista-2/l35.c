#include <stdio.h>

int main(){
    int num,i,k=219,j,l,sdiv,sdiv2,rep=0,cont;
    scanf("%d",&num);
    if(num==0){
        return 0;
    }
    for(i=0;i<num;i++){
        do{
            k++;
            sdiv = 0;
            sdiv2 = 0;
            for(j=1;j<k/2+1;j++)
                if(k%j==0){
                    sdiv = sdiv + j;
                }
            if(k<sdiv){
                for(l=1;l<sdiv/2+1;l++){
                    if(sdiv%l==0){
                        sdiv2 = sdiv2 + l;
                    }
                }
            }
        } while (sdiv2 != k);
        printf("(%d,%d)\n",k,sdiv);
        k = sdiv+1;
    }
    return 0;
}