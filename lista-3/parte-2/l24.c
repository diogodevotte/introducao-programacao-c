#include <stdio.h>
long int string2int(const char *str){
    int alg=0,soma=0,num,i=0,cont=0;
    while(str[i]!=0){
        alg++; i++;
    }
    if(str[0]=='-'){
        for(i=1;i<alg;i++){
            num = str[i]-48;
            soma = soma*10 + num;
        }
        soma *= -1;
    } else {
        for(i=0;i<alg;i++){
            num = str[i]-48;
            soma = soma*10 + num;
        }
    }
    return soma;
}
int main(){
    char str[128]={};
    long int n,i;
    while(scanf("%s", str) != EOF ){
        n = string2int(str);
        printf("%ld %ld\n",n,n*2);
    }
    return 0;
}