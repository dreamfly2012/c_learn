#include"stdio.h"
#include "stdlib.h"

struct person{
    char name[10];//这里不能使用指针，因为空间无法确定，导致无法正确写入和读取。
    int num;
    int age;
    int score;
};

int main(int argc, char**argv){
    FILE *fp = fopen("demo.txt","rb");
    if(fp==NULL){
        printf("error open file\n");
        exit(1);
    }
    struct person p1,p2,p3;
    fread(&p1,sizeof(struct person),1,fp);
    fread(&p2,sizeof(struct person),1,fp);
    fread(&p3,sizeof(struct person),1,fp);
    printf("name=%s,num=%d,age=%d,score=%d\n",p1.name,p1.num, p1.age,p1.score);
    printf("name=%s,num=%d,age=%d,score=%d\n",p2.name,p2.num, p2.age,p2.score);
    printf("name=%s,num=%d,age=%d,score=%d\n",p3.name,p3.num, p3.age,p3.score);
    
    printf("open file success!");
    while(fread(&p1,sizeof(struct person),1,fp)){
        printf("name=%s,age=%d,score=%f\n",p1.name,p1.age,p1.score);
    }
    fclose(fp);
    
    return 0;
}
