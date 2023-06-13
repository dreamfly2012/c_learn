#include <fcntl.h>
#include "unistd.h"
#include "stdio.h"

int main(){
    close(0);
    open("1.txt",O_RDWR);
    char a[10];
    scanf("%s", a);
    printf("%s", a);
}
