#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        
    }
};
class Derived : public Base
{
    
};
int main()
{
    int ch;
    Base b_obj;
    Derived d_obj;
    Base &b_ref = d_obj;
    
    try
    {
        Derived &d_ref = dynamic_cast<Derived &>(b_ref);
    }
    catch(bad_typeid &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}

