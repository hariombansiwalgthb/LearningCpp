
#include <iostream>
#include <vector>
template <typename Container>
void printContainer(const Container& container)
{
	std::cout << "Elements of container :  ";
	for (const auto & element : container)
	{
		std::cout << element << " ";
	}
}

const int& SumOfAllElements(const std::vector<int>& vec) {
	printContainer(vec);
	int sum{};
	for (auto& elem: vec)
	{
		sum += elem;
	}
	return sum;
}

int main() {
	
	std::vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto& iSum = SumOfAllElements(vec);
	std::cout<<"\nSum = " << iSum<<std::endl;
    return 0;
}
