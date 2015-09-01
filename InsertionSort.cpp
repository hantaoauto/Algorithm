/****************************************************************
插入排序
****************************************************************/
#include <iostream>
#include <vector>
#include <list>

using namespace std;
//从小到大排序
void InsertSort(int arr[], int len)
{
	for (int i = 1; i < len; i++)
	{
		for (int j = i-1; j >= 0 && arr[j] > arr[j+1]; j--)
		{
			int temp = arr[j+1];
			arr[j+1] = arr[j];
			arr[j] = temp;
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
	InsertSort(test, 10);
	printArray(test, 10);

	vector<int> buf;
	buf.push_back(12);
	buf.push_back(5);
	buf.push_back(14);
	buf.push_back(19);

	list<int> buff;
	buff.push_back(12);
	buff.push_back(5);
	buff.push_back(14);
	buff.push_back(19);

	buff.sort();

	for (list<int>::iterator iter = buff.begin(); iter!=buff.end(); iter++)
	{
		cout << *iter << endl;
	}

	while(true);
	return 0;
}