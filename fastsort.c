/*
快速排序
发明者：1962年霍尔
最好：O(nlogn)
平均：O(nlogn)
最坏：O(n^2)
空间：O(logn)
不稳定
*/
#include<stdio.h>
#include"sort.h"

//分区操作,p为分区点，执行一次后带回分区点标号
// array为数组，startIndex开始下标(>=0),endPoint为结束下标地址
void partition(int array[],int startIndex,int *endPoint){
  int t,i;
  i=startIndex;
  t=array[startIndex];

  while(i<(*endPoint)){
    while(i<(*endPoint)&&array[*endPoint]>=t){
      (*endPoint)--;
    }
    if(i<(*endPoint)){
      array[i]=array[*endPoint];
      i++;
    }
    while(i<(*endPoint)&&array[i]<t) {
      i++;
    }

    if(i<(*endPoint)){
      array[*endPoint]=array[i];
      (*endPoint)--;
    }
  }
  array[i]=t;
}

//快速排序,每次将数组分为前后两个分区，记录最中间的下标，然后递归前后分区
//array为数组，startIndex为开始下标(>=0),endIndex为结束下标
void quicksort(int array[],int startIndex,int endIndex){
  int j;
  if(startIndex<endIndex){
    j=endIndex;
    partition(array,startIndex,&j);
    quicksort(array,startIndex,j-1);
    quicksort(array,j+1,endIndex);
  }
}

//这是将上述两个方法合并为一个方法
void single_quicksort(int array[],int startIndex,int endIndex){
  if(startIndex<endIndex){
    int i=startIndex,j=endIndex,x=array[startIndex];
    while(i<j){
      while(i<j&&array[j]>=x){
        j--;
      }
      if(i<j){
        array[i++]=array[j];
      }
      while(i<j&&array[i]<x){
        i++;
      }
      if(i<j){
        array[j--]=array[i];
      }
      array[i]=x;
    }
    single_quicksort(array,startIndex,i-1);
    single_quicksort(array,i+1,endIndex);
  }
}

int main(){
  int A[10]={12,1,2,23,99,3,25,77,8,4};
  // quicksort(A,0,9);
  single_quicksort(A,0,9);
  printlist(A,10);
  return 0;
}
