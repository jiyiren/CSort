/*
堆排序
发明者：罗伯特·弗洛伊德
最好：O(nlogn)
平均：O(nlogn)
最坏：O(nlogn)
空间：O(1)
不稳定
*/
#include<stdio.h>
#include"sort.h"

//array是待调整的堆数组，i是待调整的数组元素的位置，nLength是数组的长度
//本函数功能是：根据数组array构建大根堆
void HeapAdjust(int array[],int i,int nLength){
  int nChild;
  int nTemp;
  for(;2*i+1<nLength;i=nChild){
    //子节点的位置=2*(父节点位置)+1
    nChild=2*i+1;
    //得到子节点中较大的节点
    if(nChild<nLength-1&&array[nChild+1]>array[nChild]){
      ++nChild;
    }
    //如果较大的子节点大于父节点那么把较大的子节点往上移动，替换它的父节点
    if(array[i]<array[nChild]){
      nTemp=array[i];
      array[i]=array[nChild];
      array[nChild]=nTemp;
    }else{
      break;//否则退出循环
    }

  }
}

//堆排序算法
//arry为待排序数组，length为数组长度
void HeadSort(int array[],int length){
  int i,temp;
  //调整序列的前半部分元素，调整完之后第一个元素是序列的最大元素
  //length/2-1是最后一个非叶节点，（length为下标加1）
  for(i=length/2-1;i>=0;--i){
    HeapAdjust(array,i,length);
  }

  //从最后一个元素开始对序列进行调整，不断缩小调整的范围直到第一个元素
  for(i=length-1;i>0;--i){
    temp=array[0];
    array[0]=array[i];
    array[i]=temp;
    //不断缩小调整heap的范围，每一次调整完毕保证第一个元素是当前序列的最大值
    HeapAdjust(array,0,i);
  }

}

int main(){
  int array[10]={12,1,2,23,99,3,25,77,8,4};
  HeadSort(array,10);
  printlist(array,10);
  return 0;
}
