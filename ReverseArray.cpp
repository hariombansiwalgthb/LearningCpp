#include <iostream>
#include <numeric>

int reverse_array(int arr[], int size)
{
	int start{ 0 }, end{ size - 1 };
	while(start<end)
	{
		std::swap(arr[start], arr[end]);
		start++;
		end--;
	}
	return 0;
}

void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i];
	}
}

int main()
{
	int iArr[]{1,2,3,4,5,6,7,8,9};
	int size = sizeof(iArr) / sizeof(int);
	reverse_array(iArr, size);
	printArray(iArr,size);
	
}
