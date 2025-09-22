#include <stdio.h>

int main (){
    int ns,uf,n1,n2,n3,n4,n5,n6,n7,n8,dv1,dv2;

    scanf("%d %d",&ns,&uf);

    if(uf>28 || uf<1){
        printf("CODIGO DA UF INVALIDO!\n");
    } else {
        n1 = ns/10000000;
        n2 = ns%10000000/1000000;
        n3 = ns%1000000/100000;
        n4 = ns%100000/10000;
        n5 = ns%10000/1000;
        n6 = ns%1000/100;
        n7 = ns%100/10;
        n8 = ns%10;
        dv1 = (n1*2+n2*3+n3*4+n4*5+n5*6+n6*7+n7*8+n8*9)%11;
        if(dv1==10){
            dv1 = 0;
        }
        n1 = uf/10;
        n2 = uf%10;
        dv2 = (n1*7+n2*8+dv1*9)%11;

        if(uf<10){
            printf("%d0%d/%d%d\n",ns,uf,dv1,dv2);
        } else {
            printf("%d%d/%d%d\n",ns,uf,dv1,dv2);
        }
    }
    return 0;
}