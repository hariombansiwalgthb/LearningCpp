#include <iostream>
#include <vector>

const int& findLargestElementInVector(const std::vector<int>& vec)
{
	int iLargestNum{ std::numeric_limits<int>::min()};
	for (auto& elem: vec)
	{
		if (elem > iLargestNum)
		{
			iLargestNum = elem;
		}
	}
	return iLargestNum;
}

int main() {
	
	std::vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	const int& iLargestNumberInVector = findLargestElementInVector(vec);
	std::cout<<"\nLargest Number In Vector = " << iLargestNumberInVector <<std::endl;
    return 0;
}
