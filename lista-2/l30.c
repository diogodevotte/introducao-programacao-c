#include <stdio.h>

int main(){
    int n1,n2,i,j,cont=0,k=1,f1,f2,f3,x,y,pl,a;

    scanf("%d %d",&n1,&n2);
    a = n1;
    for(i=n1;i<=n2;i++){
        f1 = 1; pl=0;
        if(i==0) {
            printf("1\n"); 
            a = 1;
            continue;
        } 
        while(k<=i){
            f1 = f1 * k;
            k++;
        }
        for(j=1;j<=a;j++){
            k=1; f2 = 1; f3 =1 ;
            while(k<=j){
                f2 = f2 * k;
                k++;
            }
            k=1;
            x = i - j;
            while(k<=x){
                f3 = f3 * k;
                k++;
            }
            x = f1/(f2*f3);
            
            if(j==1){
                printf("1");
                printf(",%d",x);
                pl++;
            } else {
                printf(",%d",x);
                pl++;
            }
            if(pl==i){
                printf("\n");
            }
        }
        if(a<=n2) a++;
    }



}