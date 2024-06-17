static void func() const{} // static non-member function can't be const
void func1() const{} // non-static non-member function can't be const

class test
{
	int m_iNum{};
public:
	static void func() const {} // static member function can't be const because they can't access non-static members
	void func1()const { ++m_iNum; }// non-static class member functions can be marked const and they can't change class members
};
