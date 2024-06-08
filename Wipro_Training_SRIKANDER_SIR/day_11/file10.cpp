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
    Base *ptr = nullptr;
    cout << "1.Base 2.Derived" << endl;
    cin >> ch;
    if (ch == 1)
    {
        ptr = new Base();
    }
    else if(ch == 2)
    {
        ptr = new Derived();
    }
    
    try
    {
        cout << typeid(*ptr).name() << endl;
    }
    catch(bad_typeid &e)
    {
        cout << e.what() << endl;
    }
    return 0;
}

