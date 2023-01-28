#include "stdio.h"

typedef struct rectangle
{
    int length;
    int width;
    char *name;
}RECT;

int main()
{
    struct rectangle myrectangle = {10, 5, "zhangsan"};
    printf("length: %d. width: %d, name: %s", myrectangle.length, myrectangle.width, myrectangle.name);
    return 0;
}
