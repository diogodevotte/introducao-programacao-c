#include <stdio.h>
#define N 256
void str_clean(char *ps,char *pc){
    int i,j;
    char vet[256]={};
    for(i=0;pc[i]!=0;i++){
        for(j=0;j<256;j++){
            if(pc[i]==ps[j]){
                ps[j] = 0;
            }
        }
    }
    j=0;
    for(i=0;i<256;i++){
        if(ps[i]!=0){
            vet[j]=ps[i];
            j++;
        }
    }
    for(i=0;i<256;i++){
        ps[i]=vet[i];
    }
}
int main() {
    char str[N]={};
    char clr[N]={};
    scanf("%[^\n]%*c", str);
    scanf("%[^\n]%*c", clr);
    str_clean(str, clr);
    printf("%s\n", str);
    return 0;
}