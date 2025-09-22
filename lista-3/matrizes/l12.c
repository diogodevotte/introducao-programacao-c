#include <stdio.h>

int main(){
    int mt[1000][1000],n,m,i,j,maior,menor,total;
    float cmaior=1,cmenor=1,pmenor,pmaior;

    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&mt[i][j]);
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(i==0 && j==0){
                maior = mt[i][j];
                menor = mt[i][j];
            } else {
                if(mt[i][j]>maior){
                    maior = mt[i][j];
                    cmaior = 1;
                } else if(mt[i][j]==maior){
                    cmaior++;
                }
                if(mt[i][j]<menor){
                    menor = mt[i][j];
                    cmenor = 1;
                } else if (mt[i][j]==menor){
                    cmenor++;
                }
            }
        }
    }

    total = m*n;
    pmenor = (cmenor/total)*100;
    pmaior = (cmaior/total)*100;

    printf("%d %.2f%%\n",menor,pmenor);
    printf("%d %.2f%%\n",maior,pmaior);

    return 0;
}