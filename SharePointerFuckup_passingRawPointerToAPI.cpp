#include<iostream>
#include <map>
#include<memory>

class Car
{
private:
	std::string licensePlate;
public:
	Car(const std::string& plate) : licensePlate(plate) {}

	std::string getLicensePlate() const {
		return licensePlate;
	}
};

class Garage
{
public:
	void ParkCar(int spotNumber, Car* car) {
		m_parkedCars[spotNumber] = car;
	}
	~Garage() {
		for (auto& pair : m_parkedCars) {
			delete pair.second; // delete Car object
		}
	}
	void ShowAllParkedCars() const {
		for (const auto& pair : m_parkedCars) {
			std::cout << "Spot " << pair.first << ": " << pair.second->getLicensePlate()
			<< std::endl;
		}
	}
private:
	std::map<int, Car*> m_parkedCars;
};

int main()
{
	std::shared_ptr<Car> spCarPtr= std::make_shared<Car>("ABC123");
	std::unique_ptr<Garage> GaragePtr = std::make_unique<Garage>();

	auto rawCarPtr = spCarPtr.get(); //getting raw pointer from spCarPtr
	GaragePtr->ParkCar(1, rawCarPtr);//passing raw pointer to parkCar
	GaragePtr->ShowAllParkedCars();//shows parked car
	//Bang Bang Undefined behaviour going to salute you soon.
	//shared_ptr spCarPtr singing "why this kolaveri" in background?
}
