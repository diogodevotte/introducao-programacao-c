#include <stdio.h>
void print_bytes( const void * end_byte, int n ){
    int i,j;
    for(i=0;i<n;i++){
        const unsigned char *byt = (const unsigned char*) end_byte;
        char byte = byt[i];
            for(j=7;j>=0;j--){
                char bit = (byte >> j) & 1;
                printf("%hhd",bit);
            }
        printf(" ");
    }
    printf("\n");
}
int main (){
    double n5;
    scanf("%lf",&n5);
    int n;
    unsigned char n1=n5;
    unsigned short n2=n5;
    unsigned int n3=n5;
    float n4=n5;
    print_bytes(&n1,sizeof(n1));
    print_bytes(&n2,sizeof(n2));
    print_bytes(&n3,sizeof(n3));
    print_bytes(&n4,sizeof(n4));
    print_bytes(&n5,sizeof(n5));
    return 0;
}