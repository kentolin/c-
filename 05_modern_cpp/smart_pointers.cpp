#include <iostream>
#include <memory> // for smart pointers
using namespace std;

class Demo
{
public:
    Demo() { cout << "Demo constructor called" << endl; }
    ~Demo() { cout << "Demo destructor called" << endl; }
    void show() { cout << "Demo::show() method called" << endl; }
};

int main()
{
    unique_ptr<Demo> ptr1 = make_unique<Demo>(); // unique_ptr managing a Demo object
    ptr1->show();                                // Accessing method using unique_ptr

    {
        shared_ptr<Demo> ptr2 = make_shared<Demo>(); // shared_ptr managing a Demo object
        ptr2->show();                                // Accessing method using shared_ptr

        {
            shared_ptr<Demo> ptr3 = ptr2;                                 // ptr3 shares ownership with ptr2
            cout << "Shared pointer count: " << ptr2.use_count() << endl; // prints 2
        } // ptr3 goes out of scope here, but the Demo object is not deleted
    }
    return 0;
}