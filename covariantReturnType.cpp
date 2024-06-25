#include <iostream>
#include <memory>

// Base class
class Base {
public:
    virtual void show() const {
        std::cout << "Base class\n";
    }
    static std::unique_ptr<Base> create();
};

// Derived class
class Derived : public Base {
public:
    void show() const override {
        std::cout << "Derived class\n";
    }
    static std::unique_ptr<Derived> create();
};

// Create method for Base return Base's object
std::unique_ptr<Base> Base::create() {
    return std::make_unique<Base>();
}

// Create method for Derived returns Derived's object
std::unique_ptr<Derived> Derived::create() {
    return std::make_unique<Derived>();
}

// Independent Function to create objects
template<typename T>
std::unique_ptr<T> createObject() {
    return T::create();
}

int main() {
    auto baseObject = createObject<Base>();
    auto derivedObject = createObject<Derived>();

    baseObject->show();        // Output: Base class
    derivedObject->show();     // Output: Derived class

    return 0;
}
