# include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned long int codm,codmv,prim=0,a,n1=0,n2=0,n3=0,ml;
    float pcm,pvm,lucrb,lucrl,lucrlt,lml,lucrt=0,compt=0,vedt=0;
    int numv,maisv;
    while (scanf("%ld %f %f %d",&codm,&pcm,&pvm,&numv) != EOF){
        if(prim==0){
            prim++;
            a = codm;
        } else prim = a;
        lucrb = (pvm*numv) - (pcm*numv);
        lucrl = (lucrb/(pvm*numv))*100;
        if(lucrl<10){
            n1++;
        } else if(lucrl>=10 && lucrl<=20){
            n2++;
        } else if(lucrl>20){
            n3++;
        }
        if(prim==1){
            ml = codm;
            lml = lucrl;
        } else if(lucrl>lml){
            ml = codm;
        }
        if(prim==1){
            codmv = codm;
            maisv = numv;
        } else if (numv>maisv){
            maisv = numv;
            codmv = codm;
        }
        compt = compt + (pcm*numv);
        vedt = vedt + (pvm*numv);
        lucrt = vedt - compt;
        lucrlt = (lucrt/compt)*100;
    }
    printf("Quantidade de mercadorias que geraram lucro menor que 10%%: %ld\n",n1);
    printf("Quantidade de mercadorias que geraram lucro maior ou igual a 10%% e menor ou igual a 20%%: %ld\n",n2);
    printf("Quantidade de mercadorias que geraram lucro maior do que 20%%: %ld\n",n3);
    printf("Codigo da mercadoria que gerou maior lucro: %ld\n",ml);
    printf("Codigo da mercadoria mais vendida: %ld\n",codmv);
    printf("Valor total de compras: %.2f, valor total de vendas: %.2f e percentual de lucro total: %.2f%%\n",compt,vedt,lucrlt);
    return 0;
}