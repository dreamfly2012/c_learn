#include "stdio.h"

/**
 *   this is a c file
 */

struct student {
  char name[20];
  int score;
};

int main() {
  struct student a[10], t;
  int i, j, n;
  printf("请输入数字表示有多少个学生:\n");
  scanf("%d", &n);
  printf("请输入学生姓名和成绩，中间使用空格分隔，输入完一个学生使用回车确认.\n");
  for (i = 0; i < n; i++) {
    scanf("%s %d", a[i].name, &a[i].score);
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j <= n - 2; j++) {
      if (a[j].score < a[j + 1].score) {
        t = a[j];
        a[j] = a[j + 1];
        a[j + 1] = t;
      }
    }
  }

  printf("排序后的学生成绩为:\n");
  for (i = 0; i < n; i++) {
    printf("%s %d\n", a[i].name, a[i].score);
  }
  getchar();
}
