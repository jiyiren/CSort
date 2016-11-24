/*
归并排序
发明者：约翰·冯·诺伊曼
最好：O(nlogn)
平均：O(nlogn)
最坏：O(nlogn)
空间：O(n)
稳定
*/
#include<stdio.h>
#include"sort.h"

//将两个有序数列合并成一个有序数列
//sourceArr为待合并数列，tempArr为合并后序列，仅仅作为中转操作存储
//startIndex,midIndex,endIndex分别为sourceArr中分为两序列的前中后下标
void Merge(int sourceArr[],int tempArr[],int startIndex,int midIndex,int endIndex){
  int i=startIndex,j=midIndex+1,k=startIndex;
  //分别从两个序列的起始开始，逐一比较两个序列中元素大小
  while(i!=midIndex+1 && j!=endIndex+1){
    if(sourceArr[i]>sourceArr[j]){
      //较小的存入合并序列
      tempArr[k++]=sourceArr[j++];
    }else{
      //较小的存入合并序列
      tempArr[k++]=sourceArr[i++];
    }
  }
  //将未合并的直接放到合并序列里
  while(i!=midIndex+1){
    tempArr[k++]=sourceArr[i++];
  }
  while(j!=endIndex+1){
    tempArr[k++]=sourceArr[j++];
  }
  //最后将合并序列在放入原始数列中
  for(i=startIndex;i<=endIndex;i++){
    sourceArr[i]=tempArr[i];
  }
}

//sourceArr为原待排序列，tempArr为合并后序列，作为临时存放区
//startIndex为数组开始下标，endIndex为结束下标
void MergeSort(int sourceArr[],int tempArr[],int startIndex,int endIndex){
  int midIndex;
  if(startIndex<endIndex){
    //将原序列二分为两个序列
    midIndex=(startIndex+endIndex)/2;
    //分别对两个序列，再进行二分
    MergeSort(sourceArr,tempArr,startIndex,midIndex);
    MergeSort(sourceArr,tempArr,midIndex+1,endIndex);
    //对每个二分序列进行合并
    Merge(sourceArr,tempArr,startIndex,midIndex,endIndex);
  }
}

int main(){
  int array[10]={12,1,2,23,99,3,25,77,8,4};
  int tempArr[10];
  MergeSort(array,tempArr,0,9);
  printlist(array,10);
  return 0;
}
