/****************************************************************
∂—≈≈–Ú
****************************************************************/
#include <iostream>
#include "Heap.h"

using namespace std;

int heapt[8]={40,25,30,18,12,50,75,10};

void printArray(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}


int Parent(int i)
{
	return i/2;
}

int Left(int i)
{
	return 2*i;
}

int Right(int i)
{
	return 2*i + 1;
}

//œ¬≥¡‘™Àÿ
void MaxHeapify(int A[], int heapsize,int i)
{
	int largest = -1;
	int l = Left(i);
	int r = Right(i);

	if (l<=heapsize && A[l]>A[i])
	{
		largest = l;
	}
	else
	{
		largest = i;
	}
	if (r<=heapsize && A[r]>A[largest])
	{
		largest = r;
	}

	if (largest != i)
	{
		int temp = A[i];
		A[i] = A[largest];
		A[largest] = temp;

		MaxHeapify(A,heapsize,largest);
	}

}

void BuildMaxHeap(int A[], int length)
{
	int heapsize = length-1;
	for (int i = length/2; i >= 1; i--)
	{
		MaxHeapify(A, heapsize, i);
	}
}

void HeapSort(int A[], int length)
{
	int heapsize = length-1;
	BuildMaxHeap(A, length);
	for (int i = length-1; i >= 2; i--)
	{
		int temp = A[1];
		A[1] = A[i];
		A[i] = temp;
		heapsize = heapsize - 1;
		MaxHeapify(A,heapsize,1);
		printArray(heapt,8);
	}
}


int main(void)
{
	//int length = 5;

	//int heapt[8]={0,1,2,3,4,5,6,7};//Ok
	//int heapt[8]={40,25,30,18,12,50,75,10};
	MaxHeapify(heapt,8,1);
	//printArray(heapt,8);
	BuildMaxHeap(heapt,8);
	printArray(heapt,8);
	HeapSort(heapt,8);
	//printArray(heapt,8);

	while(true);
	return 0;
}