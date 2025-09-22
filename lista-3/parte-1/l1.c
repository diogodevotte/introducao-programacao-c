#include <stdio.h>

unsigned long int fat(unsigned int x){
    int i,r=1;
    for(i=1;i<=x;i++){
        r = r * i;
    }
    return r;
}
int main (){
    unsigned long int n,r;
    scanf("%ld",&n);
    r = fat(n);
    printf("%ld! = %ld\n",n,r);
    return 0;
}