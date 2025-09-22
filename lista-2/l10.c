#include <stdio.h>
 
int main(){
    int n,i,j,soma,p = 0;
    
    scanf("%d",&n);
    
    
    if(n<3 || n>11){
        printf("Combinacao impossivel\n");
    } else {
        for(i=1;i<=6;i++){
            for(j=1;j<=6;j++){
                soma = i + j;
                if(n==soma && i!=j){
                    printf("D1: %d, D2: %d\n",i,j);
                    p++;
    }   }   }
    printf("Ha %d possibilidades\n",p);
}
    return 0;
 
}