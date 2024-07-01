#include <iostream>
class Car{
public:
	Car() { CarName(); }
	virtual ~Car(){ CarName();}
	virtual void CarName(){ std::cout << "Default Car" << std::endl; }
};
class SportsCar : public Car
{
public:
	SportsCar(){}
	virtual ~SportsCar(){  }
	virtual void CarName()  override{std::cout << "Sports Car" << std::endl;}
};
int main()
{
	SportsCar sportsCarObj;
}
