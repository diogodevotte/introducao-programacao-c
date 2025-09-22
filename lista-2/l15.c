#include <stdio.h>
 
int main(){
    float n,menor,maior,meio;
    int i;
    
    for(i=0;i<3;i++){
        scanf("%f",&n);
        
        if(i==0){
            menor = n;
            meio = n;
            maior = n;
        } else {
        if (n > maior){
            if(meio > menor){
                maior = n;
            } else {
            menor = meio;
            meio = maior;
            maior = n;
            }
        }
        if (n < menor) {
            if(maior > meio){
                menor = n;
            } else {
            maior = meio;
            meio = menor;
            menor = n;
            }
        } else if(n>menor && n<maior){
            meio = n;
        }
        }
    }
    
    printf("%.2f, %.2f, %.2f\n",menor,meio,maior);
    return 0;
}