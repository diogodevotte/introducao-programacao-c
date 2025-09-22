#include <stdio.h>
 
int main(){
 
    int cont,i,n1,n2,a,b,c,x,z,y,n3,n4;
 
    scanf("%d",&cont);
    for(i=0;i<cont;i++){
        scanf("%d %d",&n1,&n2);
        a = n1/100;
        b = (n1%100)/10;
        c = ((n1%100)%10);
        n3 = c*100 + b*10 + a;
 
        x = n2/100;
        y = (n2%100)/10;
        z = ((n2%100)%10);
        n4 = z*100 + y*10 + x;
 
        if(n3>n4){
            printf("%d\n",n3);
        } else {
            printf("%d\n",n4);
        }
    }
 
    return 0;
}