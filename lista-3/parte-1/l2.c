#include <stdio.h>

int fibonacci( int t1, int t2, int n){
    int result=t1+t2,ant=t2,num,i;
        while(n--){
            num = result;
            result = result + ant;
            ant = num;
        }
    return result;
}
int main (){
    int n1,n2,n3,result;
    scanf("%d %d %d",&n1,&n2,&n3);
    result = fibonacci(n1,n2,n3-3);
    printf("%d\n",result);
    return 0;
}