/******************************************************************************
Inheritance : We create a new class which extends(reuses) the existing class.
We are create a new class which is more specialized than the existing class(generic)
but by reusing the existing class.
Relations : Inheritance is used to implement "is-a" relationship.
Access Specifier : Protected. 
Mode of Derivation : provided (public, private, protected). Public.
Types of Inheritance : Single, Multiple 
    We avoid using multiple inheritance.
    
Order of Construction: When we create an object of derived type,
    It invokes derived constructor, which in-turn calls base constructor.
Hybrid : Diamond of death.  Multiple copies of a common base class via different paths.
To avoid multiple copies, we use virtual base class (virtual inheritance)

Object Slicing
baseObj = derivedObj; (It copies base part from derivedObj and discards derived part).
We should write program which should not have object slicing.

derivedObj = baseObj;   // invalid.

virtual function.  Overriding.
Late Binding vs Early Binding.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

class Base 
{
    int base;
    int *base_ptr;
public:
    Base(int p_base = 0) : base(p_base)
    {
        cout << "Base Constructor \n";
        base_ptr = new int[10];
    }
    virtual ~Base()
    {
        cout << "Base Destructor \n";
        delete [] base_ptr;
    }
    virtual void display()
    {
        cout << "Base Display" << base << endl;
    }
};
class Derived : public Base 
{
    int derived;
    int *der_ptr;
public:
    Derived(int p_base, int p_derived) : Base(p_base), derived(p_derived)
    {
        cout << "Derived Constructor \n";
        der_ptr = new int[5];
    }
    ~Derived()
    {
        cout << "Derived Destructor \n";
        delete [] der_ptr;
    }
    void display()
    {
        cout << "Derived Display" << derived << endl;
    }
};

int main()
{
    //Base *ptr = new Base{12};
    Base *ptr = new Derived{1, 2};
    
    delete ptr;

    return 0;
}



