/*
冒泡算法
最好: O(n)
平均: O(n^2)
最坏: O(n^2)
空间：O(1)
稳定
*/
#include<stdio.h>
#include"sort.h"

//冒泡排序--顺序比较
//array为数组，startIndex为开始下标(>=0),endIndex为结束下标
void bubblesort(int array[],int startIndex,int endIndex){
  int i,j;
  for(i=startIndex;i<endIndex;i++){
    //将最大值放在最后面
    for(j=startIndex;j<endIndex-i;j++){
      if(array[j]>array[j+1]){
        swap(&array[j],&array[j+1]);
      }
    }
  }
}

//冒泡排序--逆序比较
void bubblesort2(int array[],int startIndex,int endIndex){
  int i,j;
  for(i=startIndex;i<endIndex;i++){
    //逆序比较，就需要将最小值放在最前面
    for(j=endIndex;j>i;j--){
      if(array[j]<array[j-1]){
        swap(&array[j],&array[j-1]);
      }
    }
  }
}

int main(){
  int A[10]={12,1,2,23,99,3,25,77,8,4};
  bubblesort(A,0,9);
  //bubblesort2(A,0,9);
  printlist(A,10);
  return 0;
}
