#include <stdio.h>
 
int main(){
    int x,y,i,res;
 
    scanf("%d %d",&x,&y);
    if(x % 2 == 0){
        printf("%d ",x);
        y = y - 2;
        for(i=0;i<=y;i++){
            x = x + 2;
            printf("%d ",x);
        }
        printf("\n");
    } else {
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }
    return 0;
}