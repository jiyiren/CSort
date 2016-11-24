/*sort.h file*/

//exchange two parameters
//x,y分别为要交换数据的地址
void swap(int *x,int *y)
{
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}

//print the array A
//array为数组，length为数组元素个数
void printlist(int array[],int length)
{
   int i;
   for(i=0;i<length;i++){
     printf("%d\t",array[i]);
   }
   printf("\n");
}
