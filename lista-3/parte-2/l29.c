#include <stdio.h>
int main(){
    int q1,q2,q3,i,j,k;
    scanf("%d",&q1);
    scanf("%d",&q2);
    q3 = q1+q2;
    int vet1[q1],vet2[q2],vet3[q3];
    for(i=0;i<q1;i++){
        scanf("%d",&vet1[i]);
    }
    for(i=0;i<q2;i++){
        scanf("%d",&vet2[i]);
    }
    i=0; j=0; k=0;
    while(i<q1 && j<q2){
        if(vet1[i]<vet2[j]){
            vet3[k] = vet1[i]; k++; i++;
        } else {
            vet3[k] = vet2[j]; k++; j++;
        }
    }
    while(i<q1){
        vet3[k] = vet1[i]; k++; i++;
    }
    while(j<q2){
        vet3[k] = vet2[j]; k++; j++;
    }
    for(i=0;i<q3;i++){
        printf("%d\n",vet3[i]);
    }
    return 0;
}