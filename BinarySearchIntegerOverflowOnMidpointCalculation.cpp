#include <iostream>
#include <vector>
#include <limits>
#include <numeric>

// Function to simulate binary search with potential overflow
int BinarySearchOverflowSimulation(const int* const arr, const int& len, const int& key) {
	if (len>0)
	{
		int iStartIndex{}, iEndIndex{ len - 1 }, mid{};
		int iteration{};
		while (iStartIndex <= iEndIndex) {
			++iteration;
			std::cout << "-------------------Iteration Cycle---------------------: " << iteration <<std::endl;
			std::cout << "start = " << iStartIndex << std::endl;
			std::cout << "end = " << iEndIndex << std::endl;
			//this line can cause overflow
			mid =(iStartIndex + iEndIndex) /2; // here start + end = which breaches the limit a 32bit signed int can hold, //hence overflow happens
      //fix is to use arithmetic mean or use std::midpoint(statIndex, EndIndex) from numeric header
      //mid = std::midpoint(iStartIndex , iEndIndex);
      //mid = iStartIndex + (iEndIndex - iStartIndex)/2; //Arithmetic Mean			
      std::cout << "mid = " << mid << std::endl;
			if (key == arr[mid]) {
				std::cout << "Buffer Overflow for integer";
				std::cout << "Key " << key << " found at index " << mid << std::endl;
				return mid;
			}
			else if (key < arr[mid]) {iEndIndex = mid - 1;}
			else {iStartIndex = mid + 1;}
		}
		std::cout << "Key " << key << " not found" << std::endl;
	}
	else
	{
		std::cout << "Invalid length for array" << std::endl;
	}
    return -1;
}

int main() {
	try {
		// Large array size to simulate overflow
		constexpr int largeSize{ std::numeric_limits<int>::max() };
		std::cout << "creating a vector of large size: " << largeSize << std::endl;
		std::vector<int> largeVector(largeSize, 0);
		for (int i = 0; i < largeSize; ++i) { largeVector[i] = i; }
		std::cout << "created and filled vector of large size: " << largeVector.size() << std::endl;
		int key = largeSize - 1; // Key at the end of the array

		// Simulate binary search with potential overflow
		std::cout << "Going To Perform Binary search for Key: "<< key<< std::endl;
		BinarySearchOverflowSimulation(largeVector.data(), largeVector.size(), key);
	}
	catch (const std::bad_alloc& e) {
		std::cerr << "Memory allocation failed: " << e.what() << std::endl;
		return 1;
	}
    return 0;
}
