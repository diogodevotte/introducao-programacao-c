#include<stdio.h>
 
int main(){
    int h,m,s,total;
    scanf("%d\n",&h);
    scanf("%d\n",&m);
    scanf("%d",&s);
    total = (h*60*60)+(m*60)+s;
    printf("O TEMPO EM SEGUNDOS E = %d\n",total);
    return 0;
}