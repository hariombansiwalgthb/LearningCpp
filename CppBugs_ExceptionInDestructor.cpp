#include <iostream>
class Car{
	std::string m_name{ "Default" };
public:
	Car(std::string name){
		m_name = name;
		std::cout << m_name << " Created" << std::endl;
	}
	~Car(){
		throw std::runtime_error("Exception during destruction");
	}
	void accelerate() { std::cout << m_name << " is accelerating" << std::endl; }
};
int main()
{
	try
	{
		Car car1{ "Ferrari_ROMA" };
		car1.accelerate();
	}catch (const std::exception& e){
		std::cerr << "Exception caught: " << e.what() << std::endl;
	}
}
