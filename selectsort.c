/*
选择排序
最好：O(n^2)
平均：O(n^2)
最坏：O(n^2)
空间: O(1)
不稳定
举个例子，序列5 8 5 2 9， 我们知道第一遍选择第1个元素5会和2交换，那么原序列中2个5的相对前后顺序就被破坏了，所以选择排序不是一个稳定的排序算法
*/
#include<stdio.h>
#include"sort.h"

//选择排序
//array为数组，startIndex为开始下标(>=0),endIndex为结束下标
//每次选择剩余中的最小值，依次到结束
void selectsort(int array[],int startIndex,int endIndex){
  int i,j,minIndex;
  for(i=startIndex;i<endIndex;i++){
    minIndex=i;
    //选出最小下标，放在最前面
    for(j=i+1;j<=endIndex;j++){
      if(array[minIndex]>array[j]){
        minIndex=j;
      }
    }
    if(minIndex!=i){
      swap(&array[i],&array[minIndex]);
    }
  }
}

int main(){
  int A[10]={12,1,2,23,99,3,25,77,8,4};
  selectsort(A,0,9);
  printlist(A,10);
  return 0;
}
