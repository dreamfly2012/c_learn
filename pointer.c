#include<stdio.h>

int main()
{
    int firstvalue,secondvalue;
    int * pointer;
    pointer = &firstvalue;
    *pointer = 10;
    pointer = &secondvalue;
    *pointer = 20;
    printf("first value:%d\n",firstvalue);
    printf("second value:%d\n",secondvalue);
    return 0;
}
