#include <stdio.h>
#include <math.h>
int i=0;
int next_power( int n, int p ){
    int x,y,a,b,res;
    while(1){
        x = pow(i,p);
        if(x >= n){
            break;
        } else i++; y = x;
    }
    a = y - n; b = x - n;
    if(a<0) a *= (-1);
    if(a<b) {
        res = y; i = i -1;
    } else res = x;
    return res;
}
int main (){
    int n,p,res;
    scanf("%d %d",&n,&p);
    if(p==0) return 0;
    res = next_power(n,p);
    printf("%d -> %d^%d = %d\n",n,i,p,res);
    return 0;
}