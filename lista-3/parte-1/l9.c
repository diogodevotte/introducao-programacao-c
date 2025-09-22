#include <stdio.h>
void converteEmNotasMoedas (int num,int *n100,int *n50,int *n10, int *mds){
    *n100 = num/100;
    *n50 = (num%100)/50;
    *n10 = (num%100)%50/10;
    *mds = num%10;
}
int main(){
    int num,n100,n50,n10,mds;
    scanf("%d",&num);
    converteEmNotasMoedas(num,&n100,&n50,&n10,&mds);
    printf("NOTAS DE 100 = %d\n",n100);
    printf("NOTAS DE 50 = %d\n",n50);
    printf("NOTAS DE 10 = %d\n",n10);
    printf("MOEDAS DE 1 = %d\n",mds);
    return 0;
}