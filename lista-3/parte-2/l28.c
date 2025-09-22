#include <stdio.h>
double numero (int np,int alg,int i,const char *str){
    int j,n,num;
    double soma1=0,soma2=0,div=10.0,total=0;
    for(j=np;j<alg;j++){
        num = str[j]-48;
        soma1 = soma1*10 + num;
    }
    n = i+1;
    if(str[i+1]!=0){
        i++; alg=0;
        while(str[i]!=0){
            alg++; i++;
        }
        alg += n;
        for(j=n;j<alg;j++){
            num = str[j]-48;
            soma2 = soma2 + num/div;
            div *= 10.0;
        }
    }
    total = soma1 + soma2;
    return total;
}
double string2double(const char *str){
    int alg=0,num,i=0,cont=0,j,n;
    double soma1=0,soma2=0,total=0,div=10.0;
    while(str[i]!=0 && str[i]!='.'){
        alg++; i++;
    }
    if(str[0]=='-'){
        total = numero(1,alg,i,str) * (-1);
    } else {
        total = numero(0,alg,i,str);
    }
    return total;
}
int main(){
    char str[128]={};
    double n;
    int i;
    while(scanf("%s", str) != EOF ){
        n = string2double(str);
        printf("%.3lf %.3lf\n",n,n*2);
        for(i=0;str[i]!=0;i++){
            str[i] = 0;
        }
    }
    return 0;
}