#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void speak() { cout << "Animal sound" << endl; }
};
class Dog : public Animal
{
public:
    void speak() override { cout << "Woof!" << endl; }
};
class Cat : public Animal
{
public:
    void speak() override { cout << "Meow!" << endl; }
};

int main()
{
    Animal *myDog = new Dog();
    Animal *myCat = new Cat();

    myDog->speak(); // Outputs: Woof!
    myCat->speak(); // Outputs: Meow!

    delete myDog;
    delete myCat;

    return 0;
}