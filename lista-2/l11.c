#include <stdio.h>
 
int main(){
    int num,i,res = 1;
    
    scanf("%d",&num);
 
    for(i=1;i<=num;i++){
        res = res * i;
    }
 
    printf("%d! = %d\n",num,res);
 
    return 0;
}