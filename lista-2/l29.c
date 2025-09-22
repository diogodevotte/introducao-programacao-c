#include <stdio.h> 
 
int main(){
    int i,j,cont=0;
    double vet[4],n,a;
    for(i=0;i<4;i++){
        scanf("%lf",&n);
        vet[i] = n;
    }
    do{
        cont = 0;
        for(j=0;j<3;j++){
                if(vet[j]>vet[j+1]){
                    a = vet[j+1];
                    vet[j+1] = vet[j];
                    vet[j] = a;
                    cont++;
                }
        }
    } while (cont != 0);
    for(i=0;i<4;i++){
        if(i==0){
            printf("%.2lf",vet[i]);
        }
        if(i==1 || i==2){
            printf(", %.2lf",vet[i]);
        }
        if(i==3){
            printf(", %.2lf\n",vet[i]);
        }
    }
    return 0;
}