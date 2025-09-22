#include <stdio.h>
void leitura_vet (int tam, int *pi){
    int i,j,elem,cont;
    for(i=0;i<tam;i++){
        scanf("%d",&elem);
        j=0; cont=0;
        if(i==0){
            pi[i] = elem;
        } else {
            while(j<i){
                if(elem==pi[j]){
                    cont++; i--; break;
                }
                j++;
            }
            if(cont==0){
                pi[i] = elem;
            }
        }
    }
}
void print_vet(int tam, int *pi){
    int i;
    for(i=0;i<tam;i++){
        if(i==0){
            printf("(%d",pi[i]);
        } else if (i==(tam-1)){
            printf(",%d)\n",pi[i]);
        } else {
            printf(",%d",pi[i]);
        }
        if(tam==1){
            printf(")\n");
        }
    }
}
int main(){
    int ta,tb,i,j,cont,cont2;
    do{
        scanf("%d",&ta);
    } while(ta<1 || ta>100);
    do{
        scanf("%d",&tb);
    } while(tb<1 || tb>100);
    int vetA[ta], vetB[tb];
    leitura_vet(ta,vetA);
    leitura_vet(tb,vetB);
    print_vet(ta,vetA);
    print_vet(tb,vetB);
    printf("(");
    cont2=0;
    for(i=0;i<ta;i++){
        cont=0;
        for(j=0;j<tb;j++){
            if(vetA[i]==vetB[j]){
                cont++;
            }
        }
        if(cont==0 && cont2==0){
            printf("%d",vetA[i]);
            cont2++;
        } else if(cont==0 && cont2==1){
            printf(",%d",vetA[i]);
        }
    }
    printf(")\n");
    printf("(");
    cont=0;
    for(i=0;i<ta;i++){
        for(j=0;j<tb;j++){
            if(cont==0) {
                printf("(%dx%d)",vetA[i],vetB[j]);
                cont++;
            } else {
                printf(",(%dx%d)",vetA[i],vetB[j]);
            }
        }
    }
    printf(")\n"); 
    return 0;
}