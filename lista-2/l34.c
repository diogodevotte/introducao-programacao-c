#include <stdio.h>

int main(){
    long double n,num;
    long int a,i=0,numi;
    scanf("%Lf",&n);
    
    do{
        a = n;
        if(a==n){
            numi = a;
            i=1;
            break;
        }
        if(n!=a){
            i++;
            num = n*i;
        }
        numi = num;
    } while (numi!=num);


    printf("%ld/%.0ld\n",numi,i);
    return 0;
}