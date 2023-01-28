#include"stdio.h"

/**
*   this is a c file
*/

struct student 
{
    char name[20];
    char score;
};

int main(){
    struct student a[10],t;
    int i,j,n;
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        scanf("%s %d",&a[i].name,&a[i].score);

    }

    for(i=0;i<n;i++){
        for(j=0;j<=n-2;j++){
            if(a[j].score<a[j+1].score){
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
            }
        }
    }

    for(i=0;i<n;i++){
        printf("%s %d\n",a[i].name,a[i].score);
    }
    getchar();
    
}
