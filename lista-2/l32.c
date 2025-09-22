# include <stdio.h>
 
int main(){
    int num=1,i,n,na,cont,x,y,z;
 
    while(num != 0){
        scanf("%d",&num);
        cont = 0; x =0; y=0; z=0;
        for(i=0;i<num;i++){
            scanf("%d",&n);
            if(i==0){
                na = n;
            } else if(na<=n){
            cont++; na = n; x++;y=0;
                if(x==2){
                    z++;
                }
            } else if(na>=n){
                cont--;na = n;y++;x=0;
                if(y==2){
                    z++;
                }
            }
        }
        if(z!=0){
            printf("Nao intercalada\n");
        } else {
            if(num!=0){
                if(num%2 == 0){
                    if(cont==1){
                        printf("Intercalada\n");
                    }
                } else {
                    printf("Intercalada\n");
                }
            }
        }
    }
    
 
    return 0;
}