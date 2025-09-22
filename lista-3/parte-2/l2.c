#include <stdio.h>
int main (){
    int n=-1,i,num,cont=0;
    while(n<1 || n>1000){
        scanf("%d",&n);
    }
    int v[n];
    for(i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    scanf("%d",&num);
    for(i=0;i<n;i++){
        if(v[i] >= num) cont++;
    }
    printf("%d\n",cont);
    return 0;
}