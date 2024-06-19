#include <iostream>

class myClass{};

// This class is equivalent to

class myClass
{
public:
	//default constructor
	/*Role of implicitly generated default constructor
	 *1)construct object
	 *2)Call Base Class's default constructor
	 *3)Call member's default constructor
	 */
	myClass() {} 
	
	//default destructor
	/*Role of implicitly generated default destructor
	 *1)destruct object
	 *2)Call Base Class's destructor
	 *3)Call member's destructor
	 */
	~myClass() {} 
	
	//copy constructor
	/*Role of implicitly generated copy constuctor is to perform a shallow member-wise
	 *copy initialization from source object (other) to this copy object being constructed.
	 */
	myClass(const myClass& other){} 

	//Copy Assignment Operator
	/*Role of implicitly generated copy assignment operator is to perform a shallow
	 *member-wise copy assignment from the source object (other) to this already existing object.
	 */
	myClass& operator=(const myClass& other) {}

	// Move Constructor
	/*Role of implicitly generated move constructor is that it performs a member - wise move of
	 *each member from the source object(other) to the target object being constructed.
	 */
	myClass(myClass&& other) noexcept{} 

	
	//Move Assignment Operator
	/*Role of implicitly generated move assignment operator is to move resources from a temporary
	 *source object (other) to an existing object of same type
	 *
	 */
	myClass& operator=(myClass&& other) noexcept{}
};
