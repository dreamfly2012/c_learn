#include "stdio.h"

struct person{
    char *name;
    int num;
    int age;
    float score;
};

int main(int argc, char **argv){
    FILE *fp = fopen("demo.txt","w+");
    if (fp != NULL){
        printf("%s\n","open file success");
    }
    fprintf(fp, "%s %s %s", "welcome", "to", "china");
    
    struct person p1 = {"zhangsan",1,20,99};
    struct person p2 = {"lisi",2,21,100};
    struct person p3 = {"wangwu",3,19,89};
    fwrite(&p1,sizeof(struct person),1,fp);
    fwrite(&p2,sizeof(struct person),1,fp);
    fwrite(&p3,sizeof(struct person),1,fp);
    fclose(fp);
    printf("%p",fp);
    return 0;
}
