int LinearSearch(const int *arr, const int& len, const int& key)
{
	printArray(arr, len);
	cout << "Linear search: finding key= " << key << endl;
	for (int i = 0; i < len; ++i)
	{
		if (arr[i] == key)
		{cout << "Key " << key << " Found at index " << i << endl; return arr[i];}
	}
	return -1;
}
void printArray(const int* arr, const int& len) 
{
	cout << "Array: ";
	for (int i = 0; i < len; ++i){cout << "arr[" << i << "]=" << arr[i] << "," ;}
	cout << endl;
}
