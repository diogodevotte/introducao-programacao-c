#include <stdio.h>
int main (){
    int n,i,j;
    scanf("%d",&n);
    getchar();
    while(n--){
        char palavra[6]={},lx;
        scanf("%[^\n]%c",palavra,&lx);
        i=0; j=0;
        while(palavra[i]!=0){
            i++;
            if(i>3) break;
        }
        if(i==3){
            if(palavra[0]=='o') j++;
            if(palavra[1]=='n') j++;
            if(palavra[2]=='e') j++;
            if(j>=2){
                printf("1\n");
            } else {
                printf("2\n");
            }
        } else {
            printf("3\n");
        }
    }
    return 0;
}