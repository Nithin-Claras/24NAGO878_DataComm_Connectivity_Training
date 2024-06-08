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
};
class Derived : public Base 
{
    int derived;
};
int main()
{
    Base baseObj;
    Derived derObj;
    baseObj = derObj;   // valid 
    // derObj = baseObj;

    return 0;
}



