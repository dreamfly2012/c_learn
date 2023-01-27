#include "stdio.h"

int main(){
    freopen("input.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int a,b,sum;
    scanf("%d",&a); 
    scanf("%d",&b); 
    sum = a + b; 
    printf("%d", sum);
    //printf("hello world"); 
    return 0;
}
