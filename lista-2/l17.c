#include <stdio.h> 
 
int main(){
    int i,n,vet[4],j,a,cont=0,soma=0;
    for(i=0;i<4;i++){
        scanf("%d",&n);
        vet[i] = n;
    }
    do{
        cont = 0;
        for(j=0;j<4;j++){
            if(vet[j]>vet[j+1]){
                a = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = a;
                cont++;
            }
        }
    } while (cont != 0);
    for(i=0;i<3;i++){
        soma = soma + vet[i];
    }
    printf("%d\n",soma);
    return 0;
}