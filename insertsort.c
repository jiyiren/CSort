/*
插入排序
最好: O(n)
平均: O(n^2)
最坏: O(n^2)
空间: O(1)
稳定
*/
#include<stdio.h>
#include"sort.h"
//插入排序
//array为数组,startIndex为开始下标(>=0),endIndex为结束下标
//两层循环，外循环从下标+1处开始到结束
//内层循环，将外层循环中的数与其前面的所有数对比插入。
void insertsort(int array[],int startIndex,int endIndex){
  int i,j,item;
  if(endIndex>startIndex){
    for(j=startIndex+1;j<=endIndex;j++){
      item=array[j];
      i=j-1;
      while(i>=startIndex&&item<array[i]&&i>=startIndex){
        //i>=startIndex为防止i--越界
        array[i+1]=array[i];//将比item大的数依次后移
        i--;
      }
      array[i+1]=item;
    }
  }
}

int main(){
  int A[10]={12,1,2,23,99,3,25,77,8,4};
  insertsort(A,0,9);
  printlist(A,10);
  return 0;
}
