#include <iostream>

class Engine{int m_iCapacity{};};

class Car
{
private:
	int m_iModel{};
protected:
	Engine m_engine;
public:
	Car(int model) {}
};

class SportsCar : public Car
{
public:
	SportsCar(int model):Car(model) {} //explicitly user defined constructor with int param
	/*Cases where the implicit default constructor will not be generated in following cases:
 *1) If user has explicitly defined any non-default constructor.
 *2) The base class doesn't have the default constructor, here Car class doesn't have a
 *default constructor so the compiler can't generate default constructor for SportsCar
 *class as well.
 *3) The user-defined Non-Static-Class-Member doesn't have a default constructor,
 *ex: Engine class doesn't have a default constructor, thereby compiler won't generate
 *default compiler for SportsCar class.
 *4) If Base class Car has a private constructor.(both solution 1 & 2 won't work for this case)
 */
	//-------------------Solution-----------------//
 //SportsCar() = default; // solution 1: explicitly user defined default constructor.
 //SportsCar(int model=0){}//solution 2: explicitly defined constructor with default value params
};

int main()
{
	SportsCar obj;
}
