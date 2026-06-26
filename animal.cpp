#include <iostream>

// Abstract Parent Class
class Animal {
public:
    // Pure virtual function (No body, ends with = 0)
    // This forces every child class to make its own sound.
    virtual void makeSound() = 0; 
};

// Child Class 1
class Dog : public Animal {
public:
    // Concrete implementation for Dog
    void makeSound() override {
        std::cout << "Woof! Woof!" << std::endl;
    }
};

// Child Class 2
class Cat : public Animal {
public:
    // Concrete implementation for Cat
    void makeSound() override {
        std::cout << "Meow!" << std::endl;
    }
};

int main() {
    // Animal genericAnimal; // ERROR! Compiler won't allow this because of "= 0"

    // Create child objects
    Dog myDog;
    Cat myCat;

    // Use base class pointers to point to child objects
    Animal* animal1 = &myDog;
    Animal* animal2 = &myCat;

    // Call the pure virtual function dynamically
    animal1->makeSound(); // Prints: Woof! Woof!
    animal2->makeSound(); // Prints: Meow!

    return 0;
}
