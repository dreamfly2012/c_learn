#include"stdio.h"

int main(){
    char s[] = "123456789",*p = s,i=0;
    
    while (*p)
    {
        if(i%2==0)
            *p = '*';
        p++;
        i++;    
    }
    printf("%s",s);
    // for(i=0;i<10;i++){
    //     printf('%i\n',s[i]);
    // }
    
}
