#include <stdio.h>
int main(){
    int n,i,j,k,m,freq,cont,fant;
    char l;
    scanf("%d",&n);
    getchar();
    while(n--){
        char linha[201]={},reps[201]={}; m=0; fant=0;
        fgets(linha,201,stdin);
        for(i=0;linha[i]!='\n';i++){
            if(linha[i]>=65 && linha[i]<=90){
                linha[i] = linha[i] + 32;
            }
        }
        for(i=0;linha[i]!='\n';i++){
            freq=0; cont=0;
            if(linha[i]>=97 && linha[i]<=122){
                for(j=0;linha[j]!='\n';j++){
                    if(linha[i]==linha[j]){
                        freq++;
                    }
                }
                if(freq>fant){
                    fant = freq;
                    m=0;
                    reps[m] = linha[i];
                    reps[m+1] = 0;
                    m++;
                } else if(freq==fant){
                    for(k=0;reps[k]!=0;k++){
                        if(linha[i]==reps[k]){
                            cont++;
                        }
                    }
                    if(cont==0){
                        reps[m] = linha[i];
                        reps[m+1] = 0;
                        m++;
                    }
                }
            }
        }
        i=0;
        while(reps[i]!=0){
            i++;
        }
        char vet_reps[i];
        for(j=0;j<i;j++){
            vet_reps[j] = reps[j];
        }
        for(j=0;j<i;j++){
            for(k=0;k<i;k++){
                if(vet_reps[j]>vet_reps[k]){
                    l = vet_reps[k];
                    vet_reps[k] = vet_reps[j];
                    vet_reps[j] = l;
                }
            }
        }
        for(j=0;j<i;j++){
            printf("%c",vet_reps[i-j-1]);
        }
        printf("\n");
    }
    return 0;
}