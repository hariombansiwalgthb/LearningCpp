#include <iostream>

int printUniquePairs(int arr[], int size)
{
	for (int i = 0; i < size; ++i)
	{
		int x = arr[i];
		for (int j = i+1; j < size; ++j)
		{
			int y = arr[j];
			std::cout << x << y<< std::endl;
		}
		std::cout << std::endl;
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
	printUniquePairs(iArr, size);
	printArray(iArr,size);
	
}
