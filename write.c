#include "stdio.h"

struct person{
    char name[10];
    int num;
    int age;
    int score;
};

int main(int argc, char **argv){
    FILE *fp = fopen("demo.txt","wb");
    if (fp != NULL){
        printf("%s\n","open file success");
    }
    
    struct person p1 = {"zhangsan",1,20,99};
    struct person p2 = {"lisi",2,21,100};
    struct person p3 = {"wangwu",3,19,89};
    printf("person p1 name is %s, num is %d, age is %d, score is %d\n", p1.name, p1.num, p1.age, p1.score);
    fwrite(&p1,sizeof(struct person),1,fp);
    printf("person p2 name is %s, num is %d, age is %d, score is %d\n", p2.name, p2.num, p2.age, p2.score);
    fwrite(&p2,sizeof(p2),1,fp);
    printf("person p3 name is %s, num is %d, age is %d, score is %d\n", p3.name, p3.num, p3.age, p3.score);
    fwrite(&p3,sizeof(p3),1,fp);
    fclose(fp);
    return 0;
}
