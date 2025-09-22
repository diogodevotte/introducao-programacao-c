# include <stdio.h>
 
int main(){
    int n1,n2,n3,cont,vet[3],j,a;
    char x,y,z;
    scanf("%d %d %d\n",&n1,&n2,&n3);
    vet[0]=n1; vet[1]=n2; vet[2]=n3;
    scanf("%c %c %c",&x,&y,&z);
    do{
        cont = 0;
        for(j=0;j<=1;j++){
            if(vet[j]>vet[j+1]){
                a = vet[j+1];
                vet[j+1] = vet[j];
                vet[j] = a;
                cont++;
            }
        }
    } while (cont != 0);
    if(x=='A' && y=='B' && z=='C'){
        printf("%d %d %d\n",vet[0],vet[1],vet[2]);
    } else if(x=='A' && y=='C' && z=='B'){
        printf("%d %d %d\n",vet[0],vet[2],vet[1]);
    } else if(x=='B' && y=='A' && z=='C'){
        printf("%d %d %d\n",vet[1],vet[0],vet[2]);
    } else if(x=='B' && y=='C' && z=='A'){
        printf("%d %d %d\n",vet[1],vet[2],vet[0]);
    } else if(x=='C' && y=='B' && z=='A'){
        printf("%d %d %d\n",vet[2],vet[1],vet[0]);
    } else if(x=='C' && y=='A' && z=='B'){
        printf("%d %d %d\n",vet[2],vet[0],vet[1]);
    }
    return 0;
}