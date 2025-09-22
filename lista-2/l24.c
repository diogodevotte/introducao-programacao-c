#include <stdio.h>
 
int main(){
    int n1,n2,n3,i=2,x,y,z,mmc = 1,r1,r2,r3;
 
    scanf("%d %d %d",&n1,&n2,&n3);
 
    if(n1!=0 && n2!=0 && n3!=0){
        do{
            x = n1%i;
            y = n2%i;
            z = n3%i;
                if(x==0 && y==0 && z==0){
                    printf("%d %d %d :%d\n",n1,n2,n3,i);
                    mmc = mmc * i;
                    n1 = n1/i;
                    n2 = n2/i;
                    n3 = n3/i;
                } else if(x==0 && y==0 && z!=0){
                    printf("%d %d %d :%d\n",n1,n2,n3,i);
                    mmc = mmc * i;
                    n1 = n1/i;
                    n2 = n2/i;
                } else if(x==0 && y!=0 && z==0){
                    printf("%d %d %d :%d\n",n1,n2,n3,i);
                    mmc = mmc * i;
                    n1 = n1/i;
                    n3 = n3/i;
                } else if(x!=0 && y==0 && z==0){
                    printf("%d %d %d :%d\n",n1,n2,n3,i);
                    mmc = mmc * i;
                    n2 = n2/i;
                    n3 = n3/i;
                } else if(x==0){
                    printf("%d %d %d :%d\n",n1,n2,n3,i);
                    mmc = mmc * i;
                    n1 = n1/i;
                } else if(y==0){
                    printf("%d %d %d :%d\n",n1,n2,n3,i);
                    mmc = mmc * i;
                    n2 = n2/i;;
                } else if(z==0){
                    printf("%d %d %d :%d\n",n1,n2,n3,i);
                    mmc = mmc * i;
                    n3 = n3/i;
                } else {
                i++;
                }
        } while (n1+n2+n3 != 3);
        printf("MMC: %d\n",mmc);
    }
    return 0;
}