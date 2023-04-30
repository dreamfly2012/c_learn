#include "stdio.h"
#include "string.h"
#pragma pack(4)
typedef union {
  double i;
  int k[5];
  char c;

} Date;

typedef struct {
  int a;
  char c[13];
  double d;
} T;

typedef struct {
  int cat;
  Date date;
  double d;
} info;

typedef struct {

  int age;
  char sex;
  int info[5];

} user;

int main() {
  double dog;
  int a[5];
  Date d;
  T t;
  printf("%d\n", sizeof(t));
  printf("%d\n", sizeof(dog));
  printf("%d\n", sizeof(a));
  printf("%d\n", sizeof(user));
  printf("%d\n", sizeof(info));
  printf("%d\n", sizeof(d));
  return 0;
}
