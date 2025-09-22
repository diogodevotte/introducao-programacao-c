#include <stdio.h>
 
int main(){
    int num,i,j,k,hip,cat1,cat2,scat;
 
    scanf("%d",&num);
 
    for(i=1;i<=num;i++){
        hip = i*i;
        
        for(k=1;k<=num;k++){
                for(j=num;j != 1;j--){
                    scat = j*j + k*k;
                    if(hip == scat && k<j){
                        printf("hipotenusa = %d, catetos %d e %d\n",i,k,j);
                    }
                }
        }
    }
    
 
    return 0;
}