#include"stdio.h"
#include "stdlib.h"

struct person{
    char *name;
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
    struct person p1;
    while(fread(&p1,sizeof(struct person),1,fp)){
        printf("name=%s,age=%d,score=%f\n",p1.name,p1.age,p1.score);
    }
    fclose(fp);
    
    return 0;
}
