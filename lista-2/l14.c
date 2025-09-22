#include <stdio.h>
 
int main(){
    int num,m=0,n=0,i;
    float res;
 
    scanf("%d",&num);
 
    if(num<0){
        printf("Numero invalido!\n");
    } else if (num == 1 || num == 0){
                printf("NAO PRIMO\n");
    } else {
    for(i=2;i<num;i++){
        res = num % i;
        if(res != 0){
            m++;
        }
        if(res == 0){
            n++;
        }
    }
 
    if(n != 0){
        printf("NAO PRIMO\n");
    } else {
        printf("PRIMO\n");
    }
    }
 
    return 0;
}