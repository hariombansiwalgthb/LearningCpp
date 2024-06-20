#include <iostream>

class Engine{int m_iCapacity{};};

class Car
{
private:
	int m_iModel{};
protected:
	Engine m_engine;
};

class SportsCar : public Car
{
public:
    SportsCar(int model=0){}
};

int main()
{
	SportsCar obj;
}
