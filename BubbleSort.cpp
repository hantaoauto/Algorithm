/****************************************************************
冒泡排序
****************************************************************/
#include <iostream>
#include <vector>

using namespace std;
//从小到大排序
void BubbleSort(int arr[], int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < (len-1-i); j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void BubbleSort2(vector<int> &arr, int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < (len - i -1); j++)
		{
			if (arr[j]>arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void printArray(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main(void)
{
	int test[10]={6,4,8,7,1,2,5,9,3,0};
	BubbleSort(test, 10);
	printArray(test, 10);

	int test1[1]={0};
	BubbleSort(test1,1);
	printArray(test1,1);

	cout << "new bubble:" << endl;
	vector<int> t;
	t.push_back(6);
	t.push_back(4);
	t.push_back(8);
	t.push_back(7);
	t.push_back(1);
	t.push_back(2);
	t.push_back(5);

	BubbleSort2(t,t.size());
	for (auto temp : t)
	{
		cout << temp << endl;
	}

	while(true);
	return 0;
}