# CSort
详情请查看这篇：[http://jiyiren.github.io/2016/11/24/csort/](http://jiyiren.github.io/2016/11/24/csort/)
> C 语言实现的排序算法

* 快速排序(Fast Sort)
* 堆排序(Heap Sort)
* 归并排序(Merge Sort)
* 插入排序(Insert Sort)
* 冒泡排序(Bubble Sort)
* 选择排序(Select Sort)


## 算法对比

![SortCompare](http://7xknpe.com1.z0.glb.clouddn.com/csortsortcomparepng.png) 

## 快速排序

**发明者：1962年霍尔**
> * 最好：O(nlogn)
> * 平均：O(nlogn)
> * 最坏：O(n^2)
> * 空间：O(logn)
> * 不稳定

	gcc fastsort.c -o fastsort
	./fastsort
	
## 堆排序
 
**发明者：罗伯特·弗洛伊德**
> * 最好：O(nlogn)
> * 平均：O(nlogn)
> * 最坏：O(nlogn)
> * 空间：O(1)
> * 不稳定

	gcc heapsort.c -o heapsort
	./heapsort

## 归并排序
**发明者：约翰·冯·诺伊曼**
> * 最好：O(nlogn)
> * 平均：O(nlogn)
> * 最坏：O(nlogn)
> * 空间：O(n)
> * 稳定

	gcc mergesort.c -o mergesort
	./mergesort

## 插入排序
> * 最好: O(n)
> * 平均: O(n^2)
> * 最坏: O(n^2)
> * 空间: O(1)
> * 稳定

	gcc insertsort.c -o insertsort
	./insertsort

## 冒泡排序
> * 最好: O(n)
> * 平均: O(n^2)
> * 最坏: O(n^2)
> * 空间：O(1)
> * 稳定

	gcc bubblesort.c -o bubblesort
	./bubblesort

## 选择排序
> * 最好：O(n^2)
> * 平均：O(n^2)
> * 最坏：O(n^2)
> * 空间: O(1)
> * 不稳定

	gcc selectsort.c -o selectsort
	./selectsort

## 归并排序和堆排序、快速排序的比较

1. 若从空间复杂度来考虑：首选堆排序，其次是快速排序，最后是归并排序。

2. 若从稳定性来考虑，应选取归并排序，因为堆排序和快速排序都是不稳定的。

3. 若从平均情况下的排序速度考虑，应该选择快速排序。