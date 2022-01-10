#include<stdio.h>
#include<stdlib.h>
#define SIZE 5
#define INT_MAX 1000000

int findSmallest(int *arr){
  int smallest = arr[0];
  int smallest_index = 0;
  for(int i=1;i<SIZE;i++){
    if(arr[i]<smallest){
      smallest = arr[i];
      smallest_index = i;
    }
  }
  return smallest_index;
}

int *selectSort(int *arr){
  int *newArr = (int *)malloc(SIZE*sizeof(int));
  for(int i=0;i<SIZE;i++){
    int smallest_index = findSmallest(arr);
    newArr[i] = arr[smallest_index];
    arr[smallest_index] = INT_MAX;
  }
  return newArr;
}

int main(){
  int arr[SIZE] = {5,3,6,2,10};
  int *sortarr = selectSort(arr);
  //print the array value
  for(int i=0;i<SIZE;i++){
    printf("%d\n",sortarr[i]);
  }
  return 0;
}
