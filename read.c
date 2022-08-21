#include"stdio.h"
#include "stdlib.h"

struct person{
    char name[10];//这里不能使用指针，因为空间无法确定，导致无法正确写入和读取。
    int num;
    int age;
    float score;
};

int main(int argc, char**argv){
    FILE *fp = fopen("demo.txt","r");
    if(fp==NULL){
        printf("error open file\n");
        exit(1);
    }
    printf("open file success!");
    struct person p1;
    while(fread(&p1,sizeof(struct person),1,fp)){
        printf("name=%s,age=%d,score=%f\n",p1.name,p1.age,p1.score);
    }
    fclose(fp);
    
    return 0;
}
