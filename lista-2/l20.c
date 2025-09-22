#include <stdio.h>
 
int main(){
    int n,res;
 
    scanf("%d",&n);
 
    res = (n*32 + n*64)-n;
    printf("%d\n",res);
 
    return 0;
}